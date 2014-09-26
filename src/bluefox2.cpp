#include "bluefox2/bluefox2.h"

#include <stdexcept>
#include <sensor_msgs/image_encodings.h>

namespace bluefox2 {

using namespace mvIMPACT::acquire;

Bluefox2::Bluefox2(const std::string &serial) : serial_(serial), dev_(nullptr) {
  if (!(dev_ = dev_mgr_.getDeviceBySerial(serial))) {
    throw std::runtime_error(serial + " not found. " + AvailableDevice());
  }
}

Bluefox2::~Bluefox2() {
  if (dev_ && dev_->isOpen()) {
    dev_->close();
  }
}

std::string Bluefox2::AvailableDevice() const {
  auto dev_cnt = dev_mgr_.deviceCount();
  std::string devices = std::to_string(dev_cnt) + " availabe device(s): ";
  for (decltype(dev_cnt) i = 0; i < dev_cnt; ++i) {
    devices += dev_mgr_.getDevice(i)->serial.read() + " ";
  }
  return devices;
}

void Bluefox2::Open() {
  try {
    dev_->open();
  }
  catch (const ImpactAcquireException &e) {
    throw std::runtime_error(e.what());
  }

  // These poniters will probably leak, but we don't really care
  fi_ = new FunctionInterface(dev_);
  stats_ = new Statistics(dev_);
  bf_set_ = new SettingsBlueFOX(dev_);
  cam_set_ = new CameraSettingsBlueFOX(dev_);
  sys_set_ = new SystemSettings(dev_);
  img_proc_ = new ImageProcessing(dev_);
}

void Bluefox2::Request() const { fi_->imageRequestSingle(); }

void Bluefox2::RequestImages(int n) const {
  for (int i = 0; i < n; ++i) {
    fi_->imageRequestSingle();
    int requestNr = fi_->imageRequestWaitFor(kTimeout);
    fi_->imageRequestUnlock(requestNr);
  }
}

bool Bluefox2::GrabImage(sensor_msgs::Image &image_msg,
                         sensor_msgs::CameraInfo &cinfo_msg) {
  int requestNr = INVALID_ID;
  requestNr = fi_->imageRequestWaitFor(kTimeout);
  // Check if request nr is valid
  if (!fi_->isRequestNrValid(requestNr)) {
    fi_->imageRequestUnlock(requestNr);
    return false;
  }
  request_ = fi_->getRequest(requestNr);
  // Check if request is ok
  if (!request_->isOK()) {
    fi_->imageRequestUnlock(requestNr);
    return false;
  }
  // Assemble image_msg
  auto channels = request_->imageChannelCount.read();
  image_msg.height = request_->imageHeight.read();
  image_msg.width = request_->imageWidth.read();
  image_msg.step = image_msg.width * channels;
  if (channels == 1) {
    image_msg.encoding = sensor_msgs::image_encodings::MONO8;
  } else if (channels == 3) {
    image_msg.encoding = sensor_msgs::image_encodings::BGR8;
  }
  size_t data_size = request_->imageSize.read();
  if (image_msg.data.size() != data_size) {
    image_msg.data.resize(data_size);
  }
  memcpy(&image_msg.data[0], request_->imageData.read(), data_size);
  cinfo_msg.binning_x = config_.binning ? 2 : 0;
  cinfo_msg.binning_y = config_.binning ? 2 : 0;
  // Release capture request
  fi_->imageRequestUnlock(requestNr);
  return true;
}

void Bluefox2::Configure(Bluefox2DynConfig &config) {
  SetPixelClock(config.fps);
  SetColor(&config.color);
  SetBinning(config.binning);
  SetGainDb(&config.gain_db);
  SetExpose(&config.expose_us, config.auto_expose);
  SetTrigger(&config.trigger);
  SetHdr(&config.hdr);
  SetWhiteBalance(&config.white_balance);
  SetDarkCurrentFilter(&config.dark_current_filter);
  // Cache this config
  config_ = config;
}

inline void Bluefox2::SetRequestCount(int count) const {
  sys_set_->requestCount.write(count);
}

void Bluefox2::SetPixelClock(double fps) const {
  const auto pclk_khz = cam_set_->pixelClock_KHz.read();
  const auto max_fps =
      PixelClockToFrameRate(pclk_khz, width(), height(), expose_us());
  // Do nothing if we have the capacity to deliver the required fps
  if (fps < max_fps) {
    return;
  }
  // Promote to highest pixel clock only if we ask for faster fps
  // Never decrease pixel clock
  const auto size = cam_set_->pixelClock_KHz.dictSize();
  const auto value = cam_set_->pixelClock_KHz.getTranslationDictValue(size - 1);
  cam_set_->pixelClock_KHz.write(value);
}

bool Bluefox2::IsColor() const { return product().back() == 'C'; }

///@todo: Maybe use something in image processing?
void Bluefox2::SetColor(bool *color) const {
  if (!IsColor()) {
    *color = false;
  }
  bf_set_->imageDestination.pixelFormat.write(*color ? idpfRGB888Packed
                                                     : idpfMono8);
}

void Bluefox2::SetBinning(bool cbm) const {
  cam_set_->binningMode.write(cbm ? cbmBinningHV : cbmOff);
}

void Bluefox2::SetExpose(int *expose_us, int auto_expose) const {
  switch (auto_expose) {
    case 0:
      // Manual
      SetExposeUs(expose_us);
      break;
    case 1:
      // Auto
      cam_set_->autoExposeControl.write(aecOn);
      break;
    case 2:
      // Auto fix
      cam_set_->autoExposeControl.write(aecOn);
      RequestImages(20);
      cam_set_->autoExposeControl.write(aecOff);
      *expose_us = cam_set_->expose_us.read();
      break;
    case 3: {
      // Auto clamp, from Shaojie Shen
      cam_set_->autoControlParameters.controllerSpeed.write(acsUserDefined);
      cam_set_->autoControlParameters.controllerGain.write(0.5);
      cam_set_->autoControlParameters.controllerIntegralTime_ms.write(100);
      cam_set_->autoControlParameters.controllerDerivativeTime_ms.write(0.0001);
      cam_set_->autoControlParameters.desiredAverageGreyValue.write(100);
      cam_set_->autoControlParameters.controllerDelay_Images.write(0);
      cam_set_->autoControlParameters.exposeLowerLimit_us.write(50);
      ClampProperty(cam_set_->expose_us, expose_us);
      cam_set_->autoControlParameters.exposeUpperLimit_us.write(*expose_us);
      cam_set_->autoExposeControl.write(aecOn);
      break;
    }
    default:
      // Manual
      SetExposeUs(expose_us);
  }
}

void Bluefox2::SetExposeUs(int *expose_us) const {
  cam_set_->autoExposeControl.write(aecOff);
  ClampProperty(cam_set_->expose_us, expose_us);
  cam_set_->expose_us.write(*expose_us);
}

void Bluefox2::SetGainDb(double *gain_db) const {
  cam_set_->autoGainControl.write(agcOff);
  ClampProperty(cam_set_->gain_dB, gain_db);
  cam_set_->gain_dB.write(*gain_db);
}

void Bluefox2::SetTrigger(int *ctm) const {
  if (*ctm == 1) {
    std::vector<TCameraTriggerMode> values;
    cam_set_->triggerMode.getTranslationDictValues(values);
    // OnDemand option not supported, can only use continuous
    if (std::find(values.cbegin(), values.cend(), ctmOnDemand) ==
        values.cend()) {
      *ctm = 0;
    }
  }
  cam_set_->triggerMode.write(*ctm ? ctmOnDemand : ctmContinuous);
}

void Bluefox2::SetHdr(bool *hdr) const {
  // Hdr not supported
  if (!cam_set_->getHDRControl().isAvailable()) {
    *hdr = false;
    return;
  }
  if (*hdr) {
    cam_set_->getHDRControl().HDRMode.write(cHDRmFixed0);
    cam_set_->getHDRControl().HDREnable.write(bTrue);
  } else {
    cam_set_->getHDRControl().HDREnable.write(bFalse);
  }
}

void Bluefox2::SetWhiteBalance(int *wbp) const {
  // Put white balance as unavailable if it's not a color camera
  if (!IsColor()) {
    *wbp = -1;
    return;
  }
  // Predefined and user wbp
  if (*wbp < 7) {
    *wbp = (*wbp < 0) ? img_proc_->whiteBalance.read() : *wbp;
    img_proc_->whiteBalance.write(static_cast<TWhiteBalanceParameter>(*wbp));
    return;
  }
  // Calibrate
  // Set wbp to user1
  img_proc_->whiteBalance.write(static_cast<TWhiteBalanceParameter>(wbpUser1));
  // Calibrate next frame
  img_proc_->whiteBalanceCalibration.write(wbcmNextFrame);
  // Request one image?
  RequestImages(1);
  // Set config to user1
  *wbp = static_cast<int>(wbpUser1);
}

void Bluefox2::SetDarkCurrentFilter(int *dcfm) const {
  img_proc_->darkCurrentFilterMode.write(
      static_cast<TDarkCurrentFilterMode>(*dcfm));
  // Special case for calibrate mode
  if (*dcfm == static_cast<int>(dcfmCalibrateDarkCurrent)) {
    // Read image count, and request some more images
    int dcfm_img_cnt = img_proc_->darkCurrentFilterCalibrationImageCount.read();
    RequestImages(dcfm_img_cnt + 5);
    // Then turn on immediately
    img_proc_->darkCurrentFilterMode.write(dcfmOn);
    *dcfm = GetDcfm();
  }
}

int Bluefox2::GetDcfm() const {
  return static_cast<int>(img_proc_->darkCurrentFilterMode.read());
}

void Bluefox2::SetMaster() const {
  cam_set_->triggerMode.write(ctmOnDemand);
  cam_set_->flashMode.write(cfmDigout0);
  cam_set_->flashType.write(cftStandard);
  cam_set_->flashToExposeDelay_us.write(0);
}

void Bluefox2::SetSlave() const {
  cam_set_->triggerMode.write(ctmOnHighLevel);
  cam_set_->triggerSource.write(ctsDigIn0);
  cam_set_->frameDelay_us.write(0);
}

double PixelClockToFrameRate(int pclk_khz, double width, double height,
                             double expose_us) {
  static const double kTriggerPulseWidthUs = 200;
  double frame_time_us = (width + 94) * (height + 45) / pclk_khz * 1e3;
  return 1e6 / (frame_time_us + expose_us + kTriggerPulseWidthUs);
}

}  // namespace bluefox2

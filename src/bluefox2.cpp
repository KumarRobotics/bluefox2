#include "bluefox2/bluefox2.h"

#include <stdexcept>
#include <sensor_msgs/image_encodings.h>

namespace bluefox2 {

using namespace mvIMPACT::acquire;

Bluefox2::Bluefox2(const std::string &serial)
    : serial_(serial), expose_us_(0), dev_(nullptr) {
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

  // These poniters will leak, but we don't really care
  fi_ = new FunctionInterface(dev_);
  stats_ = new Statistics(dev_);
  bf_set_ = new SettingsBlueFOX(dev_);
  sys_set_ = new SystemSettings(dev_);
}

void Bluefox2::Request() const { fi_->imageRequestSingle(); }

bool Bluefox2::GrabImage(sensor_msgs::Image &image_msg) {
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
  // Release capture request
  fi_->imageRequestUnlock(requestNr);
  return true;
}

void Bluefox2::Configure(Bluefox2DynConfig &config) {
  SetPixelClock(config.fps);
  SetColor(config.color);
  SetBinning(config.binning);
  SetGainDb(&config.gain_db);
  SetExposeUs(&config.expose_us);
  SetTrigger(&config.trigger);
  SetHdr(&config.hdr);
}

inline void Bluefox2::SetRequestCount(int count) const {
  sys_set_->requestCount.write(count);
}

void Bluefox2::SetPixelClock(double fps) const {
  const auto pclk_khz = bf_set_->cameraSetting.pixelClock_KHz.read();
  const auto max_fps =
      PixelClockToFrameRate(pclk_khz, width(), height(), expose_us());
  if (fps < max_fps) {
    return;
  }
  // Promote to highest pixel clock only if we ask for faster fps
  // Never decrease pixel clock
  const auto size = bf_set_->cameraSetting.pixelClock_KHz.dictSize();
  const auto value =
      bf_set_->cameraSetting.pixelClock_KHz.getTranslationDictValue(size - 1);
  bf_set_->cameraSetting.pixelClock_KHz.write(value);
}

inline void Bluefox2::SetColor(bool color) const {
  bf_set_->imageDestination.pixelFormat.write(color ? idpfRGB888Packed
                                                    : idpfMono8);
}

inline void Bluefox2::SetBinning(bool binning) const {
  bf_set_->cameraSetting.binningMode.write(binning ? cbmBinningHV : cbmOff);
}

void Bluefox2::SetExposeUs(int *expose_us) const {
  bf_set_->cameraSetting.autoExposeControl.write(aecOff);
  const int expose_min = bf_set_->cameraSetting.expose_us.getMinValue();
  const int expose_max = bf_set_->cameraSetting.expose_us.getMaxValue();
  *expose_us = clamp(*expose_us, expose_min, expose_max);
  bf_set_->cameraSetting.expose_us.write(*expose_us);
  // Cache expose_us
  expose_us_ = *expose_us;
}

void Bluefox2::SetGainDb(double *gain_db) const {
  bf_set_->cameraSetting.autoGainControl.write(agcOff);
  const double gain_min = bf_set_->cameraSetting.gain_dB.getMinValue();
  const double gain_max = bf_set_->cameraSetting.gain_dB.getMaxValue();
  *gain_db = clamp(*gain_db, gain_min, gain_max);
  bf_set_->cameraSetting.gain_dB.write(*gain_db);
}

void Bluefox2::SetTrigger(int *trigger) const {
  if (*trigger == 1) {
    std::vector<TCameraTriggerMode> values;
    bf_set_->cameraSetting.triggerMode.getTranslationDictValues(values);
    if (std::find(values.cbegin(), values.cend(), ctmOnDemand) ==
        values.cend()) {
      *trigger = 0;
    }
  }
  bf_set_->cameraSetting.triggerMode.write(*trigger ? ctmOnDemand
                                                    : ctmContinuous);
}

void Bluefox2::SetHdr(bool *hdr) const {
  if (!bf_set_->cameraSetting.getHDRControl().isAvailable()) {
    *hdr = false;
    return;
  }
  if (*hdr) {
    bf_set_->cameraSetting.getHDRControl().HDRMode.write(cHDRmFixed0);
    bf_set_->cameraSetting.getHDRControl().HDREnable.write(bTrue);
  } else {
    bf_set_->cameraSetting.getHDRControl().HDREnable.write(bFalse);
  }
}

void Bluefox2::SetMaster() const {
  bf_set_->cameraSetting.triggerMode.write(ctmOnDemand);
  bf_set_->cameraSetting.flashMode.write(cfmDigout0);
  bf_set_->cameraSetting.flashType.write(cftStandard);
  bf_set_->cameraSetting.flashToExposeDelay_us.write(0);
}

void Bluefox2::SetSlave() const {
  bf_set_->cameraSetting.triggerMode.write(ctmOnHighLevel);
  bf_set_->cameraSetting.triggerSource.write(ctsDigIn0);
  bf_set_->cameraSetting.frameDelay_us.write(0);
}

double PixelClockToFrameRate(int pclk_khz, double width, double height,
                             double expose_us) {
  static const double kTriggerPulseWidthUs = 200;
  double frame_time_us = (width + 94) * (height + 45) / pclk_khz * 1e3;
  return 1e6 / (frame_time_us + expose_us + kTriggerPulseWidthUs);
}

}  // namespace bluefox2

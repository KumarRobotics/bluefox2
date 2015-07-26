#include "bluefox2/bluefox2.h"
#include <sensor_msgs/fill_image.h>

namespace bluefox2 {

using namespace mvIMPACT::acquire;

Bluefox2::Bluefox2(const std::string &serial) : serial_(serial) {
  if (!(dev_ = dev_mgr_.getDeviceBySerial(serial))) {
    throw std::runtime_error(serial + " not found. " + AvailableDevice());
  }
  OpenDevice();
}

Bluefox2::~Bluefox2() {
  if (dev_ && dev_->isOpen()) {
    dev_->close();
  }
}

std::string Bluefox2::AvailableDevice() const {
  const auto dev_cnt = dev_mgr_.deviceCount();
  std::string devices = std::to_string(dev_cnt) + " availabe device(s): ";
  for (decltype(dev_mgr_.deviceCount()) i = 0; i < dev_cnt; ++i) {
    devices += dev_mgr_.getDevice(i)->serial.read() + " ";
  }
  return devices;
}

void Bluefox2::OpenDevice() {
  try {
    dev_->open();
  } catch (const ImpactAcquireException &e) {
    throw std::runtime_error(e.what());
  }

  // These poniters will probably leak, but we don't really care
  fi_ = new FunctionInterface(dev_);
  stats_ = new Statistics(dev_);
  bf_set_ = new SettingsBlueFOX(dev_);
  cam_set_ = new CameraSettingsBlueFOX(dev_);
  sys_set_ = new SystemSettings(dev_);
  bf_info_ = new InfoBlueDevice(dev_);
  img_proc_ = new ImageProcessing(dev_);
}

void Bluefox2::RequestSingle() const {
  int result = DMR_NO_ERROR;
  result = fi_->imageRequestSingle();
  if (result != DMR_NO_ERROR) {
    std::cout << serial() << ": Error while requesting image: "
              << ImpactAcquireException::getErrorCodeAsString(result)
              << std::endl;
  }
}

void Bluefox2::RequestImages(int n) const {
  for (int i = 0; i < n; ++i) {
    fi_->imageRequestSingle();
    int requestNr = fi_->imageRequestWaitFor(kTimeout);
    fi_->imageRequestUnlock(requestNr);
  }
}

bool Bluefox2::GrabImage(sensor_msgs::Image &image_msg,
                         sensor_msgs::CameraInfo &cinfo_msg) {
  // NOTE: A request object is locked for the driver whenever the corresponding
  // wait function returns a valid request object.
  // All requests returned by
  // mvIMPACT::acquire::FunctionInterface::imageRequestWaitFor need to be
  // unlocked no matter which result mvIMPACT::acquire::Request::requestResult
  // contains.
  // http://www.matrix-vision.com/manuals/SDK_CPP/ImageAcquisition_section_capture.html

  int request_nr = INVALID_ID;
  request_nr = fi_->imageRequestWaitFor(kTimeout);

  // Check if request is valid
  if (!fi_->isRequestNrValid(request_nr)) {
    // We do not need to unlock here because the request is not valid?
    fi_->imageRequestUnlock(request_nr);
    return false;
  }

  request_ = fi_->getRequest(request_nr);

  // Check if request is ok
  if (!request_->isOK()) {
    // need to unlock here because the request is valid even if it is not ok
    fi_->imageRequestUnlock(request_nr);
    return false;
  }

  std::string encoding;
  const auto bayer_mosaic_parity = request_->imageBayerMosaicParity.read();
  if (bayer_mosaic_parity != bmpUndefined) {
    // Bayer pattern
    const auto bytes_per_pixel = request_->imageBytesPerPixel.read();
    encoding = BayerPatternToEncoding(bayer_mosaic_parity, bytes_per_pixel);
  } else {
    encoding = PixelFormatToEncoding(request_->imagePixelFormat.read());
  }
  sensor_msgs::fillImage(image_msg, encoding, request_->imageHeight.read(),
                         request_->imageWidth.read(),
                         request_->imageLinePitch.read(),
                         request_->imageData.read());

  // Release capture request
  fi_->imageRequestUnlock(request_nr);
  return true;
}

void Bluefox2::Configure(Bluefox2DynConfig &config) {
  // Clear request queue
  fi_->imageRequestReset(0, 0);
  config_ = config;

  // Pixel Format
  SetIdpf(config.idpf);
  // Binning
  SetCbm(config.cbm);

  SetAgc(config.agc, config.gain_db);
  SetAec(config.aec, config.expose_us);
  //  SetAcs(config.acs);

  // TODO: need to fix all these settings
  SetPixelClock(config.fps);

  SetAverageGreyValue(&config.des_grey_value);

  SetCtm(&config.ctm);
  SetHdr(&config.hdr);
  SetWbp(config.wbp, config.r_gain, config.g_gain, config.b_gain);
  SetDcfm(&config.dcfm);
  // Cache this config
  config_ = config;
}

void Bluefox2::SetIdpf(int &idpf) const {
  WriteProperty(bf_set_->imageDestination.pixelFormat, idpf);
  ReadProperty(bf_set_->imageDestination.pixelFormat, idpf);
}

void Bluefox2::SetCbm(int &cbm) const {
  WriteProperty(cam_set_->binningMode, cbm);
  ReadProperty(cam_set_->binningMode, cbm);
}

void Bluefox2::SetAgc(bool &auto_gain, double &gain_db) const {
  if (auto_gain) {
    WriteProperty(cam_set_->autoGainControl, auto_gain);
    ReadProperty(cam_set_->autoGainControl, auto_gain);
  } else {
    WriteProperty(cam_set_->gain_dB, gain_db);
    ReadProperty(cam_set_->gain_dB, gain_db);
  }
}

void Bluefox2::SetAec(bool &auto_expose, int &expose_us) const {
  if (auto_expose) {
    WriteProperty(cam_set_->autoExposeControl, auto_expose);
    ReadProperty(cam_set_->autoExposeControl, auto_expose);
  } else {
    WriteProperty(cam_set_->expose_us, expose_us);
    ReadProperty(cam_set_->expose_us, expose_us);
  }
}

// TODO: fix
void Bluefox2::SetRequestCount(int count) const {
  sys_set_->requestCount.write(count);
}

bool Bluefox2::IsColorSupported() const {
  const auto color_mode = bf_info_->sensorColorMode.read();
  return color_mode > iscmMono;
}

void Bluefox2::SetPixelClock(double fps) const {
  const auto pclk_khz = cam_set_->pixelClock_KHz.read();
  const auto max_fps =
      PixelClockToFrameRate(pclk_khz, width(), height(), config_expose_us());
  // Do nothing if we have the capacity to deliver the required fps
  if (fps < max_fps) return;
  // Promote to highest pixel clock only if we ask for faster fps
  // Never decrease pixel clock
  const auto size = cam_set_->pixelClock_KHz.dictSize();
  const auto value = cam_set_->pixelClock_KHz.getTranslationDictValue(size - 1);
  cam_set_->pixelClock_KHz.write(value);
}

void Bluefox2::SetAverageGreyValue(int *des_gray_val) const {
  ClampProperty(cam_set_->autoControlParameters.desiredAverageGreyValue,
                *des_gray_val);
  cam_set_->autoControlParameters.desiredAverageGreyValue.write(*des_gray_val);
}

void Bluefox2::SetExposeUs(int &expose_us) const {
  cam_set_->autoExposeControl.write(aecOff);
  ClampProperty(cam_set_->expose_us, expose_us);
  cam_set_->expose_us.write(expose_us);
}

void Bluefox2::SetAcs(int acs) const {
  cam_set_->autoControlParameters.controllerSpeed.write(
      static_cast<TAutoControlSpeed>(acs));
}

void Bluefox2::SetGainDb(double &gain_db) const {
  cam_set_->autoGainControl.write(agcOff);
  ClampProperty(cam_set_->gain_dB, gain_db);
  cam_set_->gain_dB.write(gain_db);
}

void Bluefox2::SetCtm(int *ctm) const {
  // Do nothing when set to hard sync
  if (*ctm == 2) return;
  if (*ctm == 1) {
    // OnDemand option not supported, can only use continuous
    if (!IsCtmOnDemandSupported()) *ctm = 0;
  }
  cam_set_->triggerMode.write(*ctm ? ctmOnDemand : ctmContinuous);
}

bool Bluefox2::IsCtmOnDemandSupported() const {
  std::vector<TCameraTriggerMode> values;
  cam_set_->triggerMode.getTranslationDictValues(values);
  return std::find(values.cbegin(), values.cend(), ctmOnDemand) !=
         values.cend();
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

void Bluefox2::SetWbp(int &wbp, double &r_gain, double &g_gain,
                      double &b_gain) const {
  // Put white balance as unavailable if it's not a color camera
  if (!IsColorSupported()) {
    wbp = -1;
    return;
  }

  // Predefined wbp
  if (wbp < 6) {
    wbp = (wbp < 0) ? img_proc_->whiteBalance.read() : wbp;
    img_proc_->whiteBalance.write(static_cast<TWhiteBalanceParameter>(wbp));
  } else if (wbp == 6) {
    WhiteBalanceSettings wbp_set = img_proc_->getWBUserSetting(0);
    wbp_set.redGain.write(r_gain);
    wbp_set.greenGain.write(g_gain);
    wbp_set.blueGain.write(b_gain);
    //    return;
  } else if (wbp == 10) {
    // Set wbp to user1
    img_proc_->whiteBalance.write(
        static_cast<TWhiteBalanceParameter>(wbpUser1));
    // Calibrate next frame
    img_proc_->whiteBalanceCalibration.write(wbcmNextFrame);
    // Request one image?
    RequestImages(1);
    // Set config to user1 and update gains
    WhiteBalanceSettings wbp_set = img_proc_->getWBUserSetting(0);
    wbp = static_cast<int>(wbpUser1);
    r_gain = wbp_set.redGain.read();
    g_gain = wbp_set.greenGain.read();
    b_gain = wbp_set.blueGain.read();
  }
}

void Bluefox2::SetDcfm(int *dcfm) const {
  if (*dcfm == dcfmCalibrateDarkCurrent) {
    // Special case for calibrate mode
    // Set "OffsetAutoCalibration = Off"
    cam_set_->offsetAutoCalibration.write(aocOff);
    // Set the (Filter-) "Mode = Calibrate"
    img_proc_->darkCurrentFilterMode.write(dcfmCalibrateDarkCurrent);
    // Read image count, and request some more images
    int img_cnt = img_proc_->darkCurrentFilterCalibrationImageCount.read();
    RequestImages(img_cnt);
    // Then turn on immediately
    img_proc_->darkCurrentFilterMode.write(dcfmOn);
    cam_set_->offsetAutoCalibration.write(aocOn);
    *dcfm = GetDcfm();
  } else {
    img_proc_->darkCurrentFilterMode.write(
        static_cast<TDarkCurrentFilterMode>(*dcfm));
  }
}

void Bluefox2::SetMM(int mm) const {
  img_proc_->mirrorModeGlobal.write(static_cast<TMirrorMode>(mm));
}

int Bluefox2::GetDcfm() const {
  return static_cast<int>(img_proc_->darkCurrentFilterMode.read());
}

void Bluefox2::SetMaster() const {
  // Prefer on demand if it's available
  if (IsCtmOnDemandSupported()) {
    cam_set_->triggerMode.write(ctmOnDemand);
  } else {
    cam_set_->triggerMode.write(ctmContinuous);
  }
  cam_set_->flashMode.write(cfmDigout0);
  cam_set_->flashType.write(cftStandard);
  cam_set_->flashToExposeDelay_us.write(0);
  std::cout << serial() << ": master" << std::endl;
}

void Bluefox2::SetSlave() const {
  cam_set_->triggerMode.write(ctmOnHighLevel);
  cam_set_->triggerSource.write(ctsDigIn0);
  cam_set_->frameDelay_us.write(0);
  std::cout << serial() << ": slave" << std::endl;
}

}  // namespace bluefox2

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
  //  stats_ = new Statistics(dev_);
  bf_set_ = new SettingsBlueFOX(dev_);
  cam_set_ = new CameraSettingsBlueFOX(dev_);
  sys_set_ = new SystemSettings(dev_);
  bf_info_ = new InfoBlueDevice(dev_);
  img_proc_ = new ImageProcessing(dev_);
}

int Bluefox2::GetExposeUs() const {
  if (request_ && request_->isOK()) {
    return request_->infoExposeTime_us.read();
  } else {
    return 0;
  }
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
    int requestNr = fi_->imageRequestWaitFor(timeout_ms_);
    fi_->imageRequestUnlock(requestNr);
  }
}

bool Bluefox2::GrabImage(sensor_msgs::Image &image_msg) {
  // NOTE: A request object is locked for the driver whenever the corresponding
  // wait function returns a valid request object.
  // All requests returned by
  // mvIMPACT::acquire::FunctionInterface::imageRequestWaitFor need to be
  // unlocked no matter which result mvIMPACT::acquire::Request::requestResult
  // contains.
  // http://www.matrix-vision.com/manuals/SDK_CPP/ImageAcquisition_section_capture.html

  int request_nr = INVALID_ID;
  request_nr = fi_->imageRequestWaitFor(timeout_ms_);

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

  // Area of Intreset
  SetAoi(config.width, config.height);
  // Pixel Format
  SetIdpf(config.idpf);
  // Binning
  SetCbm(config.cbm);

  // Gain
  SetAgc(config.agc, config.gain_db);
  // Expose
  SetAec(config.aec, config.expose_us);
  // Auto Controller
  SetAcs(config.acs, config.des_grey_value);

  // White Balance
  SetWbp(config.wbp, config.r_gain, config.g_gain, config.b_gain);
  // High Dynamic Range
  SetHdr(config.hdr);
  // Dark Current Filter
  SetDcfm(config.dcfm);
  // Pixel Clock
  SetCpc(config.cpc);
  // Trigger Mode
  SetCtm(config.ctm);
  // Trigger Source
  SetCts(config.cts);
  // Request
  FillCaptureQueue(config.request);

  // Cache this config
  config_ = config;
}

void Bluefox2::FillCaptureQueue(int &n) const {
  n = std::min<int>(n, fi_->requestCount() - 1);
  for (int i = 0; i < n; ++i) {
    fi_->imageRequestSingle();
  }
}

void Bluefox2::SetAoi(int &width, int &height) const {
  // FIXEM: not implemented
}

void Bluefox2::SetIdpf(int &idpf) const {
  WriteAndReadProperty(bf_set_->imageDestination.pixelFormat, idpf);
}

void Bluefox2::SetCbm(int &cbm) const {
  WriteAndReadProperty(cam_set_->binningMode, cbm);
}

void Bluefox2::SetAgc(bool &auto_gain, double &gain_db) const {
  WriteAndReadProperty(cam_set_->autoGainControl, auto_gain);
  if (!auto_gain) {
    WriteAndReadProperty(cam_set_->gain_dB, gain_db);
  }
}

void Bluefox2::SetAec(bool &auto_expose, int &expose_us) const {
  WriteAndReadProperty(cam_set_->autoExposeControl, auto_expose);
  if (!auto_expose) {
    WriteAndReadProperty(cam_set_->expose_us, expose_us);
  }
}

// TODO: consider adding auto control limit here
void Bluefox2::SetAcs(int &acs, int &des_gray_val) const {
  if (cam_set_->autoControlParameters.isAvailable()) {
    bool agc = false, aec = false;
    ReadProperty(cam_set_->autoGainControl, agc);
    ReadProperty(cam_set_->autoExposeControl, aec);
    if (agc || aec) {
      if (acs != Bluefox2Dyn_acs_unavailable) {
        WriteProperty(cam_set_->autoControlParameters.controllerSpeed, acs);
      }
      ReadProperty(cam_set_->autoControlParameters.controllerSpeed, acs);
      const auto acp = cam_set_->autoControlParameters;
      WriteAndReadProperty(acp.desiredAverageGreyValue, des_gray_val);
      return;
    }
  }
  acs = Bluefox2Dyn_acs_unavailable;
}

void Bluefox2::SetWbp(int &wbp, double &r_gain, double &g_gain,
                      double &b_gain) const {
  // Put white balance as unavailable if it's not a color camera
  if (bf_info_->sensorColorMode.read() <= iscmMono) {
    wbp = Bluefox2Dyn_wbp_unavailable;
    return;
  }

  // Predefined white balance parameters
  if (wbp < Bluefox2Dyn_wbp_user1) {
    if (wbp > Bluefox2Dyn_wbp_unavailable) {
      WriteProperty(img_proc_->whiteBalance, wbp);
    }
    ReadProperty(img_proc_->whiteBalance, wbp);
    return;
  }

  // User defined white balance parameters
  if (wbp == Bluefox2Dyn_wbp_user1) {
    WriteProperty(img_proc_->whiteBalance, wbp);
    auto wbp_set = img_proc_->getWBUserSetting(0);
    WriteAndReadProperty(wbp_set.redGain, r_gain);
    WriteAndReadProperty(wbp_set.greenGain, g_gain);
    WriteAndReadProperty(wbp_set.blueGain, b_gain);
    return;
  }

  // TODO: considering support continuous white balance calibration?
  if (wbp == Bluefox2Dyn_wbp_calibrate) {
    // Set wbp to user1
    WriteProperty(img_proc_->whiteBalance, wbpUser1);
    // Calibrate next frame
    WriteProperty(img_proc_->whiteBalanceCalibration, wbcmNextFrame);
    // Request one image?
    RequestImages(1);
    // Set config to user1 and update gains
    const auto wbp_set = img_proc_->getWBUserSetting(0);
    ReadProperty(wbp_set.redGain, r_gain);
    ReadProperty(wbp_set.greenGain, g_gain);
    ReadProperty(wbp_set.blueGain, b_gain);
    ReadProperty(img_proc_->whiteBalance, wbp);
  }
}

void Bluefox2::SetHdr(bool &hdr) const {
  auto &hdr_control = cam_set_->getHDRControl();
  if (!hdr_control.isAvailable()) {
    hdr = false;
    return;
  }

  WriteAndReadProperty(hdr_control.HDREnable, hdr);
  if (hdr) {
    // TODO: provide other HDR point?
    WriteProperty(hdr_control.HDRMode, cHDRmFixed0);
  }
}

void Bluefox2::SetDcfm(int &dcfm) const {
  if (dcfm == dcfmCalibrateDarkCurrent) {
    // Special case for calibrate mode
    // Set "OffsetAutoCalibration = Off"
    WriteProperty(cam_set_->offsetAutoCalibration, aocOff);
    // TODO: turn off auto control here?
    // Set filter mode = calibrate
    WriteProperty(img_proc_->darkCurrentFilterMode, dcfmCalibrateDarkCurrent);
    // Read image count, and request some more images
    int img_cnt = img_proc_->darkCurrentFilterCalibrationImageCount.read();
    RequestImages(img_cnt);
    // Then turn on immediately
    WriteProperty(img_proc_->darkCurrentFilterMode, dcfmOn);
    WriteProperty(cam_set_->offsetAutoCalibration, aocOn);
    ReadProperty(img_proc_->darkCurrentFilterMode, dcfm);
  } else {
    WriteAndReadProperty(img_proc_->darkCurrentFilterMode, dcfm);
  }
}

void Bluefox2::SetCpc(int &cpc) const {
  WriteAndReadProperty(cam_set_->pixelClock_KHz, cpc);
}

void Bluefox2::SetCtm(int &ctm) const {
  // Do nothing when set to hard sync
  if (ctm == Bluefox2Dyn_hard_sync) return;
  WriteAndReadProperty(cam_set_->triggerMode, ctm);
}

void Bluefox2::SetCts(int &cts) const {
  // Do nothing when trigger source is not visible
  if (!cam_set_->triggerSource.isVisible()) {
    cts = Bluefox2Dyn_cts_unavailable;
    return;
  }
  WriteAndReadProperty(cam_set_->triggerSource, cts);
}

bool Bluefox2::IsCtmOnDemandSupported() const {
  std::vector<TCameraTriggerMode> values;
  cam_set_->triggerMode.getTranslationDictValues(values);
  return std::find(values.cbegin(), values.cend(), ctmOnDemand) !=
         values.cend();
}

void Bluefox2::SetMM(int mm) const {
  WriteProperty(img_proc_->mirrorModeGlobal, mm);
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

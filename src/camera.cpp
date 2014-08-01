#include "bluefox2/camera.h"

#include <iostream>
using std::cout;
using std::endl;
#include <stdexcept>
using std::runtime_error;
#include <sstream>
using std::ostringstream;
#include <unistd.h>

using namespace mvIMPACT::acquire;

namespace bluefox2 {

Camera::Camera(const std::string &serial) { FindDevice(serial); }

Camera::~Camera() {
  // Close device if possible
  if (dev_ && dev_->isOpen()) {
    dev_->close();
  }
}

void Camera::Open() {
  try {
    dev_->open();
  }
  catch (const ImpactAcquireException &e) {
    throw runtime_error("Failed to open device" + serial_);
  }

  fi_ = new FunctionInterface(dev_);
  stats_ = new Statistics(dev_);
  bf_settings_ = new SettingsBlueFOX(dev_);
  sys_settings_ = new SystemSettings(dev_);
}

void Camera::Configure(const CameraConfig &config) {
  cout << label_ << serial_ << ": Configuring camera" << endl;
  SetRequestCount(1);
  SetBinning(config.binning);
  SetColor(config.color);
  SetExpose(config.expose, config.expose_us);
  SetGainDb(config.gain_db);
  SetTrigger(config.trigger);
  SetHdr(config.hdr);
}

void Camera::FindDevice(const std::string &serial) {
  auto dev_cnt = dev_mgr_.deviceCount();
  cout << label_ << "Device count: " << dev_cnt << endl;
  if (dev_cnt <= 0) {
    throw runtime_error("No device found");
  }
  for (decltype(dev_cnt) i = 0; i < dev_cnt; ++i) {
    if (dev_mgr_[i]->serial.read() == serial) {
      dev_ = dev_mgr_[i];
    }
  }
  // Print all available device when not found
  if (!dev_) {
    ostringstream error_msg;
    error_msg << "Device not found: " << serial << ". Available device:";
    for (decltype(dev_cnt) i = 0; i < dev_cnt; ++i) {
      error_msg << " " << dev_mgr_[i]->serial.readS();
    }
    throw runtime_error(error_msg.str());
  }
  serial_ = dev_->serial.read();
  cout << label_ << "Found device: " << serial_ << endl;
}

void Camera::Request() { fi_->imageRequestSingle(); }

bool Camera::Grab(cv::Mat &image) {
  int requestNr = INVALID_ID;
  requestNr = fi_->imageRequestWaitFor(kTimeout);

  // Check if request nr is valid
  if (!fi_->isRequestNrValid(requestNr)) {
    fi_->imageRequestUnlock(requestNr);
    cout << label_ << serial_ << ": Invalid image request." << endl;
    return false;
  }

  request_ = fi_->getRequest(requestNr);

  // Check if request is ok
  if (!request_->isOK()) {
    fi_->imageRequestUnlock(requestNr);
    cout << label_ << serial_ << ": Request not ok." << endl;
    return false;
  }

  int channel = request_->imageChannelCount.read();
  int height = request_->imageHeight.read();
  int width = request_->imageWidth.read();
  int cv_type;
  if (channel == 1) {
    cv_type = CV_8UC1;
  } else if (channel == 3) {
    cv_type = CV_8UC3;
  }
  image.create(cv::Size(width, height), cv_type);
  // Copy data
  memcpy(image.data, request_->imageData.read(), request_->imageSize.read());

  // Release capture request
  fi_->imageRequestUnlock(requestNr);

  return true;
}

void Camera::SetBinning(bool binning) {
  auto binning_enum = binning ? cbmBinningHV : cbmOff;
  bf_settings_->cameraSetting.binningMode.write(binning_enum);
  //  cout << "binning: " << bf_settings_->cameraSetting.binningMode.readS()
  //       << endl;
}

void Camera::SetColor(bool color) {
  auto pixel_enum = color ? idpfRGB888Packed : idpfRaw;
  bf_settings_->imageDestination.pixelFormat.write(pixel_enum);
  //  cout << "pixel format: "
  //       << bf_settings_->imageDestination.pixelFormat.readS() << endl;
}

void Camera::SetExpose(int expose, int expose_us) {
  switch (expose) {
  case 0:
    // Manual expose
    SetExposeUs(expose_us);
    break;
  case 1:
    // Auto expose
    SetAutoExpose();
    break;
  default:
    break;
  }
  cout << "expose mode: " << expose << " expose_us: " << GetExposeUs() << endl;
}

void Camera::SetAutoExpose() {
  bf_settings_->cameraSetting.autoExposeControl.write(aecOn);
}

bool Camera::SetExposeUs(int expose_us) {
  bf_settings_->cameraSetting.autoExposeControl.write(aecOff);
  auto expose_min = bf_settings_->cameraSetting.expose_us.getMinValue();
  auto expose_max = bf_settings_->cameraSetting.expose_us.getMaxValue();
  if (expose_us > expose_max || expose_us < expose_min) {
    return false;
  }
  bf_settings_->cameraSetting.expose_us.write(expose_us);
  return true;
}

int Camera::GetExposeUs() const {
  auto aecOld = bf_settings_->cameraSetting.autoExposeControl.read();
  bf_settings_->cameraSetting.autoExposeControl.write(aecOff);
  int expose_us = bf_settings_->cameraSetting.expose_us.read();
  bf_settings_->cameraSetting.autoExposeControl.write(aecOld);
  return expose_us;
}

bool Camera::SetGainDb(double gain_db) {
  bf_settings_->cameraSetting.autoGainControl.write(agcOff);
  auto gain_min = bf_settings_->cameraSetting.gain_dB.getMinValue();
  auto gain_max = bf_settings_->cameraSetting.gain_dB.getMaxValue();
  if (gain_db < gain_min || gain_db > gain_max) {
    return false;
  }
  bf_settings_->cameraSetting.gain_dB.write(gain_db);
  return true;
}

void Camera::SetRequestCount(int count) {
  sys_settings_->requestCount.write(count);
}

void Camera::SetTrigger(int trigger) {
  auto trigger_enum = trigger ? ctmOnDemand : ctmContinuous;
  bf_settings_->cameraSetting.triggerMode.write(trigger_enum);
}

void Camera::SetHdr(bool hdr) {
  if (hdr) {
    bf_settings_->cameraSetting.getHDRControl().HDRMode.write(cHDRmFixed0);
    bf_settings_->cameraSetting.getHDRControl().HDREnable.write(bTrue);
  } else {
    bf_settings_->cameraSetting.getHDRControl().HDREnable.write(bFalse);
  }
}

void Camera::SetMaster() {
  bf_settings_->cameraSetting.triggerMode.write(ctmOnDemand);
  bf_settings_->cameraSetting.flashMode.write(cfmDigout0);
  bf_settings_->cameraSetting.flashType.write(cftStandard);
  bf_settings_->cameraSetting.flashToExposeDelay_us.write(0);
  cout << "Set master: " << endl;
}

void Camera::SetSlave() {
  bf_settings_->cameraSetting.triggerMode.write(ctmOnHighLevel);
  bf_settings_->cameraSetting.triggerSource.write(ctsDigIn0);
  bf_settings_->cameraSetting.frameDelay_us.write(0);
  cout << "Set slave: " << endl;
}

}  // namespace bluefox2

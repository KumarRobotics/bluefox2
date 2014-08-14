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

Camera::Camera(const std::string &serial)
    : label_("\033[0;34m[BLFOX]:\033[0m "),
      dev_(NULL),
      fi_(NULL),
      stats_(NULL),
      request_(NULL),
      bf_settings_(NULL),
      sys_settings_(NULL) {
  FindDevice(serial);
}

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
  // SetHdr(config.hdr);
}

void Camera::FindDevice(const std::string &serial) {
  unsigned int dev_cnt = dev_mgr_.deviceCount();
  cout << label_ << "Device count: " << dev_cnt << endl;
  if (dev_cnt <= 0) {
    throw runtime_error("No device found");
  }
  for (unsigned int i = 0; i < dev_cnt; ++i) {
    if (dev_mgr_[i]->serial.read() == serial) {
      dev_ = dev_mgr_[i];
      break;
    }
  }
  // Print all available device when not found
  if (!dev_) {
    ostringstream error_msg;
    error_msg << "Device not found: " << serial << ". Available device:";
    for (unsigned int i = 0; i < dev_cnt; ++i) {
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
  bf_settings_->cameraSetting.binningMode.write(binning ? cbmBinningHV
                                                        : cbmOff);
}

void Camera::SetColor(bool color) {
  bf_settings_->imageDestination.pixelFormat.write(color ? idpfRGB888Packed
                                                         : idpfRaw);
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
}

void Camera::SetAutoExpose() {
  bf_settings_->cameraSetting.autoExposeControl.write(aecOn);
}

bool Camera::SetExposeUs(int expose_us) {
  bf_settings_->cameraSetting.autoExposeControl.write(aecOff);
  int expose_min = bf_settings_->cameraSetting.expose_us.getMinValue();
  int expose_max = bf_settings_->cameraSetting.expose_us.getMaxValue();
  if (expose_us > expose_max || expose_us < expose_min) {
    return false;
  }
  bf_settings_->cameraSetting.expose_us.write(expose_us);
  return true;
}

int Camera::GetExposeUs() const {
  TAutoExposureControl aecOld =
      bf_settings_->cameraSetting.autoExposeControl.read();
  bf_settings_->cameraSetting.autoExposeControl.write(aecOff);
  int expose_us = bf_settings_->cameraSetting.expose_us.read();
  bf_settings_->cameraSetting.autoExposeControl.write(aecOld);
  return expose_us;
}

bool Camera::SetGainDb(double gain_db) {
  bf_settings_->cameraSetting.autoGainControl.write(agcOff);
  double gain_min = bf_settings_->cameraSetting.gain_dB.getMinValue();
  double gain_max = bf_settings_->cameraSetting.gain_dB.getMaxValue();
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
  bf_settings_->cameraSetting.triggerMode.write(trigger ? ctmOnDemand
                                                        : ctmContinuous);
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

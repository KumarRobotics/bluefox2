#include "bluefox2/bluefox2.h"

#include <stdexcept>
#include <sensor_msgs/image_encodings.h>

namespace bluefox2 {

using namespace mvIMPACT::acquire;

Bluefox2::Bluefox2(const std::string &serial) : dev_{nullptr} {
  if (!(dev_ = dev_mgr_.getDeviceBySerial(serial))) {
    throw std::runtime_error(serial + " not found. " + AvailableDevice());
  }
}

Bluefox2::~Bluefox2() {
  if (dev_ && dev_->isOpen()) dev_->close();
}

std::string Bluefox2::AvailableDevice() const {
  auto dev_cnt = dev_mgr_.deviceCount();
  std::string devices = std::to_string(dev_cnt) + " availabe device(s): ";
  for (decltype(dev_cnt) i = 0; i < dev_cnt; ++i) {
    devices += dev_mgr_.getDevice(i)->serial.read();
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

  fi_ = new FunctionInterface(dev_);
  stats_ = new Statistics(dev_);
  bf_settings_ = new SettingsBlueFOX(dev_);
  sys_settings_ = new SystemSettings(dev_);
  cam_settings_ = new CameraSettingsBlueDevice(dev_);
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

void Bluefox2::Configure(Bluefox2DynConfig &config) { SetColor(config.color); }

void Bluefox2::SetRequestCount(int count) const {
  sys_settings_->requestCount.write(count);
}

void Bluefox2::SetColor(bool color) const {
  bf_settings_->imageDestination.pixelFormat.write(color ? idpfRGB888Packed
                                                         : idpfMono8);
}

/*
void Camera::Configure(const CameraConfig &config) {
  cout << label_ << serial_ << ": Configuring camera" << endl;
  SetRequestCount(2);
  SetBinning(config.binning);
  SetColor(config.color);
  SetExpose(config.expose, config.expose_us);
  SetGainDb(config.gain_db);
  SetTrigger(config.trigger);
  cam_settings_->pixelClock_KHz.write(cpc40000KHz);
  // SetHdr(config.hdr);
}
*/

// void Bluefox2::SetBinning(bool binning) {
//  bf_settings_->cameraSetting.binningMode.write(binning ? cbmBinningHV
//                                                        : cbmOff);
//}

// void Bluefox2::SetColor(bool color) {
//  bf_settings_->imageDestination.pixelFormat.write(color ? idpfRGB888Packed
//                                                         : idpfRaw);
//  if (color) {
//    bf_settings_->imageProcessing.whiteBalance.write(wbpFluorescent);
//  }
//}

// void Camera::SetExpose(int expose, int expose_us) {
//  switch (expose) {
//    case 0:
//      // Manual expose
//      SetExposeUs(expose_us);
//      break;
//    case 1:
//      // Auto expose
//      SetAutoExpose();
//      break;
//    default:
//      break;
//  }
//}

// void Camera::SetAutoExpose() {
//  bf_settings_->cameraSetting.autoExposeControl.write(aecOn);
//}

// bool Camera::SetExposeUs(int expose_us) {
//  bf_settings_->cameraSetting.autoExposeControl.write(aecOff);
//  int expose_min = bf_settings_->cameraSetting.expose_us.getMinValue();
//  int expose_max = bf_settings_->cameraSetting.expose_us.getMaxValue();
//  if (expose_us > expose_max || expose_us < expose_min) {
//    return false;
//  }
//  bf_settings_->cameraSetting.expose_us.write(expose_us);
//  return true;
//}

// int Camera::GetExposeUs() const {
//  TAutoExposureControl aecOld =
//      bf_settings_->cameraSetting.autoExposeControl.read();
//  bf_settings_->cameraSetting.autoExposeControl.write(aecOff);
//  int expose_us = bf_settings_->cameraSetting.expose_us.read();
//  bf_settings_->cameraSetting.autoExposeControl.write(aecOld);
//  return expose_us;
//}

// bool Camera::SetGainDb(double gain_db) {
//  bf_settings_->cameraSetting.autoGainControl.write(agcOff);
//  double gain_min = bf_settings_->cameraSetting.gain_dB.getMinValue();
//  double gain_max = bf_settings_->cameraSetting.gain_dB.getMaxValue();
//  if (gain_db < gain_min || gain_db > gain_max) {
//    return false;
//  }
//  bf_settings_->cameraSetting.gain_dB.write(gain_db);
//  return true;
//}

// void Camera::SetRequestCount(int count) {
//  sys_settings_->requestCount.write(count);
//}

// void Camera::SetTrigger(int trigger) {
//  bf_settings_->cameraSetting.triggerMode.write(trigger ? ctmOnDemand
//                                                        : ctmContinuous);
//}

// void Camera::SetHdr(bool hdr) {
//  if (hdr) {
//    bf_settings_->cameraSetting.getHDRControl().HDRMode.write(cHDRmFixed0);
//    bf_settings_->cameraSetting.getHDRControl().HDREnable.write(bTrue);
//  } else {
//    bf_settings_->cameraSetting.getHDRControl().HDREnable.write(bFalse);
//  }
//}

// void Camera::SetMaster() {
//  bf_settings_->cameraSetting.triggerMode.write(ctmOnDemand);
//  bf_settings_->cameraSetting.flashMode.write(cfmDigout0);
//  bf_settings_->cameraSetting.flashType.write(cftStandard);
//  bf_settings_->cameraSetting.flashToExposeDelay_us.write(0);
//  cout << "Set master: " << endl;
//}

// void Camera::SetSlave() {
//  bf_settings_->cameraSetting.triggerMode.write(ctmOnHighLevel);
//  bf_settings_->cameraSetting.triggerSource.write(ctsDigIn0);
//  bf_settings_->cameraSetting.frameDelay_us.write(0);
//  cout << "Set slave: " << endl;
//}

}  // namespace bluefox2

#include "bluefox2/camera_setting.h"

using namespace mvIMPACT::acquire;

namespace bluefox2 {

CameraSetting::CameraSetting(Device *dev) : dev_(dev), cam_set_(dev) {
  if (!dev_) {
    throw std::runtime_error("Invalid device");
  }
  if (!dev_->isOpen()) {
    throw std::runtime_error("Device not opened");
  }
}

}  // namespace bluefox2

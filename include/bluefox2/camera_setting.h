#ifndef BLUEFOX2_CAMERA_SETTINGS_H_
#define BLUEFOX2_CAMERA_SETTINGS_H_

#include <mvIMPACT_CPP/mvIMPACT_acquire.h>
#include <bluefox2/Bluefox2DynConfig.h>

namespace bluefox2 {

class CameraSetting {
 public:
  using Config = bluefox2::Bluefox2DynConfig;

  CameraSetting() = default;
  CameraSetting(mvIMPACT::acquire::Device* dev);

  void Configure(Config& config);

 private:
  mvIMPACT::acquire::Device* dev_;
  Config config_;
  mvIMPACT::acquire::CameraSettingsBlueFOX cam_set_;
};

}  // namespace bluefox2

#endif  // BLUEFOX2_CAMERA_SETTINGS_H_

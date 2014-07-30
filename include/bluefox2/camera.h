#ifndef BLUEFOX2_CAMERA_H_
#define BLUEFOX2_CAMERA_H_

#include <string>
#include <thread>
#include <memory>
#include <functional>

#include "opencv2/core/core.hpp"

#ifndef linux
#define linux
#endif
#include "mvIMPACT_CPP/mvIMPACT_acquire.h"

namespace bluefox2 {

// Config struct
struct CameraConfig {
  bool color{false};
  int expose{0};
  int expose_us{5000};
  bool binning{false};
  double gain_db{0.0};
  int trigger{0};
};

class Camera {
 public:
  Camera(const std::string &serial);
  ~Camera();
  Camera(const Camera &) = delete;
  Camera &operator=(const Camera &) = delete;

  void Open();
  void Configure(const CameraConfig &config);
  void SetMaster();
  void SetSlave();
  void Request();
  bool Grab(cv::Mat &image);
  int height() const { return bf_settings_->cameraSetting.aoiHeight.read(); }
  int width() const { return bf_settings_->cameraSetting.aoiWidth.read(); }
  const std::string label() const { return label_; }
  const std::string serial() const { return serial_; }
  const std::string label_serial() const { return label_ + serial_; }
  bool SetExposeUs(int expose_us);

 private:
  static const int kTimeout{150};
  void FindDevice(const std::string &serial);
  void SetColor(bool color);
  void SetAutoExpose();
  void SetExpose(int expose, int expose_us);
  int GetExposeUs() const;
  bool SetGainDb(double gain_db);
  void SetBinning(bool binning);
  void SetTrigger(int trigger);
  void SetRequestCount(int count);

  std::string serial_;
  std::string label_{"\033[0;34m[BLFOX]:\033[0m "};
  mvIMPACT::acquire::DeviceManager dev_mgr_;
  mvIMPACT::acquire::Device *dev_{};
  mvIMPACT::acquire::FunctionInterface *fi_{};
  mvIMPACT::acquire::Statistics *stats_{};
  mvIMPACT::acquire::Request *request_{};
  mvIMPACT::acquire::SettingsBlueFOX *bf_settings_{};
  mvIMPACT::acquire::SystemSettings *sys_settings_{};

};  // class Camera
}

#endif  // BLUEFOX2_CAMERA_H_

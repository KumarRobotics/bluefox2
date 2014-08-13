#ifndef BLUEFOX2_CAMERA_H_
#define BLUEFOX2_CAMERA_H_

#include <string>

#include "opencv2/core/core.hpp"

#ifndef linux
#define linux
#endif
#include "mvIMPACT_CPP/mvIMPACT_acquire.h"

namespace bluefox2 {
// Config struct
struct CameraConfig {
  bool color;
  int expose;
  int expose_us;
  bool binning;
  double gain_db;
  int trigger;
  bool hdr;

  CameraConfig()
      : color(false),
        expose(0),
        expose_us(5000),
        binning(false),
        gain_db(0),
        trigger(0),
        hdr(false) {}
};

class Camera {
 public:
  Camera(const std::string &serial);
  ~Camera();

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
  static const int kTimeout = 150;
  void FindDevice(const std::string &serial);
  void SetColor(bool color);
  void SetAutoExpose();
  void SetExpose(int expose, int expose_us);
  int GetExposeUs() const;
  bool SetGainDb(double gain_db);
  void SetBinning(bool binning);
  void SetTrigger(int trigger);
  void SetHdr(bool hdr);
  void SetRequestCount(int count);

  std::string serial_;
  std::string label_;
  mvIMPACT::acquire::DeviceManager dev_mgr_;
  mvIMPACT::acquire::Device *dev_;
  mvIMPACT::acquire::FunctionInterface *fi_;
  mvIMPACT::acquire::Statistics *stats_;
  mvIMPACT::acquire::Request *request_;
  mvIMPACT::acquire::SettingsBlueFOX *bf_settings_;
  mvIMPACT::acquire::SystemSettings *sys_settings_;

};  // class Camera
}

#endif  // BLUEFOX2_CAMERA_H_

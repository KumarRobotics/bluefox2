#ifndef BLUEFOX2_H_
#define BLUEFOX2_H_

#include <sensor_msgs/Image.h>
#include "bluefox2/Bluefox2DynConfig.h"

#ifndef linux
#define linux
#endif
#include "mvIMPACT_CPP/mvIMPACT_acquire.h"

namespace bluefox2 {

class Bluefox2 {
 public:
  Bluefox2(const std::string &serial);
  ~Bluefox2();

  std::string serial() const { return serial_; }
  int height() const { return bf_settings_->cameraSetting.aoiHeight.read(); }
  int width() const { return bf_settings_->cameraSetting.aoiWidth.read(); }
  int expose_us() const { return expose_us_; }

  void Open();
  void Configure(Bluefox2DynConfig &config);
  void Request() const;
  bool GrabImage(sensor_msgs::Image &image_msg);
  //  void Configure(const CameraConfig &config);
  //  void SetMaster();
  //  void SetSlave();
  //  bool SetExposeUs(int expose_us);

 private:
  static const int kTimeout = 500;
  std::string AvailableDevice() const;
  void SetColor(bool color) const;
  void SetBinning(bool binning) const;
  void SetExposeUs(int &expose_us) const;
  void SetGainDb(double &gain_db) const;
  void SetPixelClock(double fps) const;
  void SetRequestCount(int count) const;
  //  int GetExposeUs() const;
  //  void SetTrigger(int trigger);
  //  void SetHdr(bool hdr);

  std::string serial_;
  mutable int expose_us_;
  mvIMPACT::acquire::DeviceManager dev_mgr_;
  mvIMPACT::acquire::Device *dev_;
  mvIMPACT::acquire::FunctionInterface *fi_;
  mvIMPACT::acquire::Statistics *stats_;
  mvIMPACT::acquire::Request *request_;
  mvIMPACT::acquire::SettingsBlueFOX *bf_settings_;
  mvIMPACT::acquire::SystemSettings *sys_settings_;
  mvIMPACT::acquire::CameraSettingsBlueDevice *cam_settings_;
};

template <typename T>
T clamp(const T &value, const T &low, const T &high) {
  return std::max(low, std::min(high, value));
}

double PixelClockToFrameRate(int pclk_khz, double width, double height,
                             double expose_us);

}  // namespace bluefox2

#endif  // BLUEFOX2_H_

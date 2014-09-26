#ifndef BLUEFOX2_H_
#define BLUEFOX2_H_

#include <sensor_msgs/Image.h>
#include <sensor_msgs/CameraInfo.h>
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

  const std::string &serial() const { return serial_; }
  std::string product() const { return dev_->product.readS(); }
  int height() const { return bf_set_->cameraSetting.aoiHeight.read(); }
  int width() const { return bf_set_->cameraSetting.aoiWidth.read(); }
  int expose_us() const { return config_.expose_us; }

  void Open();
  void Request() const;
  void SetMaster() const;
  void SetSlave() const;
  void Configure(Bluefox2DynConfig &config);
  bool GrabImage(sensor_msgs::Image &image_msg,
                 sensor_msgs::CameraInfo &cinfo_msg);

 private:
  static const int kTimeout = 500;

  std::string AvailableDevice() const;
  ///@todo: maybe move all these setting function to a separate file
  void SetColor(bool *color) const;
  void SetBinning(bool cbm) const;
  void SetPixelClock(double fps) const;
  void SetRequestCount(int count) const;
  void SetTrigger(int *ctm) const;
  void SetExpose(int *expose_us, int auto_expose) const;
  void SetExposeUs(int *expose_us) const;
  void SetGainDb(double *gain_db) const;
  void SetHdr(bool *hdr) const;
  void SetWhiteBalance(int *wbp) const;
  void SetDarkCurrentFilter(int *dcfm) const;
  void RequestImages(int n) const;
  bool IsColor() const;
  int GetDcfm() const;

  std::string serial_;
  Bluefox2DynConfig config_;
  mvIMPACT::acquire::DeviceManager dev_mgr_;
  mvIMPACT::acquire::Device *dev_;
  mvIMPACT::acquire::FunctionInterface *fi_;
  mvIMPACT::acquire::Statistics *stats_;
  mvIMPACT::acquire::Request *request_;
  mvIMPACT::acquire::SettingsBlueFOX *bf_set_;
  mvIMPACT::acquire::CameraSettingsBlueFOX *cam_set_;
  mvIMPACT::acquire::SystemSettings *sys_set_;
};

template <typename T>
T Clamp(const T &value, const T &low, const T &high) {
  return std::max(low, std::min(high, value));
}

template <typename Property, typename T>
void ClampProperty(const Property &prop, T *value) {
  *value = Clamp(*value, prop.getMinValue(), prop.getMaxValue());
}

double PixelClockToFrameRate(int pclk_khz, double width, double height,
                             double expose_us);

}  // namespace bluefox2

#endif  // BLUEFOX2_H_

#ifndef BLUEFOX2_H_
#define BLUEFOX2_H_

#include <sensor_msgs/Image.h>
#include <sensor_msgs/CameraInfo.h>
#include "bluefox2/Bluefox2DynConfig.h"
#include "bluefox2/bluefox2_setting.h"

namespace bluefox2 {

class Bluefox2 {
 public:
  explicit Bluefox2(const std::string &serial);
  ~Bluefox2();

  const std::string &serial() const { return serial_; }
  std::string product() const { return dev_->product.readS(); }
  int timeout_ms() const { return timeout_ms_; }
  void set_timeout_ms(int timeout_ms) { timeout_ms_ = timeout_ms; }

  int GetExposeUs() const;

  void OpenDevice();
  void RequestSingle() const;
  void Configure(Bluefox2DynConfig &config);
  bool GrabImage(sensor_msgs::Image &image_msg);

  void SetMM(int mm) const;
  void SetMaster() const;
  void SetSlave() const;

 private:
  std::string AvailableDevice() const;

  bool IsCtmOnDemandSupported() const;

  // Settings
  void SetAoi(int &width, int &height) const;
  void SetIdpf(int &idpf) const;
  void SetCbm(int &cbm) const;

  void SetAgc(bool &auto_gain, double &gain_db) const;
  void SetAec(bool &auto_expose, int &expose_us) const;
  void SetAcs(int &acs, int &des_gray_val) const;

  void SetWbp(int &wbp, double &r_gain, double &g_gain, double &b_gain) const;
  void SetHdr(bool &hdr) const;
  void SetDcfm(int &dcfm) const;
  void SetCpc(int &cpc) const;
  void SetCtm(int &ctm) const;
  void SetCts(int &cts) const;

  // Request
  void FillCaptureQueue(int &n) const;
  void RequestImages(int n) const;

  int timeout_ms_{200};
  std::string serial_;
  Bluefox2DynConfig config_;
  mvIMPACT::acquire::Request *request_{nullptr};
  mvIMPACT::acquire::DeviceManager dev_mgr_;
  mvIMPACT::acquire::Device *dev_{nullptr};
  mvIMPACT::acquire::FunctionInterface *fi_{nullptr};
  //  mvIMPACT::acquire::Statistics *stats_{nullptr};
  mvIMPACT::acquire::SettingsBlueFOX *bf_set_{nullptr};
  mvIMPACT::acquire::ImageProcessing *img_proc_{nullptr};
  mvIMPACT::acquire::CameraSettingsBlueFOX *cam_set_{nullptr};
  mvIMPACT::acquire::SystemSettings *sys_set_{nullptr};
  mvIMPACT::acquire::InfoBlueDevice *bf_info_{nullptr};
};

}  // namespace bluefox2

#endif  // BLUEFOX2_H_

#include "bluefox2/single_camera.h"

#include <ros/ros.h>
#include <nodelet/nodelet.h>
#include <pluginlib/class_list_macros.h>

namespace bluefox2 {

class SingleNodelet : public nodelet::Nodelet {
 public:
  SingleNodelet() : nodelet::Nodelet() {}
  ~SingleNodelet() { single_camera_->End(); }

  virtual void onInit() {
    single_camera_.reset(new SingleCamera(getPrivateNodeHandle()));
    single_camera_->Run();
  }

 private:
  std::unique_ptr<SingleCamera> single_camera_;
};

PLUGINLIB_DECLARE_CLASS(bluefox2, SingleNodelet, bluefox2::SingleNodelet,
                        nodelet::Nodelet)

}  // namespace bluefox2

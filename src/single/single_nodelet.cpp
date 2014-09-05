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
    try {
      single_camera_.reset(new SingleCamera(getPrivateNodeHandle()));
      single_camera_->Run();
    }
    catch (const std::exception &e) {
      ROS_ERROR_STREAM("Bluefox2: " << e.what());
    }
  }

 private:
  boost::shared_ptr<SingleCamera> single_camera_;
};

PLUGINLIB_EXPORT_CLASS(bluefox2::SingleNodelet, nodelet::Nodelet)

}  // namespace bluefox2

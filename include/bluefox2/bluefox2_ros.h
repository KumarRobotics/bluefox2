#ifndef BLUEFOX2_ROS_H_
#define BLUEFOX2_ROS_H_

#include "bluefox2/bluefox2.h"
#include "camera_base/camera_ros_base.h"

namespace bluefox2 {

class Bluefox2Ros : public CameraRosBase {
 public:
  Bluefox2Ros(const ros::NodeHandle& nh,
              const std::string& prefix = std::string())
      : CameraRosBase{nh, prefix}, bluefox2_{identifier()} {
    bluefox2_.Open();
    SetHardwareId(bluefox2_.serial());
//    if (prefix == "left") {
//      bluefox2_.SetMaster();
//    } else if (prefix == "right") {
//      bluefox2_.SetSlave();
//    }
  }

  void Request() const { bluefox2_.Request(); }
  Bluefox2& camera() { return bluefox2_; }
  virtual bool Grab(const sensor_msgs::ImagePtr& image_msg) override;

 private:
  Bluefox2 bluefox2_;
};

}  // namespace bluefox2

#endif  // ROS_BLUEFOX2_H_

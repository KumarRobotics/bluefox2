#ifndef BLUEFOX2_ROS_H_
#define BLUEFOX2_ROS_H_

#include "bluefox2/bluefox2.h"
#include "camera_base/camera_ros_base.h"

namespace bluefox2 {

class Bluefox2Ros : public camera_base::CameraRosBase {
 public:
  Bluefox2Ros(const ros::NodeHandle& nh,
              const std::string& prefix = std::string());

  bool boost() const { return boost_; }
  void set_boost(bool boost) { boost_ = boost; }
  void Request() const { bluefox2_.Request(); }
  Bluefox2& camera() { return bluefox2_; }

  bool Grab(const sensor_msgs::ImagePtr& image_msg,
            const sensor_msgs::CameraInfoPtr& cinfo_msg) override;

 private:
  Bluefox2 bluefox2_;
  bool boost_;
};

}  // namespace bluefox2

#endif  // BLUEFOX2_ROS_H_

#include "bluefox2/stereo_node.h"

namespace bluefox2 {

void StereoNode::Acquire() {
  while (is_acquire() && ros::ok()) {
    left_ros_.Request();
    right_ros_.Request();
    const ros::Time time = ros::Time::now();
    left_ros_.Publish(time);
    right_ros_.Publish(time);
    Sleep();
  }
}

void StereoNode::Setup(Bluefox2DynConfig &config) {
  left_ros_.set_fps(config.fps);
  right_ros_.set_fps(config.fps);
  left_ros_.camera().Configure(config);
  right_ros_.camera().Configure(config);
}

}  // namepace bluefox2

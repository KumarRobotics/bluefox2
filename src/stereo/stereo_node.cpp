#include "bluefox2/stereo_node.h"

namespace bluefox2 {

void StereoNode::Acquire() {
  while (is_acquire() && ros::ok()) {
    left_ros_.RequestSingle();
    right_ros_.RequestSingle();
    const ros::Time time = ros::Time::now();
    left_ros_.PublishCamera(time);
    right_ros_.PublishCamera(time);
    Sleep();
  }
}

void StereoNode::Setup(Bluefox2DynConfig &config) {
  left_ros_.set_fps(config.fps);
  right_ros_.set_fps(config.fps);
  // Some hacky stuff... work on it later
  auto config_cpy = config;
  left_ros_.camera().Configure(config_cpy);
  right_ros_.camera().Configure(config);
}

}  // namepace bluefox2

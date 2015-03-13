#include "bluefox2/single_node.h"

namespace bluefox2 {

void SingleNode::Acquire() {
  // This is a hack of boosting frame rate, but only for 200wG
  // Need to find a way of doing this for all cameras
  if (boost_) {
    std::cout << "Boost mode!!!!!" << std::endl;
    bluefox2_ros_.RequestSingle();
  }
  while (is_acquire() && ros::ok()) {
    bluefox2_ros_.RequestSingle();
    const auto expose_us = bluefox2_ros_.camera().expose_us();
    const auto expose_duration = ros::Duration(expose_us * 1e-6 / 2);
    const auto time = ros::Time::now() + expose_duration;
    bluefox2_ros_.PublishCamera(time);
    Sleep();
  }
}

void SingleNode::Setup(Bluefox2DynConfig &config) {
  bluefox2_ros_.set_fps(config.fps);
  boost_ = config.boost;
  bluefox2_ros_.camera().Configure(config);
}

}  // namepace bluefox2

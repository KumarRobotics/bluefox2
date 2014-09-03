#include "bluefox2/single_node.h"

namespace bluefox2 {

void SingleNode::Acquire() {
  // This is a hack of boosting frame rate, but only for 200wG
  // Need to find a way of doing this for all cameras
  if (bluefox2_ros_.fps() > 50) {
    bluefox2_ros_.Request();
  }
  while (is_acquire() && ros::ok()) {
    bluefox2_ros_.Request();
    bluefox2_ros_.Publish(ros::Time::now());
    Sleep();
  }
}

void SingleNode::Setup(Bluefox2DynConfig &config) {
  bluefox2_ros_.set_fps(config.fps);
  bluefox2_ros_.camera().Configure(config);
}

}  // namepace bluefox2

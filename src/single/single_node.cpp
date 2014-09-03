#include "bluefox2/single_node.h"

namespace bluefox2 {

void SingleNode::Acquire() {
  //  bluefox2_ros_.Request();
  while (is_acquire() && ros::ok()) {
    bluefox2_ros_.Request();
    const ros::Time time = ros::Time::now();
    bluefox2_ros_.Publish(time);
    Sleep();
  }
}

void SingleNode::Setup(Bluefox2DynConfig &config) {
  bluefox2_ros_.set_fps(config.fps);
  bluefox2_ros_.camera().Configure(config);
}

}  // namepace bluefox2

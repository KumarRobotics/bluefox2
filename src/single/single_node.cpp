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
    bluefox2_ros_.PublishCamera(ros::Time::now());
    Sleep();
  }
}

void SingleNode::Setup(Bluefox2DynConfig &config) {
  bluefox2_ros_.set_fps(config.fps);
  boost_ = config.boost;
  bluefox2_ros_.camera().Configure(config);
}

}  // namepace bluefox2

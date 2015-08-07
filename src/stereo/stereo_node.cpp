#include "bluefox2/stereo_node.h"
#include "bluefox2/bluefox2_ros.h"

namespace bluefox2 {

StereoNode::StereoNode(const ros::NodeHandle &pnh)
    : CameraNodeBase(pnh),
      left_ros_(boost::make_shared<Bluefox2Ros>(pnh, "left")),
      right_ros_(boost::make_shared<Bluefox2Ros>(pnh, "right")) {}

void StereoNode::Acquire() {
  while (is_acquire() && ros::ok()) {
    left_ros_->RequestSingle();
    right_ros_->RequestSingle();
    const auto expose_us = left_ros_->camera().GetExposeUs();
    const auto expose_duration = ros::Duration(expose_us * 1e-6 / 2);
    const auto time = ros::Time::now() + expose_duration;
    left_ros_->PublishCamera(time);
    right_ros_->PublishCamera(time);
    Sleep();
  }
}

void StereoNode::AcquireOnce() {
  if (is_acquire() && ros::ok()) {
    left_ros_->RequestSingle();
    right_ros_->RequestSingle();
    const auto expose_us = left_ros_->camera().GetExposeUs();
    const auto expose_duration = ros::Duration(expose_us * 1e-6 / 2);
    const auto time = ros::Time::now() + expose_duration;
    left_ros_->PublishCamera(time);
    right_ros_->PublishCamera(time);
  }
}

void StereoNode::Setup(Bluefox2DynConfig &config) {
  left_ros_->set_fps(config.fps);
  right_ros_->set_fps(config.fps);
  // Some hacky stuff... work on it later
  auto config_cpy = config;
  left_ros_->camera().Configure(config_cpy);
  right_ros_->camera().Configure(config);
}

}  // namepace bluefox2

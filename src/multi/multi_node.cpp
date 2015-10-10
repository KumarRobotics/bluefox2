#include "bluefox2/multi_node.h"
#include "bluefox2/bluefox2_ros.h"

namespace bluefox2 {

MultiNode::MultiNode(const ros::NodeHandle& pnh) : CameraNodeBase(pnh) {
  int num_cameras;
  if (!pnh.getParam("num_cameras", num_cameras)) {
    throw std::runtime_error("Could not find parameter num_cameras");
  }
  for (int i = 0; i < num_cameras; ++i) {
    const std::string camera = "camera" + std::to_string(i);
    ros::NodeHandle cnh(pnh, camera);
    std::string camera_name;
    if (cnh.getParam("camera_name", camera_name)) {
      multi_ros_.push_back(boost::make_shared<Bluefox2Ros>(pnh, camera));
    } else {
      ROS_WARN(
          "Multi camera system has %d cameras"
          " but camera %d is not in the launch file",
          num_cameras, i);
    }
  }
}

void MultiNode::Acquire() {
  while (is_acquire() && ros::ok()) {
    for (const Bluefox2RosPtr& bf2_ros : multi_ros_) {
      bf2_ros->RequestSingle();
    }
    // For now just use the first camera's exposure time to compensate
    const auto expose_us = multi_ros_.front()->camera().GetExposeUs();
    const auto expose_duration = ros::Duration(expose_us * 1e-6 / 2);
    const auto time = ros::Time::now() + expose_duration;
    for (const Bluefox2RosPtr& bf2_ros : multi_ros_) {
      bf2_ros->PublishCamera(time);
    }
    Sleep();
  }
}

void MultiNode::Setup(Bluefox2DynConfig& config) {
  if (config.aec != 0) {
    ROS_WARN(
        "%s: Not recommend to use aec (auto expose control) in a "
        "multi-camera system",
        pnh().getNamespace().c_str());
  }
  // TODO: config is messed up here
  for (const Bluefox2RosPtr& bf2_ros : multi_ros_) {
    bf2_ros->set_fps(config.fps);
    bf2_ros->camera().Configure(config);
  }
}

}  // namepace bluefox2

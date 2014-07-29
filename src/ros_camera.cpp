#include "bluefox2/ros_camera.h"

#include <functional>

#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <std_msgs/Header.h>

using std::cout;
using std::endl;
using std::string;
using sensor_msgs::CameraInfo;
using sensor_msgs::CameraInfoPtr;
using camera_info_manager::CameraInfoManager;

namespace bluefox2 {

RosCamera::RosCamera(const ros::NodeHandle &nh, std::string serial_name)
    : nh_{nh}, it_{nh} {
  // Get parameters
  std::string serial;
  if (serial_name.empty()) {
    nh_.param<string>("serial", serial, "");
    frame_id_ = serial;
  } else {
    nh_.param<string>(serial_name, serial, "");
    frame_id_ = "stereo/" + serial_name;
  }

  // Prefix mv
  frame_id_ = "mv_" + frame_id_;

  // Camera
  camera.reset(new Camera(serial));

  // Camera info
  string calib_url;
  if (serial_name.empty()) {
    nh_.param<string>("calib_url", calib_url, "");
  } else {
    nh_.param<string>(serial_name + "_calib_url", calib_url, "");
  }
  // Create camera info manager which will advertise set_camera_info service
  cinfo_manager_.reset(
      new camera_info_manager::CameraInfoManager(nh_, frame_id_, calib_url));
  if (!cinfo_manager_->isCalibrated()) {
    ROS_WARN_STREAM("Bluefox2: " << frame_id_ << " not calibrated");
  }
  cinfo_ = CameraInfoPtr(new CameraInfo(cinfo_manager_->getCameraInfo()));

  // Camera publisher
  if (!serial_name.empty()) {
    serial_name = serial_name + "/";
  }
  string image_topic(serial_name + "image");
  camera_pub_ = it_.advertiseCamera(image_topic, 1);
  ROS_INFO_STREAM("Bluefox2: Publish image to " << ros::this_node::getName()
                                                << "/" << image_topic);
}

void RosCamera::PublishImage(const cv::Mat &image, const ros::Time &time) {
  // Construct a cv image
  std_msgs::Header header;
  header.stamp = time;
  header.frame_id = frame_id_;
  std::string encodings;
  if (image.channels() == 1) {
    encodings = sensor_msgs::image_encodings::MONO8;
  } else if (image.channels() == 3) {
    encodings = sensor_msgs::image_encodings::BGR8;
  }
  // Convert ot ros image msg
  cv_bridge::CvImage cv_image(header, encodings, image);
  cinfo_->header = header;
  camera_pub_.publish(cv_image.toImageMsg(), cinfo_);
}

const CameraConfig RosCamera::ReadConfig() const {
  CameraConfig config;
  nh_.param<bool>("color", config.color, config.color);
  nh_.param<bool>("binning", config.binning, config.binning);
  nh_.param<int>("expose", config.expose, config.expose);
  nh_.param<int>("expose_us", config.expose_us, config.expose_us);
  nh_.param<int>("trigger", config.trigger, config.trigger);
  nh_.param<double>("gain_db", config.gain_db, config.gain_db);
  return config;
}

}  // namespace bluefox2

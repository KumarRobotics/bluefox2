#include "bluefox2/camera_node.h"

#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <std_msgs/Header.h>

namespace bluefox2 {

using sensor_msgs::CameraInfo;
using sensor_msgs::CameraInfoPtr;
using camera_info_manager::CameraInfoManager;

CameraNode::CameraNode(const ros::NodeHandle &nh) : nh_{nh}, it_{nh} {
  // Get parameters
  std::string serial;
  nh_.param<std::string>("serial", serial, "");
  frame_id_ = "mv_" + serial;

  // Ros rate
  int fps;
  nh_.param<int>("fps", fps, 20);
  SetRate(fps);

  // camera

  // Camera info
  std::string calib_url;
  nh_.param<std::string>("calib_url", calib_url, "");
  CameraInfoManager cinfo_manager(nh_, "bluefox2", calib_url);
  if (!cinfo_manager.isCalibrated()) {
    ROS_WARN_STREAM("Bluefox2: " << frame_id_ << " not calibrated");
  }
  cinfo_ = CameraInfoPtr(new CameraInfo(cinfo_manager.getCameraInfo()));

  // Camera publisher
  camera_pub_ = it_.advertiseCamera("image_raw", 1);

  // Dynamic reconfigure
  server_.setCallback(
      boost::bind(&CameraNode::ReconfigureCallback, this, _1, _2));
}

void CameraNode::PublishImage(const cv::Mat &image) {
  // Construct a cv image
  std_msgs::Header header;
  header.stamp = ros::Time::now();
  header.frame_id = frame_id_;
  std::string encodings;
  if (image.channels() == 1) {
    encodings = sensor_msgs::image_encodings::MONO8;
  } else if (image.channels() == 3) {
    encodings = sensor_msgs::image_encodings::BGR8;
  }
  // Convert ot ros image msg
  cv_bridge::CvImage cv_image(header, encodings, image);
  image_ = cv_image.toImageMsg();
  cinfo_->header = image_->header;
  camera_pub_.publish(image_, cinfo_);
  // Sleep
  rate_->sleep();
}

void CameraNode::SetRate(int fps) { rate_.reset(new ros::Rate(fps)); }

void CameraNode::ReconfigureCallback(CameraDynConfig &config, int level) {
  if (level < 0) {
    ROS_INFO_STREAM(
        "Initializing dynamic reconfigure server for bluefox2: " << frame_id_);
  }

  ROS_INFO("Config: fps: %f, color: %d, expose: %d, binning: %d, gain: %f",
           config.fps, config.color, config.expose, config.binning,
           config.gain);
  // Read dynamic config into new config
  CameraConfig new_config;
  SetRate(config.fps);
  new_config.gain = config.gain;
  new_config.color = config.color;
  new_config.expose = config.expose;
  new_config.binning = config.binning;
}

}  // namespace bluefox2

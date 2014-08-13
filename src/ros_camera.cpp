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
    : nh_(nh), it_(nh) {
  // Get parameters
  string serial;
  string calib_url;
  if (serial_name.empty()) {
    nh_.param<string>("serial", serial, "");
    nh_.param<string>("calib_url", calib_url, "");
  } else {
    // This load param under name left or fight
    nh_.param<string>(serial_name, serial, "");
    // This load param under name left_calib_url or right_calib_url
    nh_.param<string>(serial_name + "_calib_url", calib_url, "");
  }

  // Prefix with mv_, but for stereo frame_id will be the same
  std::string camera_name = "mv_" + serial;
  nh_.param<string>("frame_id", frame_id_, camera_name);

  // Camera
  camera.reset(new Camera(serial));

  // Create a child nodehandle for advertising services
  ros::NodeHandle nh2(nh_, serial_name);
  cinfo_manager_.reset(new CameraInfoManager(nh2, camera_name, calib_url));
  // Create camera info manager which will advertise set_camera_info service
  if (!cinfo_manager_->isCalibrated()) {
    ROS_WARN_STREAM("Bluefox2: " << camera_name << " not calibrated");
  }
  cinfo_ = CameraInfoPtr(new CameraInfo(cinfo_manager_->getCameraInfo()));
  // Service to set expose
  srv_server_ =
      nh2.advertiseService("set_expose", &RosCamera::SetExposeUs, this);

  // Camera publisher
  // TODO: a more elegant way for different image_topic?
  if (!serial_name.empty()) {
    serial_name = serial_name + "/";
  }
  string image_topic(serial_name + "image_raw");
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
  nh_.param<bool>("hdr", config.hdr, config.hdr);
  return config;
}

bool RosCamera::SetExposeUs(SetExposeSrv::Request &req,
                            SetExposeSrv::Response &rsp) {
  rsp.status = camera->SetExposeUs(req.expose_us);
  if (rsp.status) {
    // If the request is successful, change the corresponding parameters
    nh_.setParam("expose", 1);
    nh_.setParam("expose_us", req.expose_us);
    ROS_INFO("Request to set camera expose_us to %d", req.expose_us);
  } else {
    ROS_INFO("Failed to set camera expose_us to %d", req.expose_us);
  }
  return true;
}

}  // namespace bluefox2

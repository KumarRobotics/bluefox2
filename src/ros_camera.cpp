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
  CameraInfoManager cinfo_manager(nh_, frame_id_, calib_url);
  if (!cinfo_manager.isCalibrated()) {
    ROS_WARN_STREAM("Bluefox2: " << frame_id_ << " not calibrated");
  }
  cinfo_ = CameraInfoPtr(new CameraInfo(cinfo_manager.getCameraInfo()));

  // Camera publisher
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
  image_ = cv_image.toImageMsg();
  cinfo_->header = image_->header;
  camera_pub_.publish(image_, cinfo_);
}

}  // namespace bluefox2

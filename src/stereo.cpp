#include "bluefox2/stereo.h"

#include <functional>

#include <cv_bridge/cv_bridge.h>
#include <sensor_msgs/image_encodings.h>
#include <std_msgs/Header.h>

namespace bluefox2 {

using std::cout;
using std::endl;
using std::string;
using sensor_msgs::CameraInfo;
using sensor_msgs::CameraInfoPtr;
using camera_info_manager::CameraInfoManager;

Stereo::Stereo(const ros::NodeHandle &nh) : nh_{nh}, it_{nh} {
  // Get parameters
  std::string left;
  nh_.param<string>("left", left, "");
  left_frame_ = "mv_" + left;
  std::string right;
  nh_.param<string>("right", right, "");

  // ROS rate
  int fps;
  nh_.param<int>("fps", fps, 20);
  SetRate(fps);

  // Camera
  left_camera_.reset(new Camera(left));
  right_camera_.reset(new Camera(right));

  // Camera info
  string left_calib_url;
  nh_.param<string>("left_calib_url", left_calib_url, "");
  CameraInfoManager left_cinfo_manager(nh_, "bluefox2", left_calib_url);
  if (!left_cinfo_manager.isCalibrated()) {
    ROS_WARN_STREAM("Bluefox2: " << left_frame_ << " not calibrated");
  }
  left_cinfo_ = CameraInfoPtr(new CameraInfo(left_cinfo_manager.getCameraInfo()));
  string right_calib_url;
  nh_.param<string>("right_calib_url", right_calib_url, "");
  CameraInfoManager right_cinfo_manager(nh_, "bluefox2", right_calib_url);
  if (!right_cinfo_manager.isCalibrated()) {
    ROS_WARN_STREAM("Bluefox2: " << left_frame_ << " not calibrated");
  }
  right_cinfo_ = CameraInfoPtr(new CameraInfo(right_cinfo_manager.getCameraInfo()));

  // Camera publisher
  string left_image_topic("left/image_raw");
  left_pub_ = it_.advertiseCamera(left_image_topic, 1);
  ROS_INFO_STREAM("Bluefox2: Publish left image to " << ros::this_node::getName() << "/" << left_image_topic);
  string right_image_topic("right/image_raw");
  ROS_INFO_STREAM("Bluefox2: Publish right iamge to " << ros::this_node::getName() << "/" << right_image_topic);

  // Dynamic reconfigure
  server_.setCallback(boost::bind(&Stereo::ReconfigureCallback, this, _1, _2));
}

void Stereo::Run() {
  CameraConfig config;
  nh_.param<bool>("color", config.color, "false");
  nh_.param<bool>("binning", config.binning, "false");
  nh_.param<int>("expose", config.expose, 5000);
  nh_.param<double>("gain", config.gain, 0.0);
  nh_.param<int>("trigger", config.trigger, 1);
  left_camera_->Open();
  left_camera_->Configure(config);
  right_camera_->Open();
  right_camera_->Configre(config);
  Start();
}

void Stereo::End() { Stop(); }

void Stereo::Start() {
  acquire_ = true;
  image_thread_.reset(new std::thread(&Stereo::AcquireImages, this));

  cout << left_camera_->label_serial() << ": Starting camera" << endl;
  cout << right_camera_->label_serial() << ": Starting camera" << endl;
}

void Stereo::Stop() {
  acquire_ = false;
  image_thread_->join();

  cout << left_camera_->label_serial() << ": Stopping camera" << endl;
  cout << right_camera_->label_serial() << ": Stopping camera" << endl;
}

void Stereo::AcquireImages() {
  cout << left_camera_->label_serial() << ": Acquiring images" << endl;
  cout << right_camera_->label_serial() << ": Acquiring images" << endl;
  cv::Mat left_image;
  cv::Mat right_image;
  while (acquire_ && ros::ok()) {
    // Slave request first, in our case, left camera is slave
    left_camera_.Request();
    right_camera_.Request();
    if (left_camera_->Grab(left_image) && right_camera_->Grab(right_image)) {
      PublishImage(left_image);
      PublishImage(right_image);
    }
  }

}

void Stereo::SetRate(int fps) { rate_.reset(new ros::Rate(fps)); }

}

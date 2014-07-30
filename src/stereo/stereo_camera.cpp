#include <ros/ros.h>

#include "bluefox2/stereo_camera.h"

namespace bluefox2 {

using std::cout;
using std::endl;

StereoCamera::StereoCamera(const ros::NodeHandle &nh) : nh_{nh} {
  // Ros rate
  double fps;
  nh_.param<double>("fps", fps, 20.0);
  SetRate(fps);

  // Initialize a single camera
  left_.reset(new RosCamera(nh_, "left"));
  right_.reset(new RosCamera(nh_, "right"));

  // Setup dynamic reconfigure
  cfg_server_.setCallback(
      boost::bind(&StereoCamera::ReconfigureCallback, this, _1, _2));
}

void StereoCamera::Run() {
  // Read in all parameters
  CameraConfig config = left_->ReadConfig();

  left_->camera->Open();
  left_->camera->Configure(config);
  right_->camera->Open();
  right_->camera->Configure(config);
  Start();
}

void StereoCamera::End() { Stop(); }

void StereoCamera::Start() {
  // Set acquire to ture
  acquire_ = true;
  // Create a new thread for acquisition
  image_thread_.reset(new std::thread(&StereoCamera::Acquire, this));
  cout << left_->camera->label_serial() << ": Starting camera" << endl;
  cout << right_->camera->label_serial() << ": Starting camera" << endl;
}

void StereoCamera::Stop() {
  if (!acquire_) return;
  // Set acquire to false to stop the thread
  acquire_ = false;
  // Wait for the thread to finish
  image_thread_->join();
  cout << left_->camera->label_serial() << ": Stopping camera" << endl;
  cout << right_->camera->label_serial() << ": Stopping camera" << endl;
}

void StereoCamera::Acquire() {
  cout << left_->camera->label_serial() << ": Acquiring images" << endl;
  cout << right_->camera->label_serial() << ": Acquiring images" << endl;
  cv::Mat image_left;
  cv::Mat image_right;
  while (acquire_ && ros::ok()) {
    // In our case, right is master, left is slave, so we request left first
    left_->camera->Request();
    right_->camera->Request();
    if (left_->camera->Grab(image_left) && right_->camera->Grab(image_right)) {
      auto time = ros::Time::now();
      left_->PublishImage(image_left, time);
      right_->PublishImage(image_right, time);
      rate_->sleep();
    }
  }
}

void StereoCamera::SetRate(double fps) { rate_.reset(new ros::Rate(fps)); }

void StereoCamera::ReconfigureCallback(CameraDynConfig &config, int level) {
  if (level < 0) {
    ROS_INFO_STREAM("Bluefox2: Initializing dynamic reconfigure server: "
                    << ros::this_node::getName());
    return;
  }

  // Read dynamic config into new config
  CameraConfig new_config;
  SetRate(config.fps);
  new_config.gain_db = config.gain_db;
  new_config.color = config.color;
  new_config.expose = config.expose;
  new_config.expose_us = config.expose_us;
  new_config.binning = config.binning;
  new_config.trigger = config.trigger;
  // Stop the camera if in acquisition
  if (acquire_) {
    Stop();
  }
  // Reconfigure camera
  left_->camera->Configure(new_config);
  right_->camera->Configure(new_config);
  // Restart the camera
  Start();
}

}  // namepace bluefox2

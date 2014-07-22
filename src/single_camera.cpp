#include <ros/ros.h>

#include "bluefox2/single_camera.h"

namespace bluefox2 {

using std::cout;
using std::endl;

SingleCamera::SingleCamera(const ros::NodeHandle &nh) : nh_{nh} {
  // Ros rate
  double fps;
  nh_.param<double>("fps", fps, 20.0);
  SetRate(fps);

  // Initialize a single camera
  ros_camera_.reset(new RosCamera(nh_));

  // Setup dynamic reconfigure
  server_.setCallback(boost::bind(&SingleCamera::ReconfigureCallback, this, _1, _2));
}

void SingleCamera::Run() {
  // Read in all parameters
  CameraConfig config;
  nh_.param<bool>("color", config.color, "false");
  nh_.param<bool>("binning", config.binning, "false");
  nh_.param<int>("expose", config.expose, 5000);
  nh_.param<double>("gain", config.gain, 0.0);
  nh_.param<int>("trigger", config.trigger, 0);

  ros_camera_->camera->Open();
  ros_camera_->camera->Configure(config);
  Start();
}

void SingleCamera::End() { Stop(); }

void SingleCamera::Start() {
  // Set acquire to ture
  acquire_ = true;
  // Create a new thread for acquisition
  image_thread_.reset(new std::thread(&SingleCamera::Acquire, this));
  cout << ros_camera_->camera->label_serial() << ": Starting camera" << endl;
}

void SingleCamera::Stop() {
  // Set acquire to false to stop the thread
  acquire_ = false;
  // Wait for the thread to finish
  image_thread_->join();
  cout << ros_camera_->camera->label_serial() << ": Stopping camera" << endl;
}

void SingleCamera::Acquire() {
  cout << ros_camera_->camera->label_serial() << ": Acquiring images"
       << endl;
  cv::Mat image;
  while (acquire_ && ros::ok()) {
    ros_camera_->camera->Request();
    if (ros_camera_->camera->Grab(image)) {
      ros_camera_->PublishImage(image);
      rate_->sleep();
    }
  }
}
void SingleCamera::SetRate(double fps) { rate_.reset(new ros::Rate(fps)); }

void SingleCamera::ReconfigureCallback(CameraDynConfig &config, int level) {
  if (level < 0) {
    ROS_INFO_STREAM("Bluefox2: Initializing dynamic reconfigure server: "
                    << ros::this_node::getName());
    return;
  }

  // Read dynamic config into new config
  CameraConfig new_config;
  SetRate(config.fps);
  new_config.gain = config.gain;
  new_config.color = config.color;
  new_config.expose = config.expose;
  new_config.binning = config.binning;
  new_config.trigger = config.trigger;
  // Stop the camera if in acquisition
  if (acquire_) {
    Stop();
  }
  // Reconfigure camera
  ros_camera_->camera->Configure(new_config);
  // Restart the camera
  Start();
}

}  // namepace bluefox2

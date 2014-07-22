#include "bluefox2/camera_node.h"

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

CameraNode::CameraNode(const ros::NodeHandle &nh) : nh_{nh}, it_{nh} {
  // Get parameters
  std::string serial;
  nh_.param<string>("serial", serial, "");
  frame_id_ = "mv_" + serial;

  // Ros rate
  int fps;
  nh_.param<int>("fps", fps, 20);
  SetRate(fps);

  // camera
  camera_.reset(new Camera(serial));
//  camera_->use_image = std::bind(&CameraNode::PublishImage, this,
//                                 std::placeholders::_1);

  // Camera info
  string calib_url;
  nh_.param<string>("calib_url", calib_url, "");
  CameraInfoManager cinfo_manager(nh_, "bluefox2", calib_url);
  if (!cinfo_manager.isCalibrated()) {
    ROS_WARN_STREAM("Bluefox2: " << frame_id_ << " not calibrated");
  }
  cinfo_ = CameraInfoPtr(new CameraInfo(cinfo_manager.getCameraInfo()));

  // Camera publisher
  string image_topic("image_raw");
  camera_pub_ = it_.advertiseCamera(image_topic, 1);
  ROS_INFO_STREAM("Bluefox2: Publish image to " << ros::this_node::getName()
                  << "/" << image_topic);

  // Dynamic reconfigure
  server_.setCallback(
      boost::bind(&CameraNode::ReconfigureCallback, this, _1, _2));
}

void CameraNode::Run() {
  CameraConfig config;
  nh_.param<bool>("color", config.color, "false");
  nh_.param<bool>("binning", config.binning, "false");
  nh_.param<int>("expose", config.expose, 5000);
  nh_.param<double>("gain", config.gain, 0.0);
  camera_->Open();
  camera_->Configure(config);
  Start();
}

void CameraNode::End() {
  Stop();
}

void CameraNode::Start() {
  // Set acquire to ture
  acquire_ = true;
  // Create a new thread for acquisition
  image_thread_.reset(new std::thread(&CameraNode::AcquireImages, this));
  cout << "started" << endl;
}

void CameraNode::Stop() {
  // Set acquire to false to stop the thread
  acquire_ = false;
  // Wait for the thread to finish
  image_thread_->join();
  cout << "Stopped" << endl;
}

void CameraNode::AcquireImages() {
  ROS_INFO("Acquiring");
  cv::Mat image;
  while (acquire_ && ros::ok()) {
    camera_->Request();
    if (camera_->Grab(image)) {
      PublishImage(image);
    }
  }
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
        "Bluefox2: Initializing dynamic reconfigure server: " << frame_id_);
    return;
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
  new_config.trigger = config.trigger;
  // Stop the camera if in acquisition
  if (acquire_) {
     Stop();
  }
  // Reconfigure camera
  camera_->Configure(new_config);
  // Restart the camera
  Start();
}

}  // namespace bluefox2

#include "bluefox2/bluefox2_ros.h"

namespace bluefox2 {

Bluefox2Ros::Bluefox2Ros(const ros::NodeHandle& nh, const std::string& prefix)
    : CameraRosBase(nh, prefix), bluefox2_(identifier()) {
  //  bluefox2_.OpenDevice();
  SetHardwareId(bluefox2_.serial());

  // Some hack for getting hardware sync to work
  ros::NodeHandle cnh(nh, prefix);
  std::string mode;
  cnh.param<std::string>("mode", mode, "");

  if (mode == "master") {
    bluefox2_.SetMaster();
  } else if (mode == "slave") {
    bluefox2_.SetSlave();
  }

  // Set mirror mode on construction
  int mm;
  cnh.param<int>("mm", mm, 0);
  bluefox2_.SetMM(mm);
}

bool Bluefox2Ros::Grab(const sensor_msgs::ImagePtr& image_msg,
                       const sensor_msgs::CameraInfoPtr& cinfo_msg) {
  // Add expose time to current time stamp
  return bluefox2_.GrabImage(*image_msg);
}

}  // namespace bluefox2

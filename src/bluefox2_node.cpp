#include <ros/ros.h>

#include "bluefox2/camera_node.h"

int main (int argc, char **argv) {
  ros::init(argc, argv, "bluefox2");

  ros::NodeHandle nh("~");

  bluefox2::CameraNode camera_node(nh);

  ros::spin();
}

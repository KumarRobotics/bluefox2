#include <ros/ros.h>

#include "bluefox2/camera_node.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "bluefox2");

  ros::NodeHandle nh("~");
  try {
    bluefox2::CameraNode camera_node(nh);
    camera_node.Run();
    ros::spin();
    camera_node.End();
  }
  catch (const std::exception &e) {
    ROS_ERROR_STREAM("Bluefox2: " << e.what());
  }

}

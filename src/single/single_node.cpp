#include <ros/ros.h>

#include "bluefox2/single_camera.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "single_node");

  ros::NodeHandle nh("~");

  try {
    bluefox2::SingleCamera single_camera(nh);
    single_camera.Run();
    ros::spin();
    single_camera.End();
  }
  catch (const std::exception &e) {
    ROS_ERROR_STREAM("Bluefox2: " << e.what());
  }
}

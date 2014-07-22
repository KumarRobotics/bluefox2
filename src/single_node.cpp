#include <ros/ros.h>

#include "bluefox2/single_camera.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "single_node");

  ros::NodeHandle nh("~");
  try {
    bluefox2::SingleCamera single(nh);
    single.Run();
    ros::spin();
    single.End();
  }
  catch (const std::exception &e) {
    ROS_ERROR_STREAM("Bluefox2: " << e.what());
  }

}

#include <ros/ros.h>

#include "bluefox2/stereo.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "stereo");

  ros::NodeHandle nh("~");
  try {
    bluefox2::Stereo stereo(nh);
    stereo.Run();
    ros::spin();
    stereo.End();
  }
  catch (const std::exception &e) {
    ROS_ERROR_STREAM("Bluefox2: " << e.what());
  }

}

#include <ros/ros.h>

#include "bluefox2/stereo_camera.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "stereo_node");

  ros::NodeHandle nh("~");
  try {
    bluefox2::StereoCamera stereo_camera(nh);
    stereo_camera.Run();
    ros::spin();
    stereo_camera.End();
  }
  catch (const std::exception &e) {
    ROS_ERROR_STREAM("Bluefox2: " << e.what());
  }

}

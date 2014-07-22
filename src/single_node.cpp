#include <ros/ros.h>

#include "bluefox2/single.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "bluefox2");

  ros::NodeHandle nh("~");
  try {
    bluefox2::Single single(nh);
    single.Run();
    ros::spin();
    single.End();
  }
  catch (const std::exception &e) {
    ROS_ERROR_STREAM("Bluefox2: " << e.what());
  }

}

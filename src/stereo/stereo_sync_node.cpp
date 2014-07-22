#include "bluefox2/stereo_sync.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "stereo_sync");
  ros::NodeHandle nh("~");

  bluefox2::StereoSync stereo_sync(nh);
  ros::spin();
}

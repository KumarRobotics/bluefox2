#include "bluefox2/bluefox2_ros.h"

namespace bluefox2 {

bool Bluefox2Ros::Grab(const sensor_msgs::ImagePtr &image_msg) {
  return bluefox2_.GrabImage(*image_msg);
}

}  // namespace bluefox2

#include "bluefox2/multi_node.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "bluefox2_multi");
  ros::NodeHandle pnh("~");

  try {
    bluefox2::MultiNode multi_node(pnh);
    multi_node.Run();
    ros::spin();
    multi_node.End();
  } catch (const std::exception &e) {
    ROS_ERROR("%s: %s", pnh.getNamespace().c_str(), e.what());
  }
}

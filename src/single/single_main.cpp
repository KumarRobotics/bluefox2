#include "bluefox2/single_node.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "bluefox2_single");
  ros::NodeHandle pnh("~");

  try {
    bluefox2::SingleNode single_node(pnh);
    single_node.Run();
    ros::spin();
    single_node.End();
  }
  catch (const std::exception &e) {
    ROS_ERROR("%s: %s", pnh.getNamespace().c_str(), e.what());
  }
}

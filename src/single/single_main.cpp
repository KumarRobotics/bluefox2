#include "bluefox2/single_node.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "bluefox2_single");
  ros::NodeHandle nh("~");

  try {
    bluefox2::SingleNode single_node(nh);
    single_node.Run();
    ros::spin();
    single_node.End();
  }
  catch (const std::exception &e) {
    ROS_ERROR("%s: %s", nh.getNamespace().c_str(), e.what());
  }
}

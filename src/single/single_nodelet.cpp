#include "bluefox2/single_node.h"

#include <ros/ros.h>
#include <nodelet/nodelet.h>
#include <pluginlib/class_list_macros.h>

namespace bluefox2 {

class SingleNodelet : public nodelet::Nodelet {
 public:
  SingleNodelet() : nodelet::Nodelet() {}
  ~SingleNodelet() { single_node_->End(); }

  virtual void onInit() {
    try {
      single_node_.reset(new SingleNode(getPrivateNodeHandle()));
      single_node_->Run();
    }
    catch (const std::exception &e) {
      NODELET_ERROR_STREAM(e.what());
    }
  }

 private:
  std::unique_ptr<SingleNode> single_node_;
};

PLUGINLIB_DECLARE_CLASS(bluefox2, SingleNodelet, bluefox2::SingleNodelet,
                        nodelet::Nodelet)

}  // namespace bluefox2

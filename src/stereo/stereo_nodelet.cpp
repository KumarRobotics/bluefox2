#include "bluefox2/stereo_node.h"

#include <nodelet/nodelet.h>
#include <pluginlib/class_list_macros.h>

namespace bluefox2 {

class StereoNodelet : public nodelet::Nodelet {
 public:
  StereoNodelet() : nodelet::Nodelet() {}
  ~StereoNodelet() { stereo_node_->End(); }

  virtual void onInit() {
    try {
      stereo_node_.reset(new StereoNode(getPrivateNodeHandle()));
      stereo_node_->Run();
    }
    catch (const std::exception &e) {
      NODELET_ERROR("%s: %s", getPrivateNodeHandle().getNamespace().c_str(),
                    e.what());
    }
  }

 private:
  std::unique_ptr<StereoNode> stereo_node_;
};

PLUGINLIB_DECLARE_CLASS(bluefox2, StereoNodelet, bluefox2::StereoNodelet,
                        nodelet::Nodelet)

}  // namespace bluefox2

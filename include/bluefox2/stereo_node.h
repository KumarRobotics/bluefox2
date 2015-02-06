#ifndef BLUEFOX2_STEREO_NODE_H_
#define BLUEFOX2_STEREO_NODE_H_

#include "bluefox2/bluefox2_ros.h"
#include "bluefox2/Bluefox2DynConfig.h"
#include "camera_base/camera_node_base.h"

namespace bluefox2 {

class StereoNode : public camera_base::CameraNodeBase<Bluefox2DynConfig> {
 public:
  StereoNode(const ros::NodeHandle &pnh)
      : CameraNodeBase(pnh), left_ros_(pnh, "left"), right_ros_(pnh, "right") {}

  virtual void Acquire() override;
  virtual void Setup(Bluefox2DynConfig &config) override;

 private:
  Bluefox2Ros left_ros_;
  Bluefox2Ros right_ros_;
};

}  // namespace bluefox2

#endif  // BLUEFOX2_STEREO_NODE_H_

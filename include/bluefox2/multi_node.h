#ifndef BLUEFOX2_MULTI_NODE_H_
#define BLUEFOX2_MULTI_NODE_H_

#include "bluefox2/Bluefox2DynConfig.h"
#include <camera_base/camera_node_base.h>

namespace bluefox2 {

class Bluefox2Ros;
using Bluefox2RosPtr = boost::shared_ptr<Bluefox2Ros>;

class MultiNode : public camera_base::CameraNodeBase<Bluefox2DynConfig> {
 public:
  explicit MultiNode(const ros::NodeHandle &pnh);

  virtual void Acquire() override;
  virtual void Setup(Bluefox2DynConfig &config) override;

 private:
  std::vector<Bluefox2RosPtr> multi_ros_;
};

}  // namespace bluefox2

#endif  // BLUEFOX2_SINGLE_NODE_H_

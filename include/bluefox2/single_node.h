#ifndef BLUEFOX2_SINGLE_NODE_H_
#define BLUEFOX2_SINGLE_NODE_H_

#include "bluefox2/Bluefox2DynConfig.h"
#include <camera_base/camera_node_base.h>

namespace bluefox2 {

class Bluefox2Ros;

class SingleNode : public camera_base::CameraNodeBase<Bluefox2DynConfig> {
 public:
  explicit SingleNode(const ros::NodeHandle &pnh);

  virtual void Acquire() override;
  virtual void Setup(Bluefox2DynConfig &config) override;

  void AcquireOnce();

 private:
  boost::shared_ptr<Bluefox2Ros> bluefox2_ros_;
  bool boost_{false};
};

}  // namespace bluefox2

#endif  // BLUEFOX2_SINGLE_NODE_H_

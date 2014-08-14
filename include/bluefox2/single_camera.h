#ifndef BLUEFOX2_SINGLE_CAMERA_H_
#define BLUEFOX2_SINGLE_CAMERA_H_

#include <ros/ros.h>
#include <dynamic_reconfigure/server.h>

#include <boost/thread.hpp>

#include "bluefox2/CameraDynConfig.h"
#include "bluefox2/ros_camera.h"

namespace bluefox2 {

class SingleCamera {
 public:
  SingleCamera(const ros::NodeHandle &nh);
  void ReconfigureCallback(CameraDynConfig &config, int level);

  void Run();
  void End();

 private:
  void SetRate(double fps);
  void Start();
  void Stop();
  void Acquire();

  bool acquire_;
  ros::NodeHandle nh_;
  boost::shared_ptr<ros::Rate> rate_;
  dynamic_reconfigure::Server<CameraDynConfig> cfg_server_;
  boost::shared_ptr<RosCamera> ros_camera_;
  boost::shared_ptr<boost::thread> image_thread_;
};

}  // namespace bluefox2

#endif  // BLUEFOX2_SINGLE_CAMERA_H_

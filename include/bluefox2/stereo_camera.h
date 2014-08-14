#ifndef BLUEFOX2_STEREO_CAMERA_H_
#define BLUEFOX2_STEREO_CAMERA_H_

#include <ros/ros.h>
#include <dynamic_reconfigure/server.h>

#include <boost/thread.hpp>

#include "bluefox2/CameraDynConfig.h"
#include "bluefox2/ros_camera.h"

namespace bluefox2 {

class StereoCamera {
 public:
  StereoCamera(const ros::NodeHandle &nh);
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
  boost::shared_ptr<RosCamera> left_;
  boost::shared_ptr<RosCamera> right_;
  boost::shared_ptr<boost::thread> image_thread_;
};

}  // namespace bluefox2

#endif  // BLUEFOX2_STEREO_CAMERA_H_

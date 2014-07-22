#ifndef BLUEFOX2_CAMERA_NODE_H_
#define BLUEFOX2_CAMERA_NODE_H_

#include <memory>
#include <thread>

#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <sensor_msgs/Image.h>
#include <sensor_msgs/CameraInfo.h>
#include <dynamic_reconfigure/server.h>
#include <camera_info_manager/camera_info_manager.h>
#include "bluefox2/CameraDynConfig.h"

#include "opencv2/core/core.hpp"

#include "bluefox2/camera.h"

namespace bluefox2 {

class CameraNode {
 public:
  CameraNode(const ros::NodeHandle &nh);
  CameraNode(const CameraNode &) = delete;
  CameraNode &operator=(const CameraNode &) = delete;

  void Run();
  void End();
  void PublishImage(const cv::Mat &image);
  void ReconfigureCallback(CameraDynConfig &config, int level);

 private:
  void SetRate(int fps);
  void Start();
  void Stop();
  void AcquireImages();

  // ROS related
  int fps_;
  bool acquire_{false};
  ros::NodeHandle nh_;
  std::string frame_id_;
  std::unique_ptr<ros::Rate> rate_;
  image_transport::ImageTransport it_;
  image_transport::CameraPublisher camera_pub_;
  sensor_msgs::ImagePtr image_;
  sensor_msgs::CameraInfoPtr cinfo_;
  dynamic_reconfigure::Server<CameraDynConfig> server_;
  // Bluefox
  std::unique_ptr<Camera> camera_;
  std::unique_ptr<std::thread> image_thread_;
};  // class CameraNode

}  // namespace bluefox2

#endif  // BLUEFOX2_CAMERA_NODE_H_

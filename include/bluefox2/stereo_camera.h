#ifndef BLUEFOX2_STEREO_CAMERA_H_
#define BLUEFOX2_STEREO_CAMERA_H_

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

class Stereo {
 public:
  Stereo(const ros::NodeHandle &nh);

  void Run();
  void End();
  void PublishImage(const cv::Mat &left_image,
                    const cv::Mat &right_image);
  void ReconfigureCallback(CameraDynConfig &config, int level);

 private:
  void SetRate(int fps);
  void Start();
  void Stop();
  void AcquireImages();

  // ROS related
  bool acquire_{false};
  ros::NodeHandle nh_;
  std::string left_frame_;
  std::string right_frame_;
  std::unique_ptr<ros::Rate> rate_;
  image_transport::ImageTransport it_;
  dynamic_reconfigure::Server<CameraDynConfig> server_;

  image_transport::CameraPublisher left_pub_;
  sensor_msgs::ImagePtr left_image_;
  sensor_msgs::CameraInfoPtr left_cinfo_;

  image_transport::CameraPublisher right_pub_;
  sensor_msgs::ImagePtr right_image_;
  sensor_msgs::CameraInfoPtr right_cinfo_;

  // Bluefox
  std::unique_ptr<Camera> left_camera_;
  std::unique_ptr<Camera> right_camera_;
  std::unique_ptr<std::thread> image_thread_;
};  // class Stereo

}  // namespace bluefox2

#endif  // BLUEFOX2_STEREO_CAMERA_H_

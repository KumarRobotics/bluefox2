#include "bluefox2/stereo_sync.h"

#include "cv_bridge/cv_bridge.h"
#include "sensor_msgs/image_encodings.h"
#include "opencv2/core/core.hpp"
#include "opencv2/highgui/highgui.hpp"

namespace bluefox2 {

StereoSync::StereoSync(const ros::NodeHandle &nh) : nh_(nh), it_(nh) {
  l_image_sub_.subscribe(it_, "left/image_raw", 1);
  l_cinfo_sub_.subscribe(nh_, "left/camera_info", 1);

  r_image_sub_.subscribe(it_, "right/image_raw", 1);
  r_cinfo_sub_.subscribe(nh_, "right/camera_info", 1);
  sync_.reset(new TimeSynchronizer(TimeSyncPolicy(5), l_image_sub_,
                                   l_cinfo_sub_, r_image_sub_, r_cinfo_sub_));
  sync_->registerCallback(
      boost::bind(&StereoSync::SyncCallback, this, _1, _2, _3, _4));
}

void StereoSync::SyncCallback(
    const sensor_msgs::ImageConstPtr &image_left,
    const sensor_msgs::CameraInfoConstPtr &cinfo_left,
    const sensor_msgs::ImageConstPtr &image_right,
    const sensor_msgs::CameraInfoConstPtr &cinfo_right) {
  cv_bridge::CvImagePtr ptr_left;
  cv_bridge::CvImagePtr ptr_right;
  ptr_left =
      cv_bridge::toCvCopy(image_left, sensor_msgs::image_encodings::MONO8);
  ptr_right =
      cv_bridge::toCvCopy(image_right, sensor_msgs::image_encodings::MONO8);
  cv::imshow("left", ptr_left->image);
  cv::imshow("right", ptr_right->image);
  cv::waitKey(1);
}

}  // namespace bluefox2

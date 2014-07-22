#ifndef BLUEFOX2_STEREO_SYNC_H_
#define BLUEFOX2_STEREO_SYNC_H_

#include <memory>

#include <ros/ros.h>
#include <image_transport/image_transport.h>
#include <image_transport/subscriber_filter.h>
#include <message_filters/subscriber.h>
#include <message_filters/time_synchronizer.h>
#include <sensor_msgs/Image.h>
#include <sensor_msgs/CameraInfo.h>

namespace bluefox2 {

class StereoSync {
 public:
  StereoSync(const ros::NodeHandle &nh);

 private:
  using ImageSubscriberFilter = image_transport::SubscriberFilter;
  using CinfoSubscriberFilter =
      message_filters::Subscriber<sensor_msgs::CameraInfo>;
  using TimeSyncPolicy = message_filters::sync_policies::ExactTime<
      sensor_msgs::Image, sensor_msgs::CameraInfo, sensor_msgs::Image,
      sensor_msgs::CameraInfo>;
  using TimeSynchronizer = message_filters::Synchronizer<TimeSyncPolicy>;

  void SyncCallback(const sensor_msgs::ImageConstPtr &image_left,
                    const sensor_msgs::CameraInfoConstPtr &cinfo_left,
                    const sensor_msgs::ImageConstPtr &image_right,
                    const sensor_msgs::CameraInfoConstPtr &cinfo_right);

  ros::NodeHandle nh_;
  image_transport::ImageTransport it_;
  ImageSubscriberFilter l_image_sub_;
  ImageSubscriberFilter r_image_sub_;
  CinfoSubscriberFilter l_cinfo_sub_;
  CinfoSubscriberFilter r_cinfo_sub_;

  std::unique_ptr<TimeSynchronizer> sync_;

};  // class StereoSync

}  // namespace bluefox2

#endif  // BLUEFOX2_STEREO_SYNC_H_

#ifndef BLUEFOX2_STEREO_SYNC_H_
#define BLUEFOX2_STEREO_SYNC_H_

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
  typedef image_transport::SubscriberFilter ImageSubscriberFilter;
  typedef message_filters::Subscriber<sensor_msgs::CameraInfo>
      CinfoSubscriberFilter;
  typedef message_filters::sync_policies::ExactTime<
      sensor_msgs::Image, sensor_msgs::CameraInfo, sensor_msgs::Image,
      sensor_msgs::CameraInfo> TimeSyncPolicy;
  typedef message_filters::Synchronizer<TimeSyncPolicy> TimeSynchronizer;

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

  boost::shared_ptr<TimeSynchronizer> sync_;

};  // class StereoSync

}  // namespace bluefox2

#endif  // BLUEFOX2_STEREO_SYNC_H_

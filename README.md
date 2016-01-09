[![Build Status](https://travis-ci.org/KumarRobotics/bluefox2.svg?branch=master)](https://travis-ci.org/KumarRobotics/bluefox2)

# Bluefox2
*This driver depends on package [`camera_base`](https://github.com/KumarRobotics/camera_base)*

https://github.com/KumarRobotics/bluefox2

![image](http://i.imgur.com/89Bb1hR.png)

[mvBluefox MLC](http://www.matrix-vision.com/USB2.0-single-board-camera-mvbluefox-mlc.html)

## Supported hardware
This driver should work with any Matrix-Vision Bluefox usb2.0 MLC cameras (bluefox2).

## API Stability
The ROS API of this driver should be considered **unstable**.

## ROS API

### single_node

`single_node` is a node for a single bluefox2 camera.

#### Published topics

`~image_raw` ([sensor_msgs/Image](http://docs.ros.org/api/sensor_msgs/html/msg/Image.html))

The unprocessed image data.

`~camera_info` ([sensor_msgs/CameraInfo](http://docs.ros.org/api/sensor_msgs/html/msg/CameraInfo.html))

Contains the camera calibration (if calibrated) and extra data about the camera configuration.

#### Parameters

**Common interface**

`~device` (`string`)

This will be the same as `serial`.

`~rate` (`double`)

This will be the same as `fps`.

**Normal parameters**

`~serial` (`string`, default: `<device>`)

bluefox2 camera serial number.

`~camera_name` (`string`, default: `mv_<serial>`)

Camera name used by `camera_info_manager` for loading calibration file, should be the same as the name in `mv_<serial>.yaml`.

`~camera` (`string`, default: `<camera_name>`)

Name of the node.

`~frame_id` (`string`, default: `<camera>`)

frame id of the published topics.

`~calib_url` (`string`)

camera calibration URL.

**Dynamically Reconfigurable Parameters**

See the [dynamic_reconfigure](http://wiki.ros.org/dynamic_reconfigure) package for details on dynamically reconfigurable parameters.

white balance parameter:

* `-1` - wbp_unavailable
* `0~5` - wbp_tungsten and friends
* `6` ~ wbp_user1
* `7` - wbp_calibrate, calibrate next frame for white balance

For calibrating white balance, first point the camera at a white board, then select `wbp_calibrate`, the mvIMPACT driver will calibrate white balance automatically and save it to `wbp_user1`.

`~dcfm` (`int`, default: `1`)

dark current filter mode:

* `0` - dcfm_off
* `1` - dcfm_on
* `2` - dcfm_calibrate
* `3` - correction_image

If you are using a color camera, you would want to perform a 'dark current filter calibration` to enhance the quality of acquisition. This is done with the following steps:

1. Start the bluefox node, let it run for about 5-6 minutes until the temperature of the sensor reaches a stable value. Then you would see something like this.  
![image](http://i.imgur.com/UzJm5Rv.jpg)
2. Put the lense cap on so that the image looks like this. You can see that there are some pixels that are not completely dark, this is due to the effect of dark current.  
![image](http://i.imgur.com/Kk6Rish.jpg)
3. Select `dcfm_calibrate` from the reconfigure server. The driver will do the dark current calibration and then switch the filter on. You can verify the result by selecting `correction_image` and you will see this.  
![image](http://i.imgur.com/NC2AZ2l.jpg)
4. Then you can switch back to `dcfm_on` and your image would look much better then before.  
![image](http://i.imgur.com/WFrVAOB.jpg)
5. This calibration process cannot be done automatically since it requires the sensor be running for a few minutes and manually putting the lense cap on.

Read this [article](http://www.matrix-vision.com/faq-reader/245.html) as well.

`~hdr` (`bool`, default: `false`)

Only 200wG camera supports this mode, set `hdr` to `true` for other cameras will have no effect.

This mode is required when high fps desired which allows 200wG to work at 90 fps and 200bG at 24 fps (with `ctm = 1`). Using this will result in imprecise time stamp of captured image. Use with caution.

### stereo_node

`stereo_node` is a node for 2 bluefox2 cameras in stereo configuration.

#### Published topics

`~left/image_raw` ([sensor_msgs/Image](http://docs.ros.org/api/sensor_msgs/html/msg/Image.html))

`~right/image_raw` ([sensor_msgs/Image](http://docs.ros.org/api/sensor_msgs/html/msg/Image.html))

The unprocessed image data.

`~/left/camera_info` ([sensor_msgs/CameraInfo](http://docs.ros.org/api/sensor_msgs/html/msg/CameraInfo.html))

`~/right/camera_info` ([sensor_msgs/CameraInfo](http://docs.ros.org/api/sensor_msgs/html/msg/CameraInfo.html))

Contains the camera calibration (if calibrated) and extra data about the camera configuration.

**Common interface**

`~rate` (`double`)

This will be the same as `fps`.

**Normal parameters**

`~left` (`string`, default: `<left_serial>`)

`~right` (`string`, default: `<right_serial>`)

bluefox2 camera serial number for the left and right camera.

`~left_camera_name` (`string`, default: `mv_<left_serial>`)

`~right_camera_name` (`string`, default: `mv_<right_serial>`)

Camera name used by `camera_info_manager` for load calibration file, should be the same as the name in `calib_<serial>.yml`.

`~left_calib_url` (`string`, default: `package://bluefox2/calib/calib_<left_serial>.yml`)

`~right_calib_url` (`string`, default: `package://bluefox2/calib/calib_<right_serial>.yml`)

camera calibration URL for the left and right camera.

All the rest parameters are the same with `single_node`, changing them will change the corresponding settings in both cameras.

## Hardware sync

Notice that if you are using two 200w cameras, there's no need to use hardware synchronization because software synchronization is supported. The stereo_node will send two request one after another and the delay could be ignored.

[Using 2 mvBlueFOX-MLC cameras in Master-Slave mode](http://www.matrix-vision.com/manuals/mvBlueFOX/UseCases_page_0.html#UseCases_section_MasterSlave_Mode)

[Single-board version (mvBlueFOX-MLC2xx)](http://www.matrix-vision.com/manuals/mvBlueFOX/mvBF_page_tech.html#mvBF_subsection_single )

## [Install mvIMPACT Driver](http://www.matrix-vision.com/manuals/mvBlueFOX/mvBF_page_quickstart.html#mvBF_subsubsection_quickstart_linux_software)
Run:

```
./install/install.sh
```

This will install mvIMPACT_Acquire SDK to `/opt`.

## wxPropView
If you install the full matrix vision driver, you will have `wxPropView` installed to your system. It's an GUI application that let you inspect all properties of the camera.

## FAQs
1. I have the driver locally in my ros package, but every time I plug in a camera, I need to change the permission.
    * Simple fix:

        ```bash
        sudo chmod 777 /dev/bus/usb/xxx/xxx
        ```

    `/dev/bus/usb/xxx/xxx` can be easily identified with the error information ros provids.

    * Permanent fix:
    Adding a rule to `/etc/udev/rules.d` by the following command

        ```bash
        sudo cp -f path_to_driver/Scripts/51-mvbf.rules /etc/udev/rules.d/
        sudo service udev reload
        ```

2. Camera acquisition failure after being unplugged and plugged back in
If you are using linux kernel 3.13.0, then it's likely that you will encounter this problem.
The solution is to install the latest kernel, eg. > 3.13

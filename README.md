[![Build Status](https://travis-ci.org/KumarRobotics/bluefox2.svg?branch=master)](https://travis-ci.org/KumarRobotics/bluefox2)

# Bluefox2
*This driver works with ubuntu 14.04 + ros indigo + gcc 4.8+*

*This driver follows the google c++ style guide*

https://github.com/KumarRobotics/bluefox2

![image](http://i.imgur.com/89Bb1hR.png)

[mvBluefox MLC](http://www.matrix-vision.com/USB2.0-single-board-camera-mvbluefox-mlc.html)

## Supported hardware
This driver should work with any Matrix-Vision Bluefox usb2.0 MCL cameras (bluefox2).

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

This will be the same as `serial`

`~rate` (`double`)

This will be the same as `fps`

**Normal parameters**

`~serial` (`string`, default: `<serial>`)

bluefox2 camera serial number

`~camera_name` (`string`, default: `mv_<serial>`)

Camera name used by `camera_info_manager` for load calibration file, should be the same as the name in `calib_<serial>.yml`

`~camera` (`string`, default: `<camera_name>`)

Name of the node

`~frame_id` (`string`, default: `<camera>`)

frame id of the published topics

`~calib_url` (`string`, default: `package://bluefox2/calib/calib_<serial>.yml`)

camera calibration url

**Dynamically Reconfigurable Parameters**

See the [dynamic_reconfigure](http://wiki.ros.org/dynamic_reconfigure) package for details on dynamically reconfigurable parameters.

`~fps` (`double`, default: `20.0`)

frame per second

`~color` (`bool`, default: `false`)

pixelformat, `true` will use `RGB888Packed`, `false` will use `mono8`

`~cbm` (`bool`, default: `false`)

camera binning mode, `true` use `BinningHV`, which is horizontal + vertical binning

`~ctm` (`int`, default: `1`)

camera trigger mode:

* `0` - ctm_continuous
* `1` - ctm_on_demand

we recommend *ctm_on_demand* for more precise timing control. If a device does not support *ctm_on_demand*, it will be set to *ctm_continuous*

`~aec` (`int`, default: `0`)

auto expose control:

* `0` - aec_off, fixed exposure time
* `1` - aec_on, auto control by driver
* `2` - aec_fix, auto determined by driver and set to a fixed value
* `3` - aec_clamp, auto control by driver, but clamped to expose time set by user in `expose_us`, the pid controller for auto expose controll is tuned by Frank

`~expose_us` (`int`, default: `5000`)

exposeure time in us

`~gain_db` (`double`, default: `0.0`)

gain in Db

`~wbp` (`int`, default: `0`)

white balance parameter:

* `-1` - wbp_unavailable
* `0~5` - wbp_tungsten and friends
* `6` ~ wbp_user1
* `7` - wbp_calibrate, calibrate next frame for white balance

For calibrating white balance, first point the camera at a white board, then select `wbp_calibrate`, the mvIMPACT driver will calibrate white balance automatically and save it to `wbp_user`

`~dcfm` (`int`, default: `1`)

dark current filter mode:

* `0` - dcfm_off
* `1` - dcfm_on
* `2` - dcfm_calibrate
* `3` - correction_image

For calibrating dark current, first put the lense cap on, and then change `dark_current_filter` to `calibrate`, the camera will capture some amount of images (I set it to 20) and then turn on the filter. After that, noises in the background of image will be removed.

TODO: turn off offsetautocalibration and set the offset to a proper value during darkcurrentfilter calibration.

Read this [article](http://www.matrix-vision.com/faq-reader/245.html) as well.

`~hdr` (`bool`, default: `false`)

Only 200wG camera supports this mode, set `hdr` to `true` for other cameras will have no effect

`~boost` (`bool`, default: `false`)

boost mode:

* `true` - send 2 requests into the request queue
* `false` - send only 1 request

This mode is requried by high fps which allows 200wG to work at 90 fps and 200bG at 24 fps (with `ctm = 1`). Using this will result in inprecise time stamp of captured image. Use with caution.

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

This will be the same as `fps`

**Normal parameters**

`~left` (`string`, default: `<left_serial>`)

`~right` (`string`, default: `<right_serial>`)

bluefox2 camera serial number for the left and right camera

`~left_camera_name` (`string`, default: `mv_<left_serial>`)

`~right_camera_name` (`string`, default: `mv_<right_serial>`)

Camera name used by `camera_info_manager` for load calibration file, should be the same as the name in `calib_<serial>.yml`

`~left_calib_url` (`string`, default: `package://bluefox2/calib/calib_<left_serial>.yml`)

`~right_calib_url` (`string`, default: `package://bluefox2/calib/calib_<right_serial>.yml`)

camera calibration url for the left and right camera

All the rest parameters are the same with `single_node`, changing them will change the corresponding settings in both cameras.

## [Install mvIMPACT Driver](http://www.matrix-vision.com/manuals/mvBlueFOX/mvBF_page_quickstart.html#mvBF_subsubsection_quickstart_linux_software)
1. Download the latest bluefox driver [link](http://www.matrix-vision.com/latest-drivers.html).
Under the tab mvBlueFOX, download the following two files:
  * `install_mvBlueFOX`
  * `mvBlueFOX-x86_64_ABI2-x.y.z.tgz`

  The installation script `install_mvBlueFOX.sh` and the archive `mvBlueFOX-x86_64_ABI2-x.y.z.tgz` must reside in the same directory. Nothing is written to this directory during script execution, so no write access to the directory is needed in order to execute the script.

2. Change permission of `install_mvBlueFOX.sh`

    ```bash
    sudo chmod +x install_mvBlueFOX.sh
    ```

3. Run the installation script
**Do this only if you wish to install the driver to your system!**

    ```bash
    sudo ./install_mvBlueFOX.sh
    ```

    Note that you don't have to extract the ```tgz``` file, just leave it as it is, the install script will do that for you. The default installation path is ```/opt/mvIMPACT_acquire```
    You will need to reboot (automatically/manually) after the installation.

## wxPropView
If you install the full matrix vision driver, you will have `wxPropView` installed to your system. It's an GUI application that let you inspect all properties of the camera.

## FAQs
1. I have the driver locally in my ros package, but everytime I plug in a camera, I need to change the permission.
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
The solution is to install the latest kernel, eg. 3.14.17

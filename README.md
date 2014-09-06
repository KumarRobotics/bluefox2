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

`single_node` is a driver for a single bluefox2 camera.

#### Published topics

`~image_raw` ([sensor_msgs/Image](http://docs.ros.org/api/sensor_msgs/html/msg/Image.html))  
    The unprocessed image data.

`~camera_info` ([sensor_msgs/CameraInfo](http://docs.ros.org/api/sensor_msgs/html/msg/CameraInfo.html))  
Contains the camera calibration (if calibrated) and extra data about the camera configuration.

### Parameters

Dynamically Reconfigurable Parameters.  
See the [dynamic_reconfigure](http://wiki.ros.org/dynamic_reconfigure) package for details on dynamically reconfigurable parameters.

`~serial` (`string`, default: `<serial>`)  
    bluefox 2camera serial number

`~frame_id` (`string`, default: `mv_<serial>`)  
    tf frame id

`~camera` (`string`, default: `mv_<serial>`)  
    camera name used in the calibration file

`~calib_url` (`string`, default: `package://bluefox2/calib/calib_<serial>.yml`)  
    camera calibration url

`~fps` (`double`, default: `20.0`)  
    frame per second

`~color` (`bool`, default: `false`)  
    pixelformat, `true` will use `RGB888Packed`, `false` will use `mono8`

`~binning` (`bool`, default: `false`)  
    `true` use `BinningHV`, which is horizontal + vertical binning

`~trigger` (`int`, default: `1`)  
    `1` use `OnDemand`, `0` use `Continuous`. we recommend `OnDemand` for more precise timing control

`~auto_fix_expose` (`bool`, default: `false`)  
    `true` will let the camera decide the exposure and fix it to that value. This feature is experimental, use with caution.

`~expose_us` (`int`, default: `5000`)  
    exposeure time in us

`~gain_db` (`double`, default: `0.0`)  
    gain in Db

`~hdr` (`bool`, default: `false`)  
    Only 200wG camera supports this mode, set `hdr` to `true` for other cameras will have no effect

`~boost` (`bool`, default: `false`)  
    `true` will put 2 request into the request queue. For high fps only. This allows 200wG to work at 90 fps and 200bG at 24 fps (at `trigger = 1`). Using this will result in inprecise time stamp of captured image. Use with caution


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

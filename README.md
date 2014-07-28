# Bluefox2
*This driver has only been tested under ubuntu 12.04 and 14.04 with ros hydro and indigo*  
*This driver follows the google c++ style guide*  
https://github.com/KumarRobotics/bluefox2

![image](http://i.imgur.com/89Bb1hR.png)  
[mvBluefox MLC](http://www.matrix-vision.com/USB2.0-single-board-camera-mvbluefox-mlc.html)
## [Install Bluefox Driver](http://www.matrix-vision.com/manuals/mvBlueFOX/mvBF_page_quickstart.html#mvBF_subsubsection_quickstart_linux_software)
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
4. This is a catkin package, you can build this by either add this pacakge to your catkin workspace, or simply doing the following.

    ```bash
    mkdir build
    cd build
    cmake ..
    make
    ```

## Running Instruction
arguments in `<>` are optional, for their default value, please refer to the launch file in `bluefox/launch`.

Also note that for `MLC202bc`, the valid image height and width are *960* and *1280*.

Available options are:  
1. `serial`: `string`, serial number on the back of  the camera  
2. `mode`: `string`, can be standalone, master or slave  
3. `calibration_url`: `string`, a `calib_<serial>.yaml` file, assume to be put in `config` folder  
4. `fps`: `double`, frames per seconde  
5. `width`: `int`, width of the image, e.g. 720  
6. `height`: `int`, height of the image, e.g. 480  
7. `binning`: `bool`, ture/false  
8. `auto_expose`: `bool`, true/false  
9. `expose_us`: `int`, expose time in us  
10. `wbp`: `string`, white balance mode, only works in color mode, "none"/"indoor"/"outdoor"  
11. `color`: `bool`, true/false  

Available launch files are:

1. Monocular

    ```bash
    roslaunch bluefox2 mono.launch \
    <serial:=25000855> <mode:=standalone> <fps:=20.0>
    <color:=true> <wbp:=indoor>
    ```

2. Stereo

    ```bash
    roslaunch bluefox2 stereo.launch \
    <left:=25000855> <lmode:=master> \
    <right:=25000495> <rmode:=slave>
    ```

3. Trifocal

    ```bash
    roslaunch bluefox2 trifocal.launch \
    <cam1:=25000855> <mode1:=master> \
    <cam2:=25000495> <mode2:=slave> \
    <cam3:=29000130> <mode3:=slave>
    ```

## Camera Calibration
Camera calibration files are located in `config`, with the naming convention `calib_<serial>.yaml`.

1. Sample camera calibration url, `<serial>` is the camera serial number

    ```bash
    package://bluefox2/config/calib_<serial>.yaml
    ```

2. Calibrate single camera

    ```bash
    roslaunch bluefox2 calib_mono.launch \
    <serial:=25000495> <size:=8x6> <square:=0.1> <fps:=5.0>
    ```

3. You can calibrate the camera even if it already has a calibration file. After calibartion, the new file will overwrite the old one.

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

2. There's a new mvBLUEFOX driver out there, how do I update bluefox2 with the new driver?
We have a folder in the `bluefox2` package named `mvIMPACT` for storing necessary components for the node. All you need to do is to copy/symlink the following folders from `mvBlueFOX-x86_64_ABI2-x.y.z` to `mvIMPACT`:

    ```bash
    bluefox2
    |--mvIMPACT
       |--DriverBase
       |--lib
       |--mvDeviceManager
       |--mvIMPACT_CPP
       |--mvPropHandling
       |--Scripts
    ```  

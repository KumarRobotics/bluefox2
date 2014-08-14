[![Build Status](https://travis-ci.org/KumarRobotics/bluefox2.svg?branch=master)](https://travis-ci.org/KumarRobotics/bluefox2)

# Bluefox2
*This driver has only been tested under ubuntu 14.04 with ros indigo*  
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
        

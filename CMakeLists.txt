cmake_minimum_required(VERSION 2.8.3)
project(bluefox2)

add_definitions("-Wall -std=c++11")

find_package(catkin REQUIRED COMPONENTS
    camera_info_manager
    cv_bridge
    dynamic_reconfigure
    image_transport
    message_filters
    roscpp
    sensor_msgs
    std_msgs
    nodelet
)
find_package(OpenCV)

# dynamic reconfigure
generate_dynamic_reconfigure_options(cfg/CameraDyn.cfg)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES bluefox2
#  CATKIN_DEPENDS camera_info_manager cv_bridge dynamic_reconfigure image_transport message_filters roscpp sensor_msgs
#  DEPENDS system_lib
)

# mvIMPACT
set(MVIMPACT_DIR "/opt/mvIMPACT_acquire")
set(MVIMPACT_INCLUDE_DIRS ${MVIMPACT_DIR})
set(MVIMPACT_LIBRARIES ${MVIMPACT_DIR}/lib/x86_64/libmvDeviceManager.so)

include_directories(include)
include_directories(
    ${catkin_INCLUDE_DIRS}
    ${MVIMPACT_INCLUDE_DIRS}
    )


# camera
add_library(camera
    src/camera.cpp
    src/ros_camera.cpp
    )
target_link_libraries(camera
    ${MVIMPACT_LIBRARIES}
    ${OpenCV_LIBRARIES}
    ${catkin_LIBRARIES}
    )

# single node
add_executable(single_node
    src/single/single_camera.cpp
    src/single/single_node.cpp
    )
target_link_libraries(single_node
    camera
    )

# stereo node
add_executable(stereo_node
    src/stereo/stereo_camera.cpp
    src/stereo/stereo_node.cpp
    )
target_link_libraries(stereo_node
    camera
    )

# single nodelet
add_library(single_nodelet
    src/single/single_nodelet.cpp
    src/single/single_camera.cpp
    )
target_link_libraries(single_nodelet
    camera
    )

# stereo nodelet
add_library(stereo_nodelet
    src/stereo/stereo_nodelet.cpp
    src/stereo/stereo_camera.cpp
    )
target_link_libraries(stereo_nodelet
    camera
    )

# stereo sync
add_library(stereo_sync
    src/stereo/stereo_sync.cpp
    )
target_link_libraries(stereo_sync
    ${catkin_LIBRARIES}
    ${OpenCV_LIBRARIES}
    )
add_executable(stereo_sync_node
    src/stereo/stereo_sync_node.cpp
    )
target_link_libraries(stereo_sync_node
    stereo_sync
    )

add_dependencies(single_node
    ${catkin_EXPORTED_TARGETS}
    ${PROJECT_NAME}_gencfg
    )


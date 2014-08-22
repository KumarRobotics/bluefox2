cmake_minimum_required(VERSION 2.8.3)
project(bluefox2)

# set default build type
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE RelWithDebInfo)
endif()

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

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
    message_generation
    )
find_package(OpenCV)

# dynamic reconfigure
generate_dynamic_reconfigure_options(cfg/CameraDyn.cfg)

# services
add_service_files(FILES SetExposeSrv.srv)
generate_messages(DEPENDENCIES std_msgs)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES bluefox2
   CATKIN_DEPENDS message_runtime
#  DEPENDS system_lib
)

# mvIMPACT
execute_process(COMMAND uname -m COMMAND tr -d '\n' OUTPUT_VARIABLE ARCH)
set(MVIMPACT_DIR "${PROJECT_SOURCE_DIR}/mvIMPACT")
set(MVIMPACT_INCLUDE_DIRS ${MVIMPACT_DIR}/include)
set(MVIMPACT_LIBRARIES ${MVIMPACT_DIR}/lib/${ARCH}/libmvDeviceManager.so)

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
add_library(camera_nodelet
    src/single/single_nodelet.cpp
    src/single/single_camera.cpp
    src/stereo/stereo_nodelet.cpp
    src/stereo/stereo_camera.cpp
    )
target_link_libraries(camera_nodelet
    camera
    )

# stereo sync
add_executable(stereo_sync_node
    src/stereo/stereo_sync_node.cpp
    src/stereo/stereo_sync.cpp
    )
target_link_libraries(stereo_sync_node
    ${catkin_LIBRARIES}
    ${OpenCV_LIBRARIES}
    )

# dependencies
add_dependencies(camera
    ${catkin_EXPORTED_TARGETS}
    ${PROJECT_NAME}_gencfg
    ${PROJECT_NAME}_gencpp
    ${${PROJECT_NAME}_EXPORTED_TARGETS}
    )


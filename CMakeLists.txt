cmake_minimum_required(VERSION 2.8.3)
project(bluefox2)

find_package(catkin REQUIRED COMPONENTS
  camera_info_manager
  cv_bridge
  dynamic_reconfigure
  image_transport
  message_filters
  roscpp
  sensor_msgs
)

catkin_package(
#  INCLUDE_DIRS include
#  LIBRARIES bluefox2
#  CATKIN_DEPENDS camera_info_manager cv_bridge dynamic_reconfigure image_transport message_filters roscpp sensor_msgs
#  DEPENDS system_lib
)

include_directories(include)
include_directories(
  ${catkin_INCLUDE_DIRS}
)

## Declare a cpp library
# add_library(bluefox2
#   src/${PROJECT_NAME}/bluefox2.cpp
# )

## Declare a cpp executable
# add_executable(bluefox2_node src/bluefox2_node.cpp)

## Add cmake target dependencies of the executable/library
## as an example, message headers may need to be generated before nodes
# add_dependencies(bluefox2_node bluefox2_generate_messages_cpp)

## Specify libraries to link a library or executable target against
# target_link_libraries(bluefox2_node
#   ${catkin_LIBRARIES}
# )


cmake_minimum_required(VERSION 2.8.3)
project(bluefox2)

add_definitions(-Wall -std=c++11)
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR}/cmake)

find_package(catkin REQUIRED COMPONENTS
    roscpp nodelet camera_base
    message_generation
    )
find_package(mvIMPACT REQUIRED)

# dynamic reconfigure
generate_dynamic_reconfigure_options(cfg/Bluefox2Dyn.cfg)

# services
add_service_files(FILES SetExposeSrv.srv)
generate_messages(DEPENDENCIES std_msgs)

catkin_package(
    #  INCLUDE_DIRS include
    #  LIBRARIES bluefox2
    CATKIN_DEPENDS message_runtime
    #  DEPENDS system_lib
    )

include_directories(
    include
    ${catkin_INCLUDE_DIRS}
    ${mvIMPACT_INCLUDE_DIRS}
    )

# bluefox2
add_library(${PROJECT_NAME}
    src/bluefox2.cpp
    src/bluefox2_ros.cpp
    src/single/single_node.cpp
    src/stereo/stereo_node.cpp
    src/single/single_nodelet.cpp
    src/stereo/stereo_nodelet.cpp
    )
target_link_libraries(${PROJECT_NAME}
    ${mvIMPACT_LIBRARIES}
    ${catkin_LIBRARIES}
    )

# single node
add_executable(single_node
    src/single/single_main.cpp
    )
target_link_libraries(single_node
    ${PROJECT_NAME}
    )

# stereo node
add_executable(stereo_node
    src/stereo/stereo_main.cpp
    )
target_link_libraries(stereo_node
   ${PROJECT_NAME}
   )

# dependencies
add_dependencies(${PROJECT_NAME}
    ${catkin_EXPORTED_TARGETS}
    ${PROJECT_NAME}_gencfg
    ${PROJECT_NAME}_gencpp
    ${${PROJECT_NAME}_EXPORTED_TARGETS}
    )


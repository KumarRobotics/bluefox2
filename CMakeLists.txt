cmake_minimum_required(VERSION 2.8.3)
project(bluefox2)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++11")
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${PROJECT_SOURCE_DIR}/cmake)

find_package(catkin REQUIRED COMPONENTS
    roscpp nodelet camera_base
    message_generation
    )
find_package(mvIMPACT REQUIRED)
find_package(Boost COMPONENTS program_options REQUIRED)

# dynamic reconfigure
generate_dynamic_reconfigure_options(cfg/Bluefox2Dyn.cfg)

# services
add_service_files(FILES SetExposeSrv.srv)
generate_messages(DEPENDENCIES std_msgs)

catkin_package(
    INCLUDE_DIRS include ${mvIMPACT_INCLUDE_DIRS}
    LIBRARIES ${PROJECT_NAME} ${mvIMPACT_LIBRARIES}
    CATKIN_DEPENDS message_runtime
    )

include_directories(
    include
    ${catkin_INCLUDE_DIRS}
    ${mvIMPACT_INCLUDE_DIRS}
    )

add_subdirectory(src)

# dependencies
add_dependencies(${PROJECT_NAME}
    ${catkin_EXPORTED_TARGETS}
    ${PROJECT_NAME}_gencfg
    ${PROJECT_NAME}_gencpp
    ${${PROJECT_NAME}_EXPORTED_TARGETS}
    )

install(DIRECTORY launch
  DESTINATION ${CATKIN_PACKAGE_SHARE_DESTINATION}
  FILES_MATCHING PATTERN "*.launch"
)

install(DIRECTORY ${mvIMPACT_LIBRARY_DIR}
  DESTINATION ${CATKIN_PACKAGE_LIB_DESTINATION}
)

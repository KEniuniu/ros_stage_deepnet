# Install script for directory: /home/rakesh/rakesh/cmpt882/Stage/worlds

# Set the install prefix
IF(NOT DEFINED CMAKE_INSTALL_PREFIX)
  SET(CMAKE_INSTALL_PREFIX "/home/rakesh/rakesh/cmpt882/Stage/build")
ENDIF(NOT DEFINED CMAKE_INSTALL_PREFIX)
STRING(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
IF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  IF(BUILD_TYPE)
    STRING(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  ELSE(BUILD_TYPE)
    SET(CMAKE_INSTALL_CONFIG_NAME "RELEASE")
  ENDIF(BUILD_TYPE)
  MESSAGE(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
ENDIF(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)

# Set the component getting installed.
IF(NOT CMAKE_INSTALL_COMPONENT)
  IF(COMPONENT)
    MESSAGE(STATUS "Install component: \"${COMPONENT}\"")
    SET(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  ELSE(COMPONENT)
    SET(CMAKE_INSTALL_COMPONENT)
  ENDIF(COMPONENT)
ENDIF(NOT CMAKE_INSTALL_COMPONENT)

# Install shared libraries without execute permission?
IF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  SET(CMAKE_INSTALL_SO_NO_EXE "1")
ENDIF(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)

IF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")
  FILE(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/stage/worlds" TYPE FILE FILES
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/nd.cfg"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/test.cfg"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/simple.cfg"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/camera.cfg"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/lsp_test.cfg"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/amcl-sonar.cfg"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/vfh.cfg"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/everything.cfg"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/roomba.cfg"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/wifi.cfg"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/autolab.cfg"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/wavefront.cfg"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/uoa_robotics_lab.cfg"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/mbicp.cfg"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/wavefront-remote.cfg"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/mbicp.world"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/uoa_robotics_lab.world"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/roomba.world"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/wifi.world"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/autolab.world"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/sensor_noise_module_demo.world"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/fasr.world"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/fasr2.world"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/simple.world"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/large.world"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/pioneer_walle.world"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/everything.world"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/lsp_test.world"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/fasr_plan.world"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/SFU.world"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/camera.world"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/sensor_noise_demo.world"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/pioneer_flocking.world"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/pantilt.inc"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/pioneer.inc"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/hokuyo.inc"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/beacons.inc"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/ubot.inc"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/objects.inc"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/irobot.inc"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/sick.inc"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/walle.inc"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/map.inc"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/uoa_robotics_lab_models.inc"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/chatterbox.inc"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/test.sh"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/worldgen.sh"
    "/home/rakesh/rakesh/cmpt882/Stage/worlds/cfggen.sh"
    )
ENDIF(NOT CMAKE_INSTALL_COMPONENT OR "${CMAKE_INSTALL_COMPONENT}" STREQUAL "Unspecified")

IF(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  INCLUDE("/home/rakesh/rakesh/cmpt882/Stage/worlds/benchmark/cmake_install.cmake")
  INCLUDE("/home/rakesh/rakesh/cmpt882/Stage/worlds/bitmaps/cmake_install.cmake")
  INCLUDE("/home/rakesh/rakesh/cmpt882/Stage/worlds/wifi/cmake_install.cmake")

ENDIF(NOT CMAKE_INSTALL_LOCAL_ONLY)


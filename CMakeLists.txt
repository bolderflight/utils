# v3.14 required for FetchContent_MakeAvailable
cmake_minimum_required(VERSION 3.14)
  # Project information
  project(Utils
    VERSION 1.0.0
    DESCRIPTION "Utility functions"
    LANGUAGES CXX
  )
  # Fetch Eigen
  include(FetchContent)
  FetchContent_Declare(
    eigen
    GIT_REPOSITORY https://github.com/bolderflight/eigen.git
    GIT_TAG v3.0.2
  )
  FetchContent_MakeAvailable(eigen)
  # Add the library target
  add_library(utils
    src/utils.cpp
    src/utils.h
  )
  # Link libraries
  target_link_libraries(utils
    PUBLIC
      eigen
  )
  # Setup include directories 
  target_include_directories(utils PUBLIC 
    $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/src>
    $<INSTALL_INTERFACE:include>
  )

# # Example if this project is built separately
# if (PROJECT_NAME STREQUAL CMAKE_PROJECT_NAME)
#   # Add the example target
#   add_executable(example examples/example.cc)
#   # Add the includes
#   target_include_directories(example PUBLIC 
#     $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
#     $<INSTALL_INTERFACE:include>
#   )
#   # Link libraries to the example target
#   target_link_libraries(example
#     PRIVATE 
#       mpu9250_sensor
#   )
#   # Add hex and upload targets
#   include(${mcu_support_SOURCE_DIR}/cmake/flash_mcu.cmake)
#   FlashMcu(example ${MCU} ${mcu_support_SOURCE_DIR})
# endif()

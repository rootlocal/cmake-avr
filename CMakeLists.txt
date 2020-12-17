cmake_minimum_required(VERSION 3.7)
project(test C CXX ASM)
set(CMAKE_CXX_STANDARD 11)
message(STATUS "Build PROJECT_NAME: ${PROJECT_NAME}")
set(PACKAGE_MAJOR 0)
set(PACKAGE_MINOR 1)
set(PACKAGE_PATCH 0)

message("MAJOR: ${PACKAGE_MAJOR}")
message("MINOR: ${PACKAGE_MINOR}")
message("PATCH: ${PACKAGE_PATCH}")

configure_file(
        "${PROJECT_SOURCE_DIR}/config.h.in"
        "${PROJECT_BINARY_DIR}/config.h"
)

set(MODULES ${CMAKE_SOURCE_DIR}/modules)
message(STATUS "Set Modules dir: ${MODULES}")
set(AVR_MCU "atmega32")
message(STATUS "Set MCU: ${AVR_MCU}")

#set(AVR_L_FUSE "")
#set(AVR_H_FUSE "")
set(AVR_UPLOADTOOL "avrdude")
set(AVR_UPLOADTOOL_PORT "usb")
set(AVR_PROGRAMMER "usbasp")

include(${MODULES}/avr.cmake)
message(STATUS "Include: ${MODULES}/avr.cmake...")

include_directories(
        ${PROJECT_SOURCE_DIR}/include
        ${PROJECT_BINARY_DIR}
)

add_subdirectory("${PROJECT_SOURCE_DIR}/src")
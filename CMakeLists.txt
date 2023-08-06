cmake_minimum_required(VERSION 3.13)
set(PICO_SDK_PATH "/home/sonny/pico/pico-sdk")

include("${PICO_SDK_PATH}/external/pico_sdk_import.cmake")

project(template C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
pico_sdk_init()

add_library(template
  src/ht16k33.c)

target_include_directories(template PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include )
target_include_directories(template PRIVATE ${CMAKE_CURRENT_LIST_DIR}/src )

target_link_libraries(template
  hardware_gpio
  hardware_i2c
  pico_stdlib)

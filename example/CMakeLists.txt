cmake_minimum_required(VERSION 3.13)
set(PICO_BOARD "pico_w")
set(PICO_SDK_PATH "/home/sonny/pico/pico-sdk")

include("${PICO_SDK_PATH}/external/pico_sdk_import.cmake")

add_subdirectory(.. pico_template)

project(template_example C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
pico_sdk_init()

add_executable(example
  example.c)
  
target_link_libraries(example
  pico_stdlib
  hardware_i2c
  template)

pico_add_extra_outputs(example)


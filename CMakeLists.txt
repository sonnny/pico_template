cmake_minimum_required(VERSION 3.13)

# must be done on the project root
# export PICO_SDK_PATH=/path/to/pico-sdk
# mkdir build
# cd build
# cmake .. -DPICO_BOARD=pico
# make

include(pico_sdk_import.cmake)
project(pico_cpp_example C CXX ASM)
pico_sdk_init()

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
add_executable(blink src/blink.c)
target_link_libraries(blink pico_stdlib)
pico_add_extra_outputs(blink)

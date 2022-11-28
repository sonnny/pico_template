# pico_template
must be done on the project root

export PICO_SDK_PATH=/home/sonny/pico/pico-sdk

mkdir build
cd build
cmake .. -DPICO_BOARD=pico
make

to copy to pico
press bootsel
  while pressing bootsel press run
  
pico should appear as storage
  copy build/blink.uf2 to pico

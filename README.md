README.md

template for raspberry pi pico
modified from https://github.com/cadouthat/pico-dualsense

  1) initialize i2c     (see src/ht16k33.c)
  2) initialize ht16k33 (see src/ht16k33.c)
  3) display 12345      (see example/example.c)
  
ht16k33 led display from dfrobot https://www.dfrobot.com/product-1978.html

git clone https://github.com/sonnny/pico_template
cd pico_template
cd example
mkdir build
cd build
cmake ..
make

copy example.uf2 to pico by holding boot button while inserting usb

segment:


![Model](https://github.com/sonnny/pico_template/blob/main/img/segment_led.jpg)
![Model](https://github.com/sonnny/pico_template/blob/main/img/segment.jpg)

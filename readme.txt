readme.txt

template for raspberry pi pico
modified from https://github.com/cadouthat/pico-dualsense

  1) initialize i2c     (see src/ht16k33.c)
  2) initialize ht16k33 (see src/ht16k33.c)
  3) display 12345      (see example/example.c)
  
ht16k33 led display from dfrobot https://www.dfrobot.com/product-1978.html

segment:

       0x1
       ____
      |    |
0x20  |    |0x2
       0x40
       ____
      |    |
0x10  |    |0x4
       ____
       0x8



![Model](https://github.com/sonnny/pico_template/blob/main/img/segment_led.jpg?raw=true)
![Model](https://github.com/sonnny/pico_template/blob/main/img/segment_led.jpg)


#include "pico/stdlib.h"
#include "hardware/i2c.h"
#include "ht16k33.h"

int main(){
  stdio_init_all();
  
  ht16k33_init();
  
  ht16k33_display(0, 0x0006); //1
  ht16k33_display(1, 0x005b); //2
  ht16k33_display(2, 0x004f); //3
  ht16k33_display(3, 0x0066); //4
  ht16k33_display(4, 0x006d); //5
}

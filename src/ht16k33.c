
#include "hardware/gpio.h"
#include "hardware/i2c.h"

void i2c_write_byte(uint8_t val) {
    i2c_write_blocking(i2c0, 0x70, &val, 1, false);}

void ht16k33_display(int position, uint16_t bin) {
    uint8_t buf[3];
    buf[0] = position * 2;
    buf[1] = bin & 0xff;
    buf[2] = bin >> 8;
    i2c_write_blocking(i2c0, 0x70, buf, count_of(buf), false);}

void ht16k33_init() {
	
    // init i2c0 400khz on pins 16 and 17
    i2c_init(i2c0,400*1000);
    gpio_set_function(16,GPIO_FUNC_I2C); gpio_set_function(17,GPIO_FUNC_I2C);
    gpio_pull_up(16); gpio_pull_up(17);
	
    // init ht16k33 see pico i2c example
    i2c_write_byte(0x21);
    i2c_write_byte(0xA0);
    i2c_write_byte(0x80 | 0x1);
    
    // blank all 8 leds
    for(int i=0; i<8; i++) ht16k33_display(i,0);}

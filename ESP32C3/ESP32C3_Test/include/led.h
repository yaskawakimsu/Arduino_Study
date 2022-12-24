#include <Arduino.h>
#include "stdint.h"

void init_led();
void led_on_off(uint8_t _num, uint32_t _color, uint8_t _brightness);
void colorWipe(uint32_t c, uint8_t wait);
void rainbow(uint8_t wait);
void rainbowCycle(uint8_t wait);
void theaterChase(uint32_t c, uint8_t wait);
void theaterChaseRainbow(uint8_t wait);
uint32_t Wheel(byte WheelPos);
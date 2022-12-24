#include <Arduino.h>
#include <Adafruit_NeoPixel.h>
#include "led.h"

#define PIN 2
#define LED_COUNT 1

bool led_state = 0;

Adafruit_NeoPixel strip = Adafruit_NeoPixel(LED_COUNT, PIN, NEO_GRB + NEO_KHZ800);

void setup() {

  Serial.begin(115200);
  init_led();

}

void loop() {

  if(led_state == 0){
    led_state = 1;
    led_on_off(0, strip.Color(255, 0, 255), 250);
    Serial.println("ON");
    delay(500);
  }else{
    led_state = 0;
    led_on_off(0, strip.Color(255, 0, 255), 0);
    Serial.println("OFF");
    delay(500);
  }

}


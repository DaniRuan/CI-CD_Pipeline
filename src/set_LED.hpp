#pragma once
#include <Arduino.h>

void set_LED(int state){
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, state);
}
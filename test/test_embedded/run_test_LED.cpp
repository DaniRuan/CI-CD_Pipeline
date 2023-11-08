#include <Arduino.h>
#include <unity.h>
#include <test_LED.hpp>


void setup(){
    Serial.begin(9600);
    delay(1000);

    UNITY_BEGIN();
    RUN_TEST(test_set_LED_on_HIGH_value);
    RUN_TEST(test_set_LED_on_LOW_value);
    UNITY_END();
    
}

void loop(){
}
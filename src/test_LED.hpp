#pragma once
#include <Arduino.h>
#include <unity.h>
#include <set_LED.hpp>

void test_set_LED_on_HIGH_value(void){
    set_LED(HIGH);

    TEST_ASSERT_EQUAL(HIGH, digitalRead(LED_BUILTIN));
}

void test_set_LED_on_LOW_value(void){
    set_LED(LOW);

    TEST_ASSERT_EQUAL(LOW, digitalRead(LED_BUILTIN));
}

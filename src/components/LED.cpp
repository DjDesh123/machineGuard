#include "LED.h"




void LED_init(){
    pinMode(LED_PIN, OUTPUT);
}

void LED_on(){
    digitalWrite(LED_PIN, HIGH);
}

void LED_off(){
    digitalWrite(LED_PIN, LOW);
}


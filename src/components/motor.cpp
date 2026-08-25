#include "motor.h"


void motor_init() {
    // Initialize motor control pins
    pinMode(MOTOR_PIN1, OUTPUT);
}


void motor_on(){
    digitalWrite(MOTOR_PIN1, HIGH);
}

void motor_off(){
    digitalWrite(MOTOR_PIN1, LOW);
}

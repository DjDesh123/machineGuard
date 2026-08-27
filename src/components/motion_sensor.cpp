#include "motion_sensor.h"



void motion_sensor_init() {
    pinMode(MOTION_SENSOR_TRIG_PIN, OUTPUT);
    pinMode(MOTION_SENSOR_ECHO_PIN, INPUT);
}


bool check_motion() {

    //starts with a clean signal
    digitalWrite(MOTION_SENSOR_TRIG_PIN, LOW);
    delayMicroseconds(2);


    //sends a 10 microsecond pulse to trigger the sensor
    digitalWrite(MOTION_SENSOR_TRIG_PIN, HIGH);
    delayMicroseconds(10);
    digitalWrite(MOTION_SENSOR_TRIG_PIN, LOW);


    //reads the echo pin and calculates the distance based on the duration of the pulse
    long duration = pulseIn(MOTION_SENSOR_ECHO_PIN, HIGH);
    float distance = duration * 0.034 / 2;

    if (distance < 5) { 
        return true;
    } else {
        return false; 
    }
}
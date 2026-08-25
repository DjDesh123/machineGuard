#ifndef MOTION_SENSOR_H
#define MOTION_SENSOR_H

#include <Arduino.h>

#define MOTION_SENSOR_TRIG_PIN 19
#define MOTION_SENSOR_ECHO_PIN 18

void motion_sensor_init();
bool check_motion();

#endif // MOTION_SENSOR_H
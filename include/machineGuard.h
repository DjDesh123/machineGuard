#ifndef MACHINEGUARD_H
#define MACHINEGUARD_H


#include <Arduino.h>
#include "motor.h"
#include "LED.h"
#include "temperature_sensor.h"
#include "motion_sensor.h"


void machineGuard_init();
void machineGuard_loop();
void temperature_loop();
void motion_loop();

#endif 
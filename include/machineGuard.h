#ifndef MACHINEGUARD_H
#define MACHINEGUARD_H


#define TEMPERATURE_THRESHOLD 27.5 

#include <Arduino.h>

#include "motor.h"
#include "LED.h"
#include "temperature_sensor.h"
#include "motion_sensor.h"


void machineGuard_init();
void machineGuard_loop();
static void alarm_system();

#endif 
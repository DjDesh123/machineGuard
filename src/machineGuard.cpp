#include "machineGuard.h"

void machineGuard_init() {
    LED_init();
    temperature_sensor_init();
    motor_init(); 
    motion_sensor_init();
}

void machineGuard_loop() {
    temperature_loop();
    motion_loop();
}

void temperature_loop(){
    float temperature = get_temperature();

    if (temperature > 27.5) { 
        LED_on();
        motor_on();
    } else {
        LED_off();
        motor_off();
    }
}


void motion_loop(){

    bool motionState = check_motion();

    if (motionState == true) {
        LED_on();
    } else {
        LED_off();
    }

}
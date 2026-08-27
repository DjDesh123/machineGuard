#include "machineGuard.h"

void machineGuard_init() {
    LED_init();
    temperature_sensor_init();
    motor_init(); 
    motion_sensor_init();
}

void machineGuard_loop() {
    alarm_system();

  
}


static void alarm_system() {
    
    if (check_motion() == true  && check_temperature() > TEMPERATURE_THRESHOLD) {
        LED_on();
        motor_on();
    } else if (check_motion() == true  && check_temperature() <= TEMPERATURE_THRESHOLD) {
        LED_on();
        motor_off();
    }else if (check_motion() == false && check_temperature() > TEMPERATURE_THRESHOLD) {
        LED_on();
        motor_on();
    } else {
        LED_off();
        motor_off();
    }
 
}
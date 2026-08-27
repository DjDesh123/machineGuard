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
    float temperature = check_temperature();
    bool motion = check_motion();
    
    if (motion == true  && temperature > TEMPERATURE_THRESHOLD) {
        LED_on();
        motor_on();
    } else if (motion == true  && temperature <= TEMPERATURE_THRESHOLD) {
        LED_on();
        motor_off();
    }else if (motion == false && temperature > TEMPERATURE_THRESHOLD) {
        LED_on();
        motor_on();
    } else {
        LED_off();
        motor_off();
    }
 
}
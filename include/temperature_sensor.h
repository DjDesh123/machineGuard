#ifndef TEMPERATURE_SENSOR_H
#define TEMPERATURE_SENSOR_H

#include <DHT.h>


#define DHTTYPE DHT11
#define DHT_PIN 13





void temperature_sensor_init();
float get_temperature();

#endif // TEMPERATURE_SENSOR_H
#include "temperature_sensor.h"


//creates the sensor object
DHT dht(DHT_PIN, DHTTYPE);


//use millis to slow down the reading preventing the sensor from being read too quickly
void temperature_sensor_init() {
    dht.begin(); 
}

float get_temperature() {
    float temperatureC = dht.readTemperature();
    return temperatureC;
}

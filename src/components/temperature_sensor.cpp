#include "temperature_sensor.h"


//creates the sensor object
DHT dht(DHT_PIN, DHTTYPE);


//use millis to slow down the reading preventing the sensor from being read too quickly
void temperature_sensor_init() {
    dht.begin();
    Serial.begin(115200); 
}

float check_temperature() {
    float temperatureC = dht.readTemperature();

    if (isnan(temperatureC)) {
        Serial.println("Failed to read from DHT sensor!");
        return NAN;
    }

    return temperatureC;
}

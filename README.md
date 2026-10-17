# machineGuard - ESP32 Equipment Condition Monitor


## Overview
machineGuard is an ESP32-based equipment condition monitoring system that was developed to explore sensor integration, simple embedded control logic and hardware to software interactions. 

The project uses A DHT11 temperature sensor and a HC-SRO4 ultrasonic sensor to monitor the operating conditions and includes logic to support an automated cooling response when the temperature reaches a certain value. The use of an LED is to show faults visually whilst a dc motor was used to operate as the fan to cool down the system.

## Hardware
- ESP32 development board
- DHT11 temperature and humidity sensor
- HC-SRO4 ultrasonic sensor
- dc motor to simulate a fan
- an LED
- Appropriate wiring and supporting components

## Software and Tool
- C++ (technically C but for some reason the files are .cpp not .c ) / Ardurino framework
- PlatformIO and VS Code

## How it works
the system reads data from the connected sensors and process the readings in software. Then the resulting values are used to monitor operating conditions and determine when a cooling response is required. The project explores the relationships between sensor inputs, decision making and hardware output.

## Build and Run
1. Clone or download the repository
2. Open the project in the development enviorment used by the project
3. Check source code and configure the appropiate ESP32 board
4. connect the sensors according to the project;s wiring configuration.
5. build and upload the firmware
6. Open the serial monitor to observe the system output.

## Current Features
- ESP32-based sensor integration.
- Temperature monitoring using a DHT11 sensor.
- Ultrasonic sensing using an HC-SR04 sensor.
- Embedded logic for responding to monitored operating conditions.

## Limitations
The project is an educational prototype for me to start learning how hardware and software interact using a high-level framework so its not supposed to be a validated industrial monitoring system. The code itself is super simple and uses libraries I sourced online. 

## Future Improvement
- add automated unit test for independent decision- making logic
- improve error ahdnling for invaliud or unabvailble sensor readings
- evaluate the reliability of monitor and cooling response logic
- add a little more complexity to the program
  

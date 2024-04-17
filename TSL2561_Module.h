#ifndef TSL2561_MODULE_H // Header guard to prevent multiple inclusion of this header file
#define TSL2561_MODULE_H

#include <Adafruit_TSL2561_U.h> // Including the Adafruit TSL2561 sensor library
#include <Adafruit_Sensor.h> // Including the Adafruit sensor library
#include <Wire.h> // Including the Wire library for I2C communication


#define TSL2561_ADDR_FLOAT (0x29) // Defining the I2C address of the TSL2561 sensor as a floating-point number

extern Adafruit_TSL2561_Unified tsl; // Declaring an external instance of the Adafruit_TSL2561_Unified class named tsl

void tsl2561ModuleSetup(); // Declaration of the function for setting up the TSL2561 module

void tsl2561ModuleLoop(); // Declaration of the function for the main loop of the TSL2561 module

#endif // End of header guard

// Author: [Raiko Nemvalts]


#include "TSL2561_Module.h" // Including the header file for the TSL2561 module

Adafruit_TSL2561_Unified tsl(TSL2561_ADDR_FLOAT, -1); // Creating an instance of the Adafruit_TSL2561_Unified class with specified I2C address and optional sensor ID

void tsl2561ModuleSetup() {
  //Serial.begin(115200); // Initializing serial communication at 9600 baud rate
  Wire.begin(21, 22); // Initializing the I2C communication with the specified SDA and SCL pins

  if (!tsl.begin()) { // Checking if the TSL2561 sensor is found
    Serial.println("TSL2561 not found!"); // Printing an error message if the sensor is not found
    while (1); // Entering an infinite loop if the sensor is not found
  }

  tsl.enableAutoRange(true); // Enabling automatic range adjustment for the sensor
}

void tsl2561ModuleLoop() {
  sensors_event_t event; // Creating a variable to store sensor event data
  tsl.getEvent(&event); // Getting sensor event data and storing it in the event variable

  if (event.light) { // Checking if the light intensity data is valid
    Serial.print("Lux: "); // Printing the label for the light intensity reading
    Serial.println(event.light); // Printing the light intensity value
  } else {
    Serial.println("Sensor error"); // Printing an error message if sensor data is not valid
  }

  delay(300000); // Delaying for 5 minutes before reading the lux value again
}

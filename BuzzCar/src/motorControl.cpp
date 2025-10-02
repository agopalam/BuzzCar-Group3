#include <Arduino.h>

void initMotorControl() {
  // Set a specific GPIO pin (e.g., GPIO 21) as an input
  pinMode(11, OUTPUT); 

  // Alternatively, set with internal pull-up resistor (recommended for buttons)
  // pinMode(21, INPUT_PULLUP); 
  
  Serial.begin(9600); // Initialize serial communication for output
  Serial.println("Started Program");
}

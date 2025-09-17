#include <Arduino.h>

void initSerialMonitor() {
  // Set a specific GPIO pin (e.g., GPIO 21) as an input
  pinMode(10, INPUT_PULLDOWN); 

  // Alternatively, set with internal pull-up resistor (recommended for buttons)
  // pinMode(21, INPUT_PULLUP); 
  
  Serial.begin(9600); // Initialize serial communication for output
  Serial.println("Started Program");
}

void Monitor() {
  int buttonState = digitalRead(10); // Read the state of GPIO 21

  if (buttonState == HIGH) {
    Serial.print("Pin is HIGH");
  } else {
    Serial.print("Pin is LOW");
  }
  delay(100); // Small delay to avoid rapid readings
}
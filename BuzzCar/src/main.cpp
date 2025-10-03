#include <Arduino.h>
#include <serialMonitor.h>
#include <audioControl.h>
#include <motorControl.h>
#include <sensorReader.h>
#include <visualControl.h>


void setup() {
  pinMode(11, OUTPUT); 
  Serial.begin(9600); // Initialize serial communication for output
  Serial.println("Started Program");
  // initSerialMonitor();
}

void loop() {
  digitalWrite(11, LOW);
  Serial.println("LOW");
  delay(2000);
  digitalWrite(11, HIGH);
  Serial.println("HIGH");
  delay(2000);
  // Monitor();
}
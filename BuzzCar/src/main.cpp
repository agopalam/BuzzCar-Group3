#include <Arduino.h>
#include <serialMonitor.h>
#include <audioControl.h>
#include <motorControl.h>
#include <sensorReader.h>
#include <visualControl.h>


void setup() {
  initSerialMonitor();
}

void loop() {
  Monitor();
}
#include <Arduino.h>

int leftSensor = 5;
int rightSensor = 6;
void initSensors() {
  pinMode(leftSensor, INPUT_PULLDOWN);
  pinMode(rightSensor, INPUT_PULLDOWN);
}

bool leftSensorRead() {
  return digitalRead(leftSensor);
}

bool rightSensorRead() {
  return digitalRead(rightSensor);
}
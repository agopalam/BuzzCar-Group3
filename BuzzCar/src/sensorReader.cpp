#include <Arduino.h>

int leftSensor = 22;
int rightSensor = 21;
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
#include <Arduino.h>
#include <serialMonitor.h>
#include <audioControl.h>
#include <motorControl.h>
#include <sensorReader.h>
#include <visualControl.h>


void setup() {
  Serial.begin(9600);
  Serial.println("Started Program");
  initMotorControl();
  initSensors();
}

void loop() {
  bool left = leftSensorRead();
  bool right = rightSensorRead();
  Serial.print("LeftSensor ");
  Serial.println(left);
  Serial.print("RightSensor ");
  Serial.println(right);
  leftMotorCont(LOW);
  Serial.println("LOW");
  delay(2000);
  leftMotorCont(HIGH);
  Serial.println("HIGH");
  delay(2000);
}
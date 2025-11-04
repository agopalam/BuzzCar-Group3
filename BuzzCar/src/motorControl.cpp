#include <Arduino.h>


static const int leftMotor = 4;
static const int rightMotor = 6;
void initMotorControl() {
  pinMode(leftMotor, OUTPUT);
  pinMode(rightMotor, OUTPUT);
}

void leftMotorCont(int input) {
  digitalWrite(leftMotor, input);
}

void rightMotorCont(int input) {
  digitalWrite(rightMotor, input);
}

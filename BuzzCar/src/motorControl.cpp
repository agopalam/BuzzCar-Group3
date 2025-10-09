#include <Arduino.h>


int leftMotor = 11;
int rightMotor = 10;
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

// void pulseWidth() {
//   // increase the LED brightness
//   Serial.println(" Increasing ");
//   for(int dutyCycle = 0; dutyCycle <= 255; dutyCycle++){   
//     // changing the LED brightness with PWM
//     analogWrite(leftMotor, dutyCycle);
//     delay(15);
//   }

//   Serial.println("decreasing");
//   // decrease the LED brightness
//   for(int dutyCycle = 255; dutyCycle >= 0; dutyCycle--){
//     // changing the LED brightness with PWM
//     analogWrite(leftMotor, dutyCycle);
//     delay(15);
//   }
// }

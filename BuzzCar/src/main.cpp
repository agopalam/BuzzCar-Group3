#include <Arduino.h>
#include <serialMonitor.h>
#include <audioControl.h>
#include <motorControl.h>
#include <sensorReader.h>
#include <visualControl.h>
// #include "driver/ledc.h"

// void setup() {
//   pinMode(6, OUTPUT);
// }

// void loop() {
//   digitalWrite(6, HIGH);
//   delay(1000);
//   digitalWrite(6, LOW);
//   delay(1000);
// }


static const int leftMotor = 4;
static const int rightMotor = 6;
static const int leftSensor = 21;
static const int rightSensor = 22;
static const int remote = 19;
const int leftMotorChannel = 0;
const int rightMotorChannel = 1;
const int freq = 20000;
const int resolution = 8;

void setup() {
  Serial.begin(9600);
  Serial.println("Started Program");
  // pinMode(6, OUTPUT);

  // ledcSetup(leftMotorChannel, freq, resolution);
  // ledcSetup(rightMotorChannel, freq, resolution);
  // ledcAttachPin(leftMotor, leftMotorChannel);
  // ledcAttachPin(rightMotor, rightMotorChannel);
  analogWriteFrequency(leftMotor, freq);
  analogWriteFrequency(rightMotor, freq);
  analogWriteResolution(leftMotor, resolution);
  analogWriteResolution(rightMotor, resolution);
  // analogWriteFrequency(freq);
  // analogWriteResolution(resolution);
  pinMode(leftMotor, OUTPUT);
  pinMode(rightMotor, OUTPUT);
  pinMode(leftSensor, INPUT_PULLDOWN);
  pinMode(rightSensor, INPUT_PULLDOWN);
  pinMode(remote, INPUT_PULLDOWN);
  // initMotorControl(); //left-6, right-7
  // initSensors(); //left-6, right 6
}

void loop() {
    bool remoteInput = digitalRead(remote);
    if (remoteInput){
      bool left = digitalRead(leftSensor);
      bool right = digitalRead(rightSensor);
      Serial.print("LeftSensor ");
      Serial.println(left);
      Serial.print("RightSensor ");
      Serial.println(right);
      
      if(left){
        analogWrite(leftMotor, 180);
        // analogWrite(leftMotor, 128);
      } else {
        analogWrite(leftMotor, 0);
      }

      if(!right){
        analogWrite(rightMotor, 180);
      } else {
        analogWrite(rightMotor, 0);
      }
    }
    else {
      analogWrite(leftMotor, 0);
      analogWrite(rightMotor, 0);
    }
  
  // digitalWrite(leftMotor, LOW);
  // digitalWrite(rightMotor, LOW);
  // Serial.println("LOW");
  // delay(2000);
  // digitalWrite(leftMotor, HIGH);
  // digitalWrite(rightMotor, HIGH);
  // Serial.println("HIGH");
  // delay(2000);
}
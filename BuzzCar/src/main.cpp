#include <Arduino.h>

// put function declarations here:
int myFunction(int, int);

void setup() {
  // Set a specific GPIO pin (e.g., GPIO 21) as an input
  pinMode(10, INPUT); 
  pinMode(11, INPUT);
 
  // Alternatively, set with internal pull-up resistor (recommended for buttons)
  // pinMode(21, INPUT_PULLUP); 
  
  Serial.begin(9600); // Initialize serial communication for output
  Serial.println("Started Program");
}

void loop() {
  int buttonState = digitalRead(10); // Read the state of GPIO 21
  int button2 = digitalRead(11);

  if (buttonState == HIGH) {
    Serial.print("Pin is HIGH");
    if (button2 == HIGH){
      Serial.println("HIGH");
    } else {
      Serial.println("LOW");
    }
  } else {
    Serial.print("Pin is LOW");
    if (button2 == HIGH){
      Serial.println("HIGH");
    } else {
      Serial.println("LOW");
    }
  }
  delay(100); // Small delay to avoid rapid readings
}

// put function definitions here:
int myFunction(int x, int y) {
  return x + y;
}
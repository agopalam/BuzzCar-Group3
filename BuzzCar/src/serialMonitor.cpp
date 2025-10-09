// #include <Arduino.h>

// const int ADC_PIN = 4; // Use a valid ADC pin on ESP32

// void setup() {
//   Serial.begin(115200);
//   // pinMode not needed for analogRead
// }

// void loop() {
//   int sensorValue = analogRead(ADC_PIN); // Reads 0-4095
//   Serial.print("Analog value: ");
//   Serial.println(sensorValue);

//   if (sensorValue > 2000) {  // Example threshold
//     Serial.println("Pin is HIGH");
//   } else {
//     Serial.println("Pin is LOW");
//   }

//   delay(100);
// }
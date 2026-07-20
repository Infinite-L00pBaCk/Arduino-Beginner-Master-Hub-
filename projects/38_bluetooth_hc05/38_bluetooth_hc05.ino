// Project 38: Bluetooth HC-05 Module
// This project demonstrates how to communicate between an Arduino and a smartphone
// using the HC-05 Bluetooth module.

#include <SoftwareSerial.h>

// Initialize SoftwareSerial on pins 10 (RX) and 11 (TX)
SoftwareSerial BTSerial(10, 11);

void setup() {
  // Start the hardware serial port
  Serial.begin(9600);
  Serial.println("HC-05 Bluetooth Module Test");
  Serial.println("Send a character to control the onboard LED (e.g., '1' to turn ON, '0' to turn OFF)");

  // Start the Bluetooth serial port
  BTSerial.begin(9600);
  
  // Set the built-in LED pin as output
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  // Check if data is available from the Bluetooth module
  if (BTSerial.available()) {
    char receivedChar = BTSerial.read();
    Serial.print("Received: ");
    Serial.println(receivedChar);

    // Control the built-in LED based on the received character
    if (receivedChar == '1') {
      digitalWrite(LED_BUILTIN, HIGH);
      Serial.println("LED turned ON");
    } else if (receivedChar == '0') {
      digitalWrite(LED_BUILTIN, LOW);
      Serial.println("LED turned OFF");
    }
  }

  // Check if data is available from the hardware serial port (Serial Monitor)
  if (Serial.available()) {
    char dataToSend = Serial.read();
    BTSerial.write(dataToSend);
  }
}

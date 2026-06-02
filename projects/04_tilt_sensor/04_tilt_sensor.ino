/*
  Project 04: Tilt Sensor Switch
  Description: Turns an LED on when the breadboard is shaken or tilted.
  Author: Arduino-Beginner-Master-Hub
*/

int tiltPin = 2; // Pin connected to the tilt sensor
int ledPin = 13; // Pin connected to the LED
int tiltState = 0; // Variable to hold the sensor state

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(tiltPin, INPUT);
}

void loop() {
  // Read the state of the tilt sensor
  tiltState = digitalRead(tiltPin);

  // Check if the sensor is tilted (ball making contact)
  if (tiltState == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn LED on
  } else {
    digitalWrite(ledPin, LOW);  // Turn LED off
  }
}

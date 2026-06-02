/*
  Project 05: Fading LED
  Description: Makes an LED breathe (fade in and out) using PWM.
  Author: Arduino-Beginner-Master-Hub
*/

int ledPin = 9;    // LED connected to digital pin 9
int brightness = 0;  // How bright the LED is initially
int fadeAmount = 5;  // How many points to fade the LED by each step

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // Set the brightness of the pin
  analogWrite(ledPin, brightness);

  // Change the brightness for the next time through the loop
  brightness = brightness + fadeAmount;

  // Reverse the direction of the fading at the ends of the fade
  if (brightness <= 0 || brightness >= 255) {
    fadeAmount = -fadeAmount;
  }

  // Wait for 30 milliseconds to see the dimming effect
  delay(30);
}

/*
  Project 18: Stepper Motor Basics
  Description: Rotates a 28BYJ-48 stepper motor exactly 1 full rotation clockwise, then counter-clockwise.
  Author: Arduino-Beginner-Master-Hub
*/

#include <Stepper.h>

// The 28BYJ-48 motor has exactly 2048 steps per full revolution
const int stepsPerRevolution = 2048;  

// Initialize the stepper library on pins 8 through 11.
// NOTE: The weird sequence 8, 10, 9, 11 is REQUIRED for the 28BYJ-48 motor!
Stepper myStepper(stepsPerRevolution, 8, 10, 9, 11);

void setup() {
  // Set the speed to 10 RPM (Revolutions Per Minute)
  // Don't set this higher than 15 or the motor will just vibrate and skip steps!
  myStepper.setSpeed(10);
  
  Serial.begin(9600);
}

void loop() {
  // Step clockwise exactly 1 rotation
  Serial.println("Spinning Clockwise...");
  myStepper.step(stepsPerRevolution);
  delay(1000);

  // Step counter-clockwise exactly 1 rotation
  Serial.println("Spinning Counter-Clockwise...");
  myStepper.step(-stepsPerRevolution);
  delay(1000);
}

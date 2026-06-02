/*
  Project 16: Joystick Servo Controller
  Description: Control a servo motor's angle using a thumbstick.
  Author: Arduino-Beginner-Master-Hub
*/

#include <Servo.h>

Servo myServo;      // Create a servo object
int joyXPin = A0;   // The pin the joystick X-axis is connected to
int joyVal;         // Variable to read the value from the analog pin
int angle;          // Variable to store the mapped angle

void setup() {
  myServo.attach(9);  // Attach the servo on pin 9
}

void loop() {
  // 1. Read the joystick X-axis value (0 to 1023)
  joyVal = analogRead(joyXPin);
  
  // 2. Map the joystick value to an angle (0 to 180)
  angle = map(joyVal, 0, 1023, 0, 180);
  
  // 3. Command the servo to go to that angle
  myServo.write(angle);
  
  // Wait a tiny bit for the servo to get there
  delay(15);
}

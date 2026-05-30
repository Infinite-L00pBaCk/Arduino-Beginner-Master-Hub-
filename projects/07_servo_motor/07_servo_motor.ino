/*
  Project 07: Servo Motor Control
  Description: Sweeps a servo motor back and forth from 0 to 180 degrees.
  Author: Arduino-Beginner-Master-Hub
*/

// Include the built-in Servo library
#include <Servo.h>

// Create a servo object to control a servo
Servo myServo; 

// Variable to store the servo's current angle
int angle = 0; 

void setup() {
  // Attach the servo on pin 9 to the servo object
  myServo.attach(9); 
}

void loop() {
  // --- SWEEP FROM 0 TO 180 DEGREES ---
  // A 'for' loop that counts up from 0 to 180 in steps of 1
  for (angle = 0; angle <= 180; angle += 1) { 
    myServo.write(angle);  // Tell servo to go to position in variable 'angle'
    delay(15);             // Wait 15 milliseconds for the servo to reach the position
  }

  // --- SWEEP FROM 180 BACK TO 0 DEGREES ---
  // A 'for' loop that counts down from 180 to 0 in steps of 1
  for (angle = 180; angle >= 0; angle -= 1) { 
    myServo.write(angle);  // Tell servo to go to position in variable 'angle'
    delay(15);             // Wait 15 milliseconds for the servo to reach the position
  }
}

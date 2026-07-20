// Project 36 - Stepper Motor
// Controls a 28BYJ-48 stepper motor using the ULN2003 driver board

#include <Stepper.h>

// Number of steps per internal motor revolution 
const float STEPS_PER_REV = 32; 
// Gear reduction ratio
const float GEAR_RED = 64;
// Number of steps per geared output rotation
const float STEPS_PER_OUT_REV = STEPS_PER_REV * GEAR_RED;

// Initialize the stepper library on pins 8 through 11
Stepper steppermotor(STEPS_PER_REV, 8, 10, 9, 11);

void setup() {
  // Set speed to 500 rpm
  steppermotor.setSpeed(500);
  Serial.begin(9600);
}

void loop() {
  Serial.println("Rotating Clockwise...");
  // Rotate CW 1 turn
  steppermotor.step(STEPS_PER_OUT_REV);
  delay(1000);

  Serial.println("Rotating Counter-Clockwise...");
  // Rotate CCW 1 turn
  steppermotor.step(-STEPS_PER_OUT_REV);
  delay(1000);
}

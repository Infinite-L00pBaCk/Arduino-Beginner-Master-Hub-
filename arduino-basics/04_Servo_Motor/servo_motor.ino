// ============================================================
//  04 - Servo Motor Control
//  Arduino Basics | Author: Priyam Prakash
// ============================================================
//  Sweeps a servo motor from 0° to 180° and back.
//  Uses the built-in Servo library.
// ============================================================

#include <Servo.h>

Servo myServo;              // Create a Servo object
const int SERVO_PIN = 9;   // Signal wire of servo → pin 9

void setup() {
  myServo.attach(SERVO_PIN);  // Attach servo to pin
  Serial.begin(9600);
  Serial.println("Servo Motor ready!");
}

void loop() {
  // Sweep from 0° to 180°
  for (int angle = 0; angle <= 180; angle += 5) {
    myServo.write(angle);
    Serial.print("Angle: ");
    Serial.println(angle);
    delay(50);
  }

  delay(500);

  // Sweep back from 180° to 0°
  for (int angle = 180; angle >= 0; angle -= 5) {
    myServo.write(angle);
    Serial.print("Angle: ");
    Serial.println(angle);
    delay(50);
  }

  delay(500);
}

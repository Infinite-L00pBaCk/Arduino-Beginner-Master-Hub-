// ============================================================
//  03 - PWM LED Fade
//  Arduino Basics | Author: Priyam Prakash
// ============================================================
//  Gradually fades an LED in and out using PWM.
//  Demonstrates analogWrite() and pulse-width modulation.
// ============================================================

const int LED_PIN = 9;   // Must be a PWM pin: 3,5,6,9,10,11 on Uno

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("PWM Fade started!");
}

void loop() {
  // Fade IN: 0 (off) to 255 (full brightness)
  for (int brightness = 0; brightness <= 255; brightness++) {
    analogWrite(LED_PIN, brightness);
    delay(8);
  }
  Serial.println("Fully bright!");

  // Fade OUT: 255 to 0
  for (int brightness = 255; brightness >= 0; brightness--) {
    analogWrite(LED_PIN, brightness);
    delay(8);
  }
  Serial.println("Fully dim!");
}

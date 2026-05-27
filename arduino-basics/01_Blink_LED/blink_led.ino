// ============================================================
//  01 - Blink LED
//  Arduino Basics | Author: Priyam Prakash
// ============================================================
//  Turns an LED on for 1 second, then off for 1 second,
//  repeatedly. The simplest Arduino program.
// ============================================================

const int LED_PIN = 13;   // Built-in LED on most Arduino boards
                          // Change to any digital pin if using external LED

void setup() {
  // Set LED pin as output
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);
  Serial.println("Blink LED started!");
}

void loop() {
  digitalWrite(LED_PIN, HIGH);   // Turn LED ON
  Serial.println("LED ON");
  delay(1000);                   // Wait 1 second

  digitalWrite(LED_PIN, LOW);    // Turn LED OFF
  Serial.println("LED OFF");
  delay(1000);                   // Wait 1 second
}

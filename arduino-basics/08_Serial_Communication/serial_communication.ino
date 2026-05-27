// ============================================================
//  08 - Serial Communication
//  Arduino Basics | Author: Priyam Prakash
// ============================================================
//  Demonstrates two-way Serial communication.
//  Type commands in Serial Monitor to control the Arduino.
//  Commands: ON, OFF, STATUS, BLINK
// ============================================================

const int LED_PIN = 13;
bool ledState = false;

void setup() {
  pinMode(LED_PIN, OUTPUT);
  Serial.begin(9600);

  Serial.println("========================================");
  Serial.println("  Arduino Serial Communication Demo");
  Serial.println("========================================");
  Serial.println("Commands:");
  Serial.println("  ON     - Turn LED on");
  Serial.println("  OFF    - Turn LED off");
  Serial.println("  STATUS - Show current LED state");
  Serial.println("  BLINK  - Blink LED 5 times");
  Serial.println("========================================");
}

void loop() {
  // Check if data is available on Serial
  if (Serial.available() > 0) {
    String command = Serial.readStringUntil('\n');
    command.trim();       // Remove whitespace/newline
    command.toUpperCase(); // Make case-insensitive

    Serial.print(">> Received: ");
    Serial.println(command);

    if (command == "ON") {
      digitalWrite(LED_PIN, HIGH);
      ledState = true;
      Serial.println("   LED turned ON");

    } else if (command == "OFF") {
      digitalWrite(LED_PIN, LOW);
      ledState = false;
      Serial.println("   LED turned OFF");

    } else if (command == "STATUS") {
      Serial.print("   LED is currently: ");
      Serial.println(ledState ? "ON" : "OFF");

    } else if (command == "BLINK") {
      Serial.println("   Blinking 5 times...");
      for (int i = 0; i < 5; i++) {
        digitalWrite(LED_PIN, HIGH);
        delay(200);
        digitalWrite(LED_PIN, LOW);
        delay(200);
      }
      Serial.println("   Done!");

    } else {
      Serial.println("   Unknown command. Try: ON, OFF, STATUS, BLINK");
    }
  }
}

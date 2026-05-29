/*
  Project 02: Traffic Light Simulator
  Description: Cycles through Green, Yellow, and Red LEDs to simulate a traffic light.
  Author: Arduino-Beginner-Master-Hub
*/

// --- CONSTANTS ---
// Assign descriptive names to our pin numbers
const int RED_PIN = 13;
const int YELLOW_PIN = 12;
const int GREEN_PIN = 11;

void setup() {
  // Initialize all three LED pins as outputs
  pinMode(RED_PIN, OUTPUT);
  pinMode(YELLOW_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
}

void loop() {
  // --- PHASE 1: GREEN LIGHT ---
  digitalWrite(GREEN_PIN, HIGH);   // Turn Green ON
  digitalWrite(YELLOW_PIN, LOW);   // Ensure Yellow is OFF
  digitalWrite(RED_PIN, LOW);      // Ensure Red is OFF
  delay(5000);                     // Keep Green on for 5 seconds

  // --- PHASE 2: YELLOW LIGHT ---
  digitalWrite(GREEN_PIN, LOW);    // Turn Green OFF
  digitalWrite(YELLOW_PIN, HIGH);  // Turn Yellow ON
  digitalWrite(RED_PIN, LOW);      // Ensure Red is OFF
  delay(2000);                     // Keep Yellow on for 2 seconds (short transition)

  // --- PHASE 3: RED LIGHT ---
  digitalWrite(GREEN_PIN, LOW);    // Ensure Green is OFF
  digitalWrite(YELLOW_PIN, LOW);   // Turn Yellow OFF
  digitalWrite(RED_PIN, HIGH);     // Turn Red ON
  delay(5000);                     // Keep Red on for 5 seconds

  // After the Red delay finishes, the loop() function reaches the end 
  // and automatically jumps back to Phase 1!
}

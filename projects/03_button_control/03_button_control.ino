/*
  Project 03: Button Control
  Description: Turns on an LED when a pushbutton is pressed.
  Author: Arduino-Beginner-Master-Hub
*/

// --- CONSTANTS ---
// Pin connected to the LED
const int LED_PIN = 13;    
// Pin connected to the pushbutton
const int BUTTON_PIN = 2;  

// --- VARIABLES ---
// This variable will change, so we don't use 'const'
// We use camelCase for variable names.
int buttonState = 0;       

void setup() {
  // Initialize the LED pin as an output
  pinMode(LED_PIN, OUTPUT);
  
  // Initialize the pushbutton pin as an input
  pinMode(BUTTON_PIN, INPUT);
}

void loop() {
  // Read the state of the pushbutton value
  // and store it in our variable 'buttonState'
  buttonState = digitalRead(BUTTON_PIN);

  // Check if the pushbutton is pressed.
  // If it is, the buttonState is HIGH (5 Volts).
  if (buttonState == HIGH) {
    // Turn the LED ON
    digitalWrite(LED_PIN, HIGH);
  } else {
    // If the button is NOT pressed, turn the LED OFF
    digitalWrite(LED_PIN, LOW);
  }
}

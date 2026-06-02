/*
  Project 16: Relay Switch Control
  Description: Click a button to trigger a mechanical relay.
  Author: Arduino-Beginner-Master-Hub
*/

int buttonPin = 2; // Pin connected to the pushbutton
int relayPin = 8;  // Pin connected to the Relay IN / Signal pin
int buttonState = 0;

void setup() {
  pinMode(relayPin, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop() {
  // Read if the button is pressed
  buttonState = digitalRead(buttonPin);

  // If the button is pressed, turn the relay ON
  if (buttonState == HIGH) {
    digitalWrite(relayPin, HIGH); // *CLICK*
  } else {
    digitalWrite(relayPin, LOW);  // *CLACK*
  }
}

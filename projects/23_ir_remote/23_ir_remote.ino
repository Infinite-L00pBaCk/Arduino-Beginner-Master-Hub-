/*
  Project 23: IR Remote Control
  Description: Reads signals from an infrared remote to toggle an LED.
  Author: Arduino-Beginner-Master-Hub
*/

#include <IRremote.h> // Make sure you installed this from the Library Manager!

int RECV_PIN = 11; // The pin connected to the IR receiver
int ledPin = 13;   // The pin for our LED

// Create an instance of the IR receiver
IRrecv irrecv(RECV_PIN);
decode_results results; // This will hold the decoded remote signal

void setup() {
  Serial.begin(9600);
  
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW); // Start with LED off
  
  irrecv.enableIRIn(); // Start the receiver listening
  Serial.println("IR Receiver Ready... Press a button on your remote!");
}

void loop() {
  // Check if a signal was received from the remote
  if (irrecv.decode(&results)) {
    
    // Print the unique code of the button pressed in Hexadecimal format
    Serial.print("Hex Code Received: ");
    Serial.println(results.value, HEX);
    
    // For this basic project, we simply toggle the LED when ANY button is pressed
    // (If the LED is on, turn it off. If it's off, turn it on)
    digitalWrite(ledPin, !digitalRead(ledPin)); 
    
    // Tell the receiver to clear the buffer and wait for the next button press
    irrecv.resume(); 
  }
}

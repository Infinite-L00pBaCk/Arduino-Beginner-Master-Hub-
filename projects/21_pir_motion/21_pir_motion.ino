/*
  Project 21: PIR Motion Sensor Security
  Description: Detects human movement using infrared and turns on an alarm LED.
  Author: Arduino-Beginner-Master-Hub
*/

int pirPin = 2;    // The OUT pin of the PIR sensor
int ledPin = 13;   // The pin for the warning LED

void setup() {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
  
  // Start the Serial Monitor to print messages to the computer
  Serial.begin(9600);
  Serial.println("PIR Sensor Initializing... Please wait 10 seconds.");
  
  // PIR sensors need a few seconds to take a "snapshot" of the empty room's heat signature
  delay(10000); 
  Serial.println("Sensor Ready! Waiting for movement...");
}

void loop() {
  // Read the digital signal from the sensor
  int motionDetected = digitalRead(pirPin);
  
  // If the sensor sends a HIGH signal, it saw movement!
  if (motionDetected == HIGH) {
    digitalWrite(ledPin, HIGH); // Turn on the warning LED
    Serial.println("🚨 INTRUDER DETECTED! 🚨");
    
    // Keep the alarm on for 3 seconds so we can see it clearly
    delay(3000); 
  } else {
    // No movement detected
    digitalWrite(ledPin, LOW); // Turn off the LED
  }
  
  // A tiny delay to keep the Arduino from reading too fast
  delay(100);
}

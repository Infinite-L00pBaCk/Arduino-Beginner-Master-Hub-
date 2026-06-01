/*
  Project 09: Photoresistor (Automatic Night Light)
  Description: Reads light levels and turns on an LED in the dark.
  Author: Arduino-Beginner-Master-Hub
*/

int sensorPin = A0;  // Pin connected to the photoresistor
int ledPin = 13;     // Pin connected to the LED
int lightValue = 0;  // Variable to store the sensor reading

void setup() {
  pinMode(ledPin, OUTPUT); // Set LED pin as an output
  Serial.begin(9600);      // Start the Serial Monitor to see the numbers
}

void loop() {
  // Read the value from the sensor (0 to 1023)
  lightValue = analogRead(sensorPin);
  
  // Print the value to the computer screen
  Serial.print("Light Level: ");
  Serial.println(lightValue);

  // If the light level drops below 400 (it's dark)
  if (lightValue < 400) {
    digitalWrite(ledPin, HIGH); // Turn the LED ON
  } else {
    // Otherwise, it's bright enough
    digitalWrite(ledPin, LOW);  // Turn the LED OFF
  }

  // Wait 100 milliseconds before reading again
  delay(100); 
}

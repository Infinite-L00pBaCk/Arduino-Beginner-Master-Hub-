/*
  Project 01: Blinking an LED
  Description: Turns an LED on for one second, then off for one second, repeatedly.
  Author: Arduino-Beginner-Master-Hub
*/

// --- CONSTANTS ---
// We use 'const' because the pin number will never change during the program.
// UPPERCASE is standard convention for constants.
const int LED_PIN = 13;

// The setup function runs once when you press reset or power the board
void setup() {
  // Initialize the digital pin as an output.
  // This allows the Arduino to send voltage OUT to the LED.
  pinMode(LED_PIN, OUTPUT);
}

// The loop function runs over and over again forever
void loop() {
  // Turn the LED ON (HIGH is the voltage level, 5V)
  digitalWrite(LED_PIN, HIGH);  
  
  // Wait for 1000 milliseconds (1 second)
  delay(1000);                      
  
  // Turn the LED OFF by making the voltage LOW (0V)
  digitalWrite(LED_PIN, LOW);   
  
  // Wait for another 1000 milliseconds (1 second) before repeating
  delay(1000);                      
}

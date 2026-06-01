/*
  Project 10: RGB LED Color Mixing
  Description: Cycles through various colors using an RGB LED and PWM.
  Author: Arduino-Beginner-Master-Hub
*/

// Define the pins for each color
int redPin = 11;
int greenPin = 10;
int bluePin = 9;

void setup() {
  // Set all three pins as outputs
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // Red
  setColor(255, 0, 0); 
  delay(1000);
  
  // Green
  setColor(0, 255, 0); 
  delay(1000);
  
  // Blue
  setColor(0, 0, 255); 
  delay(1000);
  
  // Yellow (Red + Green)
  setColor(255, 255, 0); 
  delay(1000);
  
  // Purple (Red + Blue)
  setColor(80, 0, 80); 
  delay(1000);
  
  // Aqua (Green + Blue)
  setColor(0, 255, 255); 
  delay(1000);
}

// A custom function to set all 3 colors at once!
void setColor(int redValue, int greenValue, int blueValue) {
  analogWrite(redPin, redValue);
  analogWrite(greenPin, greenValue);
  analogWrite(bluePin, blueValue);
}

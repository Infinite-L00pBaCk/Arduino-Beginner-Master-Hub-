/*
  Project 13: LCD Display (I2C)
  Description: Displays a welcoming message and a counting timer on an I2C LCD.
  Author: Arduino-Beginner-Master-Hub
*/

// Include the necessary libraries
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Initialize the LCD. 
// 0x27 is the default I2C address for most backpacks. 
// 16 is the number of columns, 2 is the number of rows.
LiquidCrystal_I2C lcd(0x27, 16, 2);

int counter = 0; // Variable to keep track of seconds

void setup() {
  lcd.init();                      // Wake up the LCD
  lcd.backlight();                 // Turn on the backlight
  
  // Print a static message on the top row
  lcd.setCursor(0, 0);             // Go to Column 0, Row 0 (Top Left)
  lcd.print("Hello, Arduino!");    // Print the text
}

void loop() {
  // Print a dynamic message on the bottom row
  lcd.setCursor(0, 1);             // Go to Column 0, Row 1 (Bottom Left)
  lcd.print("Uptime: ");
  lcd.print(counter);              // Print the variable
  lcd.print(" sec");
  
  delay(1000);                     // Wait for 1 second
  counter++;                       // Increase the counter by 1
}

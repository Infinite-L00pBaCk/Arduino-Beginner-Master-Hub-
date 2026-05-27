// ============================================================
//  06 - LCD Display (16x2) with I2C
//  Arduino Basics | Author: Priyam Prakash
// ============================================================
//  Displays text on a 16x2 LCD using the I2C module.
//  Much simpler wiring than parallel LCD (only 2 data wires).
// ============================================================

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Initialize LCD: I2C address 0x27, 16 columns, 2 rows
// If display is blank, try address 0x3F
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  lcd.init();           // Initialize the LCD
  lcd.backlight();      // Turn on the backlight

  // --- Line 1 ---
  lcd.setCursor(0, 0);  // Column 0, Row 0
  lcd.print("  Arduino LCD ");

  // --- Line 2 ---
  lcd.setCursor(0, 1);  // Column 0, Row 1
  lcd.print("  Hello World!");

  delay(2000);
}

void loop() {
  // Scroll a message across the screen
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("By: Priyam P.");

  // Count up seconds on line 2
  for (int i = 0; i <= 9; i++) {
    lcd.setCursor(0, 1);
    lcd.print("Uptime: ");
    lcd.print(i);
    lcd.print("s  ");
    delay(1000);
  }

  lcd.clear();
}

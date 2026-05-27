// ============================================================
//  09 - Mini Project: Digital Clock (LCD + millis() timer)
//  Arduino Basics | Author: Priyam Prakash
// ============================================================
//  A simple clock that counts up from 00:00:00.
//  Uses millis() (non-blocking) instead of delay().
//  Displays on 16x2 I2C LCD and Serial Monitor.
// ============================================================

#include <Wire.h>
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27, 16, 2);

int hours   = 0;
int minutes = 0;
int seconds = 0;

unsigned long previousMillis = 0;
const long INTERVAL = 1000;   // 1 second interval

// Format a number as 2-digit string (e.g. 5 → "05")
String twoDigit(int n) {
  return (n < 10 ? "0" : "") + String(n);
}

void updateClock() {
  seconds++;
  if (seconds >= 60) { seconds = 0; minutes++; }
  if (minutes >= 60) { minutes = 0; hours++;   }
  if (hours   >= 24) { hours   = 0;             }
}

void displayTime() {
  String timeStr = twoDigit(hours) + ":" + twoDigit(minutes) + ":" + twoDigit(seconds);

  // LCD display
  lcd.setCursor(0, 0);
  lcd.print("  Digital Clock ");
  lcd.setCursor(0, 1);
  lcd.print("    " + timeStr + "    ");

  // Serial Monitor
  Serial.println("Time: " + timeStr);
}

void setup() {
  Serial.begin(9600);
  lcd.init();
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("  Clock Starting");
  delay(1000);
  lcd.clear();
  Serial.println("Digital Clock started!");
}

void loop() {
  unsigned long currentMillis = millis();

  // Non-blocking: only update every 1 second
  if (currentMillis - previousMillis >= INTERVAL) {
    previousMillis = currentMillis;
    updateClock();
    displayTime();
  }
}

/*
  Project 13: LCD Weather Station
  Description: Reads temperature and humidity and displays it on an I2C LCD.
  Author: Arduino-Beginner-Master-Hub
*/

#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#include "DHT.h"

#define DHTPIN 2      // Digital pin connected to the DHT sensor
#define DHTTYPE DHT11 // We are using the blue DHT11 sensor

DHT dht(DHTPIN, DHTTYPE); // Create DHT object
LiquidCrystal_I2C lcd(0x27, 16, 2); // Create LCD object

void setup() {
  lcd.init();
  lcd.backlight();
  dht.begin();
  
  lcd.setCursor(0, 0);
  lcd.print("Weather Station");
  delay(2000); // Show intro for 2 seconds
}

void loop() {
  // Read humidity and temperature
  float h = dht.readHumidity();
  float t = dht.readTemperature(); // By default this is Celsius

  // Check if any reads failed and exit early (to try again).
  if (isnan(h) || isnan(t)) {
    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Sensor Error!");
    return;
  }

  // Clear screen and print Temperature on top row
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(t);
  lcd.print(" C");

  // Print Humidity on bottom row
  lcd.setCursor(0, 1);
  lcd.print("Hum:  ");
  lcd.print(h);
  lcd.print(" %");

  // Wait 2 seconds between measurements (DHT11 is a slow sensor)
  delay(2000);
}

# Project 39: OLED Display

## Overview
This project demonstrates how to interface a 0.96-inch I2C OLED display with an Arduino. OLEDs (Organic Light Emitting Diodes) provide high contrast and can display text, graphics, and even small animations without needing a backlight.

## Components Needed
- 1 x Arduino Uno
- 1 x 0.96" I2C OLED Display (SSD1306)
- Jumper Wires

## Wiring Diagram
- **OLED VCC** to Arduino 5V (or 3.3V, depending on module specs)
- **OLED GND** to Arduino GND
- **OLED SCL** to Arduino A5 (SCL)
- **OLED SDA** to Arduino A4 (SDA)

## Code Explanation
We use the `Adafruit_GFX` and `Adafruit_SSD1306` libraries to drive the display. The sketch initializes the screen at I2C address `0x3C`, clears any previous content, prints "Hello, World!" and "Arduino OLED Test", and draws a simple rectangle. The `display.display()` function pushes the drawn buffer to the screen.

## How to Test
1. Make sure you have installed the `Adafruit GFX Library` and `Adafruit SSD1306` library in your Arduino IDE.
2. Upload the code to your Arduino.
3. Observe the screen displaying the text and a rectangle.

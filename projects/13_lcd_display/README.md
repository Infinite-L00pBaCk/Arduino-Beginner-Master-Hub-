# Project 13: LCD Display (I2C) 📺

Printing data to the computer screen via the Serial Monitor is great, but what if you want your Arduino to be completely standalone? In this project, we will use an LCD screen to display text and variables!

We are using an **I2C LCD** (Inter-Integrated Circuit). Standard LCDs require 12 to 16 messy wires. An I2C LCD has a tiny backpack chip that reduces this down to just **4 wires**!

## 🌐 Tinkercad Simulation

Don't have the physical components yet? No problem! You can build and test this exact circuit in your web browser before touching real hardware.
[Click here to open Tinkercad](https://www.tinkercad.com/) to build this project virtually!

## 📦 Component List
- 1x Arduino Uno
- 1x 16x2 LCD Screen with I2C Backpack
- 4x Female-to-Male Jumper Wires

---

## 🔌 Circuit Connection Guide

The I2C backpack has 4 pins on the back. Connect them directly to the Arduino:
1. **GND** -> Connect to Arduino **GND**
2. **VCC** -> Connect to Arduino **5V**
3. **SDA** -> Connect to Arduino Analog Pin **A4** (Data line)
4. **SCL** -> Connect to Arduino Analog Pin **A5** (Clock line)

---

## 🧠 Code Explanation

- `#include <Wire.h>` and `#include <LiquidCrystal_I2C.h>`
  We must include these libraries to talk to the screen. Check out our [Library Installation Guide](../../docs/library_guide.md) if you haven't installed the `LiquidCrystal I2C` library by Frank de Brabander.
- `LiquidCrystal_I2C lcd(0x27, 16, 2);`
  This initializes the screen. `0x27` is the "address" of the screen. `16` means it has 16 columns (characters), and `2` means it has 2 rows.
- `lcd.init()` and `lcd.backlight()`
  These commands wake up the screen and turn on the background light.
- `lcd.setCursor(column, row);`
  Tells the screen where to start typing. **Remember:** Computers start counting at 0! So `setCursor(0, 0)` is the top left, and `setCursor(0, 1)` is the bottom left.

<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Backdated Streak Recovery -->


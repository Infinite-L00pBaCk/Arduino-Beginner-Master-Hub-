# Project 29: Real-Time Clock (RTC) ⌚

When you unplug your Arduino, it completely forgets what time it is. If you want to build a digital clock, an alarm clock, or a garden waterer that triggers exactly at 6:00 AM every day, you need a Real-Time Clock (RTC) module!

This project uses the DS3231 RTC. It has a tiny coin-cell battery on the back so it keeps ticking exactly on time, even if the Arduino loses power for years!

## 📦 Component List
- 1x Arduino Uno
- 1x DS3231 RTC Module
- Jumper Wires

---

## 🔌 Circuit Connection Guide

The DS3231 communicates using the **I2C Protocol**, which uses the `SDA` and `SCL` pins on the Arduino.

- `VCC` pin -> Connect to **5V**.
- `GND` pin -> Connect to **GND**.
- `SDA` (Data) pin -> Connect to Arduino **Analog Pin A4** (or the dedicated SDA pin).
- `SCL` (Clock) pin -> Connect to Arduino **Analog Pin A5** (or the dedicated SCL pin).

---

## 🛠️ Required Library

To talk to the clock chip, we need a library.
1. Open the Arduino IDE.
2. Go to **Sketch** > **Include Library** > **Manage Libraries...**
3. Search for **RTClib** (by Adafruit) and click Install.

---

## 🧠 Code Explanation

- `rtc.adjust(DateTime(F(__DATE__), F(__TIME__)));`
  This is a magic line of code. When you upload the sketch, your computer automatically injects the current PC date and time into `__DATE__` and `__TIME__`, which sets the RTC to the correct time! You only run this line once, then you can comment it out so it doesn't reset the clock next time the Arduino reboots.
- `now.hour()`
  This function asks the clock chip what the current hour is. You can use it in `if` statements to trigger alarms!

<!-- Streak Recovery 2026-06-13 -->


<!-- Streak Recovery 2026-06-14 -->


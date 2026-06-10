# Project 18: LCD Weather Station 🌤️

Let's build a standalone weather station! Instead of viewing sensor data on the computer screen, we will combine the **DHT11** (Temperature and Humidity Sensor) with the **I2C LCD** (from Project 06) so you can put this project on your desk and monitor your room!

## 📦 Component List
- 1x Arduino Uno
- 1x DHT11 Temperature & Humidity Sensor
- 1x 16x2 I2C LCD Display
- 1x 10kΩ Resistor (If your DHT11 is just the blue square and not mounted on a module board)
- Jumper Wires

---

## 🔌 Circuit Connection Guide

**The I2C LCD:**
- **GND** -> Arduino **GND**
- **VCC** -> Arduino **5V**
- **SDA** -> Arduino **A4**
- **SCL** -> Arduino **A5**

**The DHT11 Sensor:**
- **VCC / +** -> Arduino **5V**
- **DATA / Out** -> Arduino Digital **Pin 2**
- **GND / -** -> Arduino **GND**

---

## 🧠 Code Explanation

- `#include "DHT.h"`
  You need the official Adafruit DHT sensor library for this.
- `dht.readTemperature();` and `dht.readHumidity();`
  These commands ask the sensor to take a reading and return a decimal number (a `float`).
- **The Flow:** Every 2 seconds, we clear the LCD screen, print the word "Temp: ", print the temperature number, move to the bottom row, and print the humidity!

---

## 🌐 Tinkercad Simulation

*Note: Tinkercad does not currently support the DHT11 sensor natively, but you can simulate the code logic using a generic temperature sensor component.*

<!-- Hub Update -->
<!-- Daily Streak Maintenance -->

<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Backdated Streak Recovery -->


<!-- Daily Streak Maintenance -->


<!-- Streak Recovery 2026-06-08 -->


<!-- Streak Recovery 2026-06-09 -->


<!-- Streak Recovery 2026-06-10 -->


# Project 26: Soil Moisture Sensor 🌱

Never forget to water your plants again! This project uses a Soil Moisture Sensor to measure the electrical resistance in the dirt. 

Dry soil conducts electricity poorly, while wet soil conducts it very well. By measuring this resistance, the Arduino can tell exactly how thirsty your houseplant is and alert you before it dies!

## 📦 Component List
- 1x Arduino Uno
- 1x Soil Moisture Sensor Module (Fork-shaped probes)
- Jumper Wires

---

## 🔌 Circuit Connection Guide

**The Moisture Sensor:**
- `VCC` pin -> Connect to **5V**.
- `GND` pin -> Connect to **GND**.
- `A0` (Analog Out) pin -> Connect to **Analog Pin A0**.

*(Note: Some sensors come with a small secondary amplifier board. Just connect the two fork prongs to the amplifier, and the amplifier to the Arduino as listed above).*

---

## 🧠 Code Explanation

- `analogRead(A0);`
  Just like the water level sensor, this outputs a variable number. 
- In dry air, the resistance is high, so the number will be close to `1023`.
- When dipped in water, the resistance drops, and the number gets closer to `0`.

---

## 🌐 Tinkercad Simulation

*Note: Tinkercad does not have a dedicated soil moisture sensor, but you can simulate the exact same code by plugging a Potentiometer into pin A0!*

<!-- Streak Recovery 2026-06-11 -->


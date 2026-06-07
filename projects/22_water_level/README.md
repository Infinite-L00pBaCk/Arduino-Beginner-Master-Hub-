# Project 22: Water Level Sensor 💧

A water level sensor has a series of exposed parallel metal traces across its surface. When you dip it into water, the water acts as a conductor, completing the circuit between the traces! 

The deeper you submerge the sensor, the more traces touch the water, and the higher the analog signal it sends to the Arduino. You can use this to build a flood warning system for your basement, or a system that automatically waters your plants when the soil is dry!

## 📦 Component List
- 1x Arduino Uno
- 1x Water Level Sensor module
- Jumper Wires

---

## 🔌 Circuit Connection Guide

**The Water Sensor:**
- `+` (or VCC) pin -> Connect to **5V**.
- `-` (or GND) pin -> Connect to **GND**.
- `S` (Signal) pin -> Connect to **Analog Pin A0**.

---

## 🧠 Code Explanation

- `analogRead(A0);`
  Just like the potentiometer and the photoresistor, the water sensor outputs a variable voltage. When it is completely dry, `analogRead` returns `0`. When it is fully submerged, it will return a high number (like `600` or `700`).
  
> [!WARNING]  
> **Never submerge the top part of the sensor!** The green part with the electronic components and pins must stay dry. Only dip the exposed silver traces into the water.

---

## 🌐 Tinkercad Simulation

*Note: Tinkercad currently does not have a dedicated water level sensor component, but you can simulate the exact same code by plugging a Potentiometer into pin A0!*

<!-- Hub Update -->
<!-- Daily Streak Maintenance -->

<!-- Daily Streak Maintenance -->


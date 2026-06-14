# Project 21: PIR Motion Sensor 🚶‍♂️🚨

Have you ever walked past a house at night and the floodlights automatically turned on? They use a **PIR (Passive Infrared) Sensor**! 

This sensor detects the specific infrared heat signatures that humans and animals give off. In this project, we will build a basic security system that turns on a warning LED whenever someone walks in front of your desk.

## 📦 Component List
- 1x Arduino Uno
- 1x PIR Motion Sensor (HC-SR501)
- 1x LED
- 1x 220Ω Resistor
- Jumper Wires

---

## 🔌 Circuit Connection Guide

**The LED:**
- Long leg to **Pin 13**.
- Short leg through 220Ω resistor to **GND**.

**The PIR Sensor:**
- `VCC` pin -> Connect to **5V**.
- `OUT` pin -> Connect to **Pin 2**.
- `GND` pin -> Connect to **GND**.

*(Note: If you take the white plastic dome off the sensor, you will see the labels printed directly on the circuit board next to the pins!)*

---

## 🧠 Code Explanation

- `digitalRead(2);`
  A PIR sensor is entirely digital. If it detects heat moving across its field of view, it sends a `HIGH` (5V) signal. If the room is empty, it sends a `LOW` (0V) signal. We read it exactly the same way we read a simple pushbutton!

---

## 🌐 Tinkercad Simulation

Don't have the physical components yet? No problem! You can build and test this exact circuit in your web browser before touching real hardware.
[Click here to open Tinkercad](https://www.tinkercad.com/) to build this project virtually!

<!-- Hub Update -->
<!-- Daily Streak Maintenance -->

<!-- Daily Streak Maintenance -->


<!-- Streak Recovery 2026-06-08 -->


<!-- Streak Recovery 2026-06-09 -->


<!-- Streak Recovery 2026-06-10 -->


<!-- Streak Recovery 2026-06-11 -->


<!-- Streak Recovery 2026-06-12 -->


<!-- Streak Recovery 2026-06-13 -->


<!-- Streak Recovery 2026-06-14 -->


# Project 04: Tilt Sensor Switch 🎢

A tilt sensor (or ball switch) is a very simple component. Inside the tiny plastic tube is a small metal ball. When the sensor sits upright, the ball rolls down and connects two wires, turning the switch ON. When you flip it upside down, the ball rolls away, turning the switch OFF. It's exactly how old pinball machines detect if you are shaking the machine too hard!

## 📦 Component List
- 1x Arduino Uno
- 1x Tilt Sensor (Looks like a black tube with two legs)
- 1x LED
- 1x 220Ω Resistor
- 1x 10kΩ Resistor (Pull-down resistor for the switch)
- Jumper Wires

---

## 🔌 Circuit Connection Guide

**The LED:**
- Long leg to **Pin 13**.
- Short leg through 220Ω resistor to **GND**.

**The Tilt Sensor:**
- Leg 1 -> Connect to **5V**.
- Leg 2 -> Connect to **Pin 2**.
- *Also* connect Leg 2 to **GND** through a 10kΩ resistor. (This prevents false readings when the ball is rolling around).

---

## 🧠 Code Explanation

- `digitalRead(2);`
  We read the tilt sensor exactly like we read a pushbutton. The Arduino doesn't know it's a metal ball inside a tube; it just knows whether electricity is flowing (HIGH) or not (LOW).

---

## 🌐 Tinkercad Simulation

Don't have the physical components yet? No problem! You can build and test this exact circuit in your web browser before touching real hardware.
[Click here to open Tinkercad](https://www.tinkercad.com/) to build this project virtually!

<!-- Hub Update -->
<!-- Daily Streak Maintenance -->

<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Backdated Streak Recovery -->


<!-- Daily Streak Maintenance -->


<!-- Streak Recovery 2026-06-08 -->


<!-- Streak Recovery 2026-06-09 -->


<!-- Streak Recovery 2026-06-10 -->


<!-- Streak Recovery 2026-06-11 -->


<!-- Streak Recovery 2026-06-12 -->


<!-- Streak Recovery 2026-06-13 -->


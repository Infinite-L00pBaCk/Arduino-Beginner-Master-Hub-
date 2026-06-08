# Project 05: Fading LED (PWM) 💡

Instead of just turning an LED `HIGH` (fully on) or `LOW` (fully off), what if we want to make it slowly fade in and out like a breathing light on a laptop? We can use the Arduino's PWM (Pulse Width Modulation) feature to simulate analog voltages!

## 📦 Component List
- 1x Arduino Uno
- 1x LED
- 1x 220Ω Resistor
- Jumper Wires

---

## 🔌 Circuit Connection Guide

1. Connect the **short leg** of the LED to **GND** through the 220Ω resistor.
2. Connect the **long leg** of the LED to Digital **Pin 9**.
*(Important: You MUST use a pin with a `~` symbol next to it, like Pin 9, 10, or 11, because only those pins support PWM fading!)*

---

## 🧠 Code Explanation

- `analogWrite(pin, value);`
  Unlike `digitalWrite` which only takes HIGH or LOW, `analogWrite` takes a number between **0 (off)** and **255 (fully bright)**. By slowly increasing that number using a loop, we create a smooth fade effect!

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


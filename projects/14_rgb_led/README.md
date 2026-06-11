# Project 14: RGB LED (Color Mixing) 🌈

An RGB LED is actually **three** LEDs crammed into one single bulb (Red, Green, and Blue). By using the Arduino's `analogWrite()` (PWM) function, we can mix these three primary colors of light to create almost any color in the rainbow!

## 📦 Component List
- 1x Arduino Uno
- 1x Common Cathode RGB LED
- 3x 220Ω Resistors (Red-Red-Brown)
- Jumper Wires

---

## 🔌 Circuit Connection Guide

An RGB LED has 4 legs. The longest leg is the Common Cathode (Ground). 
If you hold the LED so the longest leg is second from the left, the pins are: **Red, Ground, Green, Blue**.

1. Connect the **Longest Leg (GND)** to Arduino **GND**.
2. Connect the **Red** leg to **Pin 11** (through a 220Ω resistor).
3. Connect the **Green** leg to **Pin 10** (through a 220Ω resistor).
4. Connect the **Blue** leg to **Pin 9** (through a 220Ω resistor).

*(Note: We use pins 9, 10, and 11 because they have the `~` symbol, meaning they support PWM for dimming!)*

---

## 🧠 Code Explanation

- `setColor(int red, int green, int blue)`
  We created a custom function! Instead of typing `analogWrite()` three times every time we want to change a color, we can just type `setColor(255, 0, 0)` for pure red!
- `255` is fully ON, and `0` is fully OFF.

---

## 🌐 Tinkercad Simulation

Don't have the physical components yet? No problem! You can build and test this exact circuit in your web browser before touching real hardware.
[Click here to open Tinkercad](https://www.tinkercad.com/) to build this project virtually!

<!-- Hub Update -->
<!-- Daily Streak Maintenance -->

<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Backdated Streak Recovery -->


<!-- Daily Streak Maintenance -->


<!-- Streak Recovery 2026-06-08 -->


<!-- Streak Recovery 2026-06-09 -->


<!-- Streak Recovery 2026-06-10 -->


<!-- Streak Recovery 2026-06-11 -->


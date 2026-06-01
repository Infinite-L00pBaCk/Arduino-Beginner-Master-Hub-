# Project 08: Passive Buzzer 🎵

In this project, we are going to make the Arduino sing! 
A passive buzzer doesn't just make a single "beep" when you give it power. Instead, you have to send it a specific frequency (a pulse) to generate a musical note. By changing the frequency, we can play actual melodies!

## 📦 Component List
- 1x Arduino Uno
- 1x Passive Buzzer (usually has a green bottom)
- 2x Jumper Wires

---

## 🔌 Circuit Connection Guide

1. **Positive Leg:** Connect to Arduino Digital **Pin 8**
2. **Negative Leg:** Connect to Arduino **GND**

*(Note: Some passive buzzers do not have polarity, so it doesn't matter which leg goes where. If yours has a "+" sign on top, make sure that side goes to Pin 8).*

---

## 🧠 Code Explanation

- `tone(pin, frequency, duration);`
  This is the magic built-in function!
  - `pin` is the digital pin you connected the buzzer to (Pin 8).
  - `frequency` is the pitch of the note (e.g., 262 is Middle C).
  - `duration` is how long the note plays in milliseconds.
- `noTone(pin);`
  Tells the buzzer to stop playing.

---

## 🌐 Tinkercad Simulation

Don't have the physical components yet? No problem! You can build and test this exact circuit in your web browser before touching real hardware.
[Click here to open Tinkercad](https://www.tinkercad.com/) to build this project virtually!

<!-- Hub Update -->
<!-- Daily Streak Maintenance -->

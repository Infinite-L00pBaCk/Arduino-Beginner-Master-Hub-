# Project 02: Traffic Light Simulator 🚦

In this project, we step up from a single LED to controlling multiple outputs at once. By using three LEDs (Red, Yellow, and Green) and some clever use of the `delay()` function, we will simulate a real-world traffic intersection!

## 📦 Component List
- 1x Arduino Uno
- 1x Breadboard
- 1x Red LED
- 1x Yellow (or Orange) LED
- 1x Green LED
- 3x 220-ohm Resistors
- 4x Jumper Wires

---

## 🔌 Circuit Connection Guide

1. **GND (Ground):** Connect a black wire from any `GND` pin on the Arduino to the negative (blue) rail on the breadboard.
2. **LED Placement:** Place the Red, Yellow, and Green LEDs on the breadboard, leaving a little space between them.
3. **The Resistors:** Connect a 220Ω resistor from the shorter leg (Cathode) of *each* LED to the negative (GND) rail.
4. **The Control Wires:** 
   - Connect the longer leg (Anode) of the **Red LED** to **Pin 13**.
   - Connect the longer leg (Anode) of the **Yellow LED** to **Pin 12**.
   - Connect the longer leg (Anode) of the **Green LED** to **Pin 11**.

---

## 🧠 Code Explanation

- `const int RED_PIN = 13;`, `YELLOW_PIN = 12;`, `GREEN_PIN = 11;`
  We define our three pins as constants at the very top so the code is easy to read.
- `pinMode(..., OUTPUT);`
  In the `setup()` function, we must configure *all three* pins as outputs, because the Arduino needs to send electricity out to all three LEDs.
- **The Sequence:** Inside the `loop()`, we follow a strict sequence:
  1. Turn Green `HIGH`, wait 5 seconds.
  2. Turn Green `LOW`, turn Yellow `HIGH`, wait 2 seconds.
  3. Turn Yellow `LOW`, turn Red `HIGH`, wait 5 seconds.
  4. Turn Red `LOW` (then the loop restarts back to Green!)

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


<!-- Daily Streak Maintenance -->


<!-- Backdated Streak Recovery -->


<!-- Daily Streak Maintenance -->


<!-- Streak Recovery 2026-06-08 -->


<!-- Streak Recovery 2026-06-09 -->


<!-- Streak Recovery 2026-06-10 -->


<!-- Streak Recovery 2026-06-11 -->


<!-- Streak Recovery 2026-06-12 -->


<!-- Streak Recovery 2026-06-13 -->


<!-- Streak Recovery 2026-06-14 -->


# Project 28: Sound Sensor "Clapper" 👏

Have you ever seen those TV commercials for "The Clapper" where someone claps their hands to turn off the bedroom lights? Today, we are going to build one!

This project uses a basic microphone sound sensor to detect loud, sudden noises. When it hears a clap, it flips a switch to turn an LED on or off.

## 📦 Component List
- 1x Arduino Uno
- 1x Sound Sensor Module (Microphone)
- 1x LED
- 1x 220-ohm Resistor
- Jumper Wires

---

## 🔌 Circuit Connection Guide

**The Sound Sensor:**
- `VCC` pin -> Connect to **5V**.
- `GND` pin -> Connect to **GND**.
- `OUT` or `D0` (Digital Out) pin -> Connect to **Pin 2**.

**The LED:**
- Long leg (Anode) -> Connect to a 220Ω resistor, then to **Pin 13**.
- Short leg (Cathode) -> Connect to **GND**.

---

## 🧠 Code Explanation

- `digitalRead(soundPin)`
  Unlike reading analog audio waves, this basic sensor has a small blue potentiometer (knob) on it. You turn the knob to set the "loudness threshold". When a sound is louder than the threshold, the sensor simply outputs `HIGH`.
- `ledState = !ledState;`
  This is a very important programming trick! The `!` means "NOT". It tells the Arduino to take whatever the current state is, and flip it to the opposite. If it was ON, it becomes OFF.

---

## 🛠️ Calibration

If your sensor isn't detecting your claps, or if it is constantly triggering from background noise, use a small screwdriver to turn the blue knob on the sensor module until it only triggers when you clap loudly near it!

<!-- Streak Recovery 2026-06-13 -->


<!-- Streak Recovery 2026-06-14 -->


<!-- Streak Recovery 2026-06-15 -->


<!-- Streak Recovery 2026-06-16 -->


<!-- Streak Recovery 2026-06-17 -->


<!-- Streak Recovery 2026-06-18 -->


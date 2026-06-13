# Project 23: IR Remote Control 📺

Have you ever wondered how your TV remote works? It flashes an invisible infrared (IR) light in a specific pattern. Your TV has a tiny receiver that reads those flashes and translates them into numbers (like "Volume Up" or "Channel 5"). 

In this project, we will use an IR Receiver to read the codes from a standard remote control, allowing you to turn an LED on and off from across the room!

## 📦 Component List
- 1x Arduino Uno
- 1x IR Receiver Module (e.g., VS1838B)
- 1x IR Remote (Usually included in starter kits)
- 1x LED
- 1x 220Ω Resistor
- Jumper Wires

---

## 🔌 Circuit Connection Guide

**The LED:**
- Long leg to **Pin 13**.
- Short leg through 220Ω resistor to **GND**.

**The IR Receiver:**
*(Note: Pin layouts can vary slightly by manufacturer. Always double-check your specific module!)*
- `VCC` pin -> Connect to **5V**.
- `GND` pin -> Connect to **GND**.
- `OUT` (or Signal) pin -> Connect to **Pin 11**.

---

## 🛠️ Required Library

To decode the complex flashing patterns of the infrared light, we need to install a library. 
1. Open the Arduino IDE.
2. Go to **Sketch** > **Include Library** > **Manage Libraries...**
3. Search for **IRremote** (by shirriff, z3t0, ArminJo) and click Install.

---

## 🧠 Code Explanation

- `IRrecv irrecv(RECV_PIN);`
  This creates an "object" that listens for IR signals on Pin 11.
- `irrecv.decode(&results)`
  This checks if a new, complete infrared code has been received. If it has, it stores the secret hex code in the `results` variable!
- `results.value, HEX`
  This prints the unique code of the button you pressed on the remote to the Serial Monitor.

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


# Project 01: Blinking an LED 💡  

Welcome to your very first Arduino project! The "Blink" sketch is the "Hello World" of hardware. By completing this, you'll prove that your Arduino works, your computer can talk to it, and you know how to wire a basic circuit.

## 📦 Component List  
- 1x Arduino Uno
- 1x Breadboard
- 1x LED (Any color)
- 1x 220-ohm Resistor (Red-Red-Brown or Red-Red-Black-Black)
- 2x Jumper Wires

---

## 🔌 Circuit Connection Guide  

1. **GND (Ground):** Connect a black wire from any `GND` pin on the Arduino to the negative (blue) rail on the breadboard.
2. **LED Placement:** Place the LED on the breadboard. 
   - Note the **longer leg** (Anode).
   - Note the **shorter leg** (Cathode).
3. **The Resistor:** Connect the 220Ω resistor from the LED's shorter leg (Cathode) to the negative (GND) rail. *(Resistors don't have polarity, so it doesn't matter which way it faces!)*
4. **The Control Wire:** Connect a colored wire from **Pin 13** on the Arduino to the same breadboard row as the LED's longer leg (Anode).

---

## 🧠 Code Explanation

Let's break down exactly what the `01_blinking_led.ino` code is doing:-

- `const int LED_PIN = 13;` 
  We create a constant variable to store our pin number. It's much easier to remember `LED_PIN` than the number 13.
- `pinMode(LED_PIN, OUTPUT);` 
  Inside `setup()`, we tell the Arduino that Pin 13 will be an OUTPUT, meaning it will send out electricity.
- `digitalWrite(LED_PIN, HIGH);` 
  Turns the LED ON by sending 5 Volts to Pin 13.
- `delay(1000);` 
  Tells the Arduino to do absolutely nothing and wait for 1000 milliseconds (1 full second).
- `digitalWrite(LED_PIN, LOW);` 
  Turns the LED OFF by dropping the voltage to 0 Volts.
- `delay(1000);` 
  Waits another second before the `loop()` starts all over again!

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


<!-- Streak Recovery 2026-06-15 -->


<!-- Streak Recovery 2026-06-16 -->


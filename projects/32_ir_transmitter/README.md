# Project 32: IR Transmitter 📡

In this project, we will learn how to send infrared (IR) signals using an IR LED and the IRremote library. This is the same technology used by TV remotes — you can use your Arduino to control appliances wirelessly!

## 📦 Component List  
- 1x Arduino Uno
- 1x Breadboard
- 1x IR LED (Infrared Transmitter LED)
- 1x 100-ohm Resistor
- Jumper Wires
- (Optional) IR Receiver module for testing

---

## 🔌 Circuit Connection Guide  

1. **IR LED Anode (+):** Connect the longer leg (Anode) of the IR LED to Digital Pin 3 on the Arduino through a 100-ohm resistor. Pin 3 is required because the IRremote library uses a specific PWM timer on this pin.
2. **IR LED Cathode (-):** Connect the shorter leg (Cathode) of the IR LED to GND on the Arduino.
3. **Resistor:** Place a 100-ohm resistor between Pin 3 and the Anode of the IR LED to limit current and protect the LED.

---

## 🧠 Code Explanation

- `#include <IRremote.h>`  
  Imports the IRremote library which handles all the complex signal modulation (38 kHz carrier wave) for you.
- `IrSender.begin(IR_SEND_PIN);`  
  Initializes the IR transmitter on the specified pin.
- `IrSender.sendNEC(0x00, 0x0C, 0);`  
  Sends an NEC-protocol infrared signal. The first argument is the device address, the second is the command code, and the third is the number of repeats. NEC is the most common IR protocol used by consumer electronics.

---

## 🌐 Tinkercad Simulation

Tinkercad has limited IR support, but you can test the circuit wiring and LED placement. For full IR signal testing, use a physical IR receiver module (like TSOP1738) to verify the transmitted signals!

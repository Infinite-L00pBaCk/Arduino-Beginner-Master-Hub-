# 🔧 Arduino Troubleshooting Guide 

Encountering errors is a normal part of learning to code and build circuits. Don't panic! Use this guide to diagnose and fix the most common beginner issues.

## 💻 Software / IDE Errors

| ❌ Symptom / Error Message | 🔍 Possible Cause | 🛠️ How to Fix |
| :--- | :--- | :--- |
| **"Error compiling for board Arduino Uno"** | Syntax error in your code (usually a missing semicolon `;` or bracket `{ }`). | Read the red error text at the bottom of the IDE. It usually highlights the line *after* the error. Check for missing `;` on the line above. |
| **"avrdude: ser_open(): can't open device"** | The computer cannot communicate with the Arduino. | 1. Ensure the USB cable is fully plugged in.<br>2. Go to `Tools > Port` and ensure your COM port is selected. |
| **Port option is greyed out in Tools menu** | Missing drivers or using a "Charge-Only" USB cable. | 1. Try a different USB cable (needs to be a data cable).<br>2. If using a cheap clone board, you may need to install CH340 drivers. |
| **"'variableName' was not declared in this scope"** | You are trying to use a variable before creating it, or you misspelled it. | Check your spelling! Remember, Arduino is case-sensitive (`LedPin` is different from `ledPin`). Ensure variables are declared at the top of the file or within the function. |

---

## ⚡ Hardware / Circuit Errors 

| ❌ Symptom | 🔍 Possible Cause | 🛠️ How to Fix |
| :--- | :--- | :--- |
| **LED is not lighting up** | 1. LED is plugged in backwards.<br>2. Code is uploading to the wrong pin. | LEDs have polarity. The longer leg (Anode) must connect to power/pin, and the shorter leg (Cathode) to GND. Double-check your pin numbers in code. |
| **Arduino is hot to the touch or smells burnt** | A short circuit! You connected Power (5V) directly to Ground (GND). | **UNPLUG THE ARDUINO IMMEDIATELY!** Check your wiring. Never connect 5V directly to GND without a component (like a resistor) in between. |
| **Button reading is erratic (jumping between HIGH and LOW)** | Floating pin. The pin isn't properly pulled HIGH or LOW when the button is open. | Add a 10kΩ pull-down resistor to your circuit, OR change `pinMode(pin, INPUT)` to `pinMode(pin, INPUT_PULLUP)` and wire the button to GND. |
| **Code uploads successfully, but nothing happens** | Logic error, or wiring doesn't match the code. | 1. Verify `pinMode` is set correctly in `setup()`.<br>2. Double-check that the pin number in the code exactly matches the physical pin on the board. |

> [!TIP]
> **The Golden Rule of Debugging:** When in doubt, unplug everything, open a blank sketch, and rebuild the circuit step-by-step. Adding components one at a time helps isolate the problem!

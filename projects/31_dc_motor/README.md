# Project 31: DC Motor Control ⚙️

In this project, we will learn how to spin a basic DC motor. Since DC motors draw more current than the Arduino pins can provide, we use an NPN transistor to safely switch the power on and off!

## 📦 Component List  
- 1x Arduino Uno
- 1x Breadboard
- 1x DC Motor (3-6V)
- 1x NPN Transistor (e.g., PN2222 or 2N3904)
- 1x Diode (e.g., 1N4001)
- 1x 1k-ohm Resistor
- Jumper Wires
- (Optional) Battery pack for external motor power

---

## 🔌 Circuit Connection Guide  

1. **Transistor Base:** Connect Digital Pin 9 on the Arduino through a 1k-ohm resistor to the Base (middle pin) of the NPN transistor.
2. **Transistor Emitter:** Connect the Emitter pin of the transistor to GND.
3. **Motor & Collector:** Connect one wire of the DC motor to the 5V pin (or external battery positive). Connect the other motor wire to the Collector pin of the transistor.
4. **Flyback Diode:** Connect the Diode across the motor's pins. The striped end (Cathode) must point towards the 5V power source. This protects the circuit from voltage spikes when the motor turns off.

---

## 🧠 Code Explanation

- `const int motorPin = 9;` 
  We define the pin that will trigger the transistor.
- `digitalWrite(motorPin, HIGH);` 
  Sends a small current to the transistor's Base. The transistor acts as a switch, completing the circuit and letting a larger current flow through the motor.
- `digitalWrite(motorPin, LOW);` 
  Turns off the transistor, which stops the motor.

---

## 🌐 Tinkercad Simulation

You can safely test motor circuits and transistors in Tinkercad to understand how the current flows!

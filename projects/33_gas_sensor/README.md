# Project 33: MQ-2 Gas & Smoke Sensor 🔥

In this project, we will use an MQ-2 gas sensor to detect smoke, LPG, propane, and other combustible gases. When the gas concentration exceeds a safe threshold, a buzzer will sound an alarm!

## 📦 Component List  
- 1x Arduino Uno
- 1x Breadboard
- 1x MQ-2 Gas/Smoke Sensor Module
- 1x Piezo Buzzer
- 1x LED (Red, for visual alert)
- 1x 220-ohm Resistor (for LED)
- Jumper Wires

---

## 🔌 Circuit Connection Guide  

1. **MQ-2 VCC:** Connect the VCC pin of the MQ-2 module to 5V on the Arduino.
2. **MQ-2 GND:** Connect the GND pin of the MQ-2 module to GND on the Arduino.
3. **MQ-2 Analog Out (A0):** Connect the A0 (Analog Output) pin of the MQ-2 to Analog Pin A0 on the Arduino. This gives a variable voltage based on the gas concentration.
4. **Buzzer:** Connect the positive pin of the buzzer to Digital Pin 8, and the negative pin to GND.
5. **LED (Optional):** Connect a red LED through a 220-ohm resistor from Digital Pin 13 to GND for a visual alarm indicator.

---

## 🧠 Code Explanation

- `analogRead(gasSensorPin);`  
  Reads the analog voltage from the MQ-2 sensor. Higher values mean more gas is detected. The sensor returns values from 0 to 1023.
- `const int threshold = 400;`  
  This is the gas level at which the alarm triggers. You may need to adjust this value based on your environment and calibration. In clean air, the sensor typically reads between 100-200.
- `tone(buzzerPin, 1000);`  
  Activates the buzzer at 1kHz when dangerous gas levels are detected.
- `noTone(buzzerPin);`  
  Silences the buzzer when gas levels return to normal.

> **Note:** The MQ-2 sensor requires a warm-up period of 1-2 minutes after powering on. Readings during this time may be inaccurate.

---

## 🌐 Tinkercad Simulation

Tinkercad includes a basic gas sensor component that you can use to simulate the circuit. You can adjust the simulated gas concentration to test different threshold values and observe the buzzer alarm response!

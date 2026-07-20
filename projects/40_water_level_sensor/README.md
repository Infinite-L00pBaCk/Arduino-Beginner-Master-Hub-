# Project 40: Water Level Sensor

## Overview
This project shows how to use a standard analog water level sensor with an Arduino. These sensors have a series of parallel exposed traces that measure the water level based on the resistance of the water.

## Components Needed
- 1 x Arduino Uno
- 1 x Water Level Sensor module
- Jumper Wires
- 1 x LED (optional, to act as a warning indicator)
- 1 x 220-ohm Resistor (for the LED)

## Wiring Diagram
- **Sensor VCC (+) ** to Arduino 5V
- **Sensor GND (-) ** to Arduino GND
- **Sensor S (Signal)** to Arduino A0
- **LED Anode (Long Leg)** to Arduino Pin 13
- **LED Cathode (Short Leg)** to GND through a 220-ohm resistor

## Code Explanation
The sketch reads the analog value on pin A0. When the water level rises, the analog reading increases. We set a threshold (e.g., 300) in the code. If the reading goes above the threshold, the built-in LED or an external LED on pin 13 is turned on to signal a high water level warning.

## How to Test
1. Connect the sensor to the Arduino as per the wiring diagram.
2. Upload the code to your Arduino Uno.
3. Open the Serial Monitor (Tools > Serial Monitor) at 9600 baud.
4. Slowly submerge the sensor part in water (do not submerge the components at the top of the board).
5. Watch the analog values increase in the Serial Monitor and see the LED turn on when the threshold is crossed.

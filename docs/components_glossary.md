# 🧰 Arduino Component Glossary

When you buy an Arduino Starter Kit, it often comes with dozens of tiny parts that look identical. This guide explains what the most common components are and what they actually do in simple terms!

## The Basics

### 🍞 Breadboard
- **What it is:** A rectangular board with hundreds of tiny holes.
- **What it does:** Allows you to plug in wires and components to build circuits **without soldering**. Inside the board, specific rows of holes are connected by metal strips.

### 🔌 Jumper Wires
- **What they are:** Small wires with stiff pins on the ends (Male-to-Male) or holes (Female-to-Female).
- **What they do:** Carry electricity from one part of the breadboard to another, or from the Arduino to the breadboard.

## Light & Output

### 💡 LED (Light Emitting Diode)
- **What it is:** A tiny light bulb that only lets electricity flow in one direction. 
- **What it does:** Provides a visual output. 
- **Important:** The longer leg (Anode) goes to positive/power, and the shorter leg (Cathode) goes to negative/ground. Always use a resistor with an LED so it doesn't pop!

## Control & Protection

### ⚡ Resistor
- **What it is:** A tiny cylinder with colored stripes and a wire on each end.
- **What it does:** It acts like a speed bump for electricity. It restricts the flow of current so delicate components (like LEDs) don't receive too much power and burn out.

### 🔘 Pushbutton
- **What it is:** A simple mechanical switch.
- **What it does:** When you press it, it bridges a gap, allowing electricity to flow. When you let go, the gap opens, stopping the flow.

### 🎚️ Potentiometer (Variable Resistor)
- **What it is:** A knob that you can twist.
- **What it does:** It allows you to manually change the amount of resistance in a circuit. Perfect for making volume dials or controlling the brightness of an LED.

## Sensors

### 🦇 Ultrasonic Sensor (HC-SR04)
- **What it is:** A module that looks like it has two silver "eyes".
- **What it does:** It shoots out a high-frequency sound wave (like a bat) and listens for the echo. By calculating how long the echo takes to return, it can measure how far away an object is.

### 🌡️ Temperature & Humidity Sensor (DHT11 / DHT22)
- **What it is:** A small blue or white square with a grid on the front.
- **What it does:** Measures the ambient temperature and humidity of the room.

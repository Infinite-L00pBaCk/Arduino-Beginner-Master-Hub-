# Project 30: Temperature & Humidity Sensor 🌡️

Welcome to Project 30! In this project, we'll learn how to measure the temperature and humidity of our surroundings using the popular DHT11 sensor.

## 📦 Component List  
- 1x Arduino Uno
- 1x Breadboard
- 1x DHT11 Temperature & Humidity Sensor
- 1x 10k-ohm Resistor
- Jumper Wires

---

## 🔌 Circuit Connection Guide  

1. **VCC:** Connect the VCC pin of the DHT11 to the 5V pin on the Arduino.
2. **DATA:** Connect the DATA pin of the DHT11 to Digital Pin 2 on the Arduino.
3. **Pull-up Resistor:** Place a 10k-ohm resistor between the VCC and DATA pins of the DHT11.
4. **GND:** Connect the GND pin of the DHT11 to a GND pin on the Arduino.

*(Note: If you are using a DHT11 module on a breakout board, it might only have 3 pins and already include the pull-up resistor. Connect VCC to 5V, GND to GND, and DATA to Pin 2).*

---

## 🧠 Code Explanation

- `#include <DHT.h>` 
  We include the DHT library to easily interact with the sensor without writing complex timing code.
- `DHT dht(DHTPIN, DHTTYPE);` 
  We create a DHT object, telling it which pin we're using and the sensor type.
- `dht.begin();` 
  Initializes the sensor.
- `dht.readHumidity()` & `dht.readTemperature()` 
  Reads the current humidity and temperature values from the sensor.

---

## 🌐 Tinkercad Simulation

Since Tinkercad does not have a native DHT11 sensor, you can use a TMP36 temperature sensor to practice analog temperature reading instead!

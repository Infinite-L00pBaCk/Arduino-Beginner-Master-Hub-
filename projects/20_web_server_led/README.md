# Project 20: Smart Web Server LED 🌍💡

Scanning for WiFi is cool, but actually connecting to it is magic! In this project, we are going to connect the ESP8266 to your home WiFi router. It will host a tiny webpage. You can open your phone, go to that webpage, press a button, and an LED on your desk will turn on!

## 📦 Component List
- 1x ESP8266 Board (e.g., NodeMCU 1.0)
- 1x LED
- 1x 220Ω Resistor
- Jumper Wires

---

## 🔌 Circuit Connection Guide

- Connect the **Short Leg** of the LED through the 220Ω Resistor to one of the **GND** pins on the ESP8266.
- Connect the **Long Leg** of the LED to pin **D1** (which is GPIO 5 on the ESP8266).

---

## ⚠️ Important Configuration

In the `.ino` code file, you **must** change lines 9 and 10 to match your actual home WiFi name and password!
```cpp
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";
```
If you don't do this, the board won't be able to connect to your router!

---

## 🧠 Code Explanation

- `ESP8266WebServer server(80);`
  This creates a web server running on port 80 (the standard port for HTTP websites).
- `WiFi.begin(ssid, password);`
  Logs the board into your home router just like your phone does.
- `server.on("/ledon", handleLedOn);`
  This means if someone visits `http://192.168.1.XX/ledon`, the board will run the `handleLedOn()` function, which turns the LED pin HIGH!

---

## 🌐 Tinkercad Simulation

*Note: Tinkercad does not support ESP8266 or WiFi simulation.*

<!-- Hub Update -->
<!-- Daily Streak Maintenance -->

<!-- Daily Streak Maintenance -->


<!-- Backdated Streak Recovery -->


<!-- Daily Streak Maintenance -->


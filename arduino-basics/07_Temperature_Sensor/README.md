# 07 — Temperature & Humidity Sensor (DHT11) 🌡️

Read real-world temperature and humidity data using the DHT11 sensor.

---

## Components Needed

| Component | Quantity |
|---|---|
| Arduino Uno | 1 |
| DHT11 Sensor (or DHT22) | 1 |
| 10kΩ Pull-up Resistor | 1 |
| Breadboard | 1 |
| Jumper Wires | 3 |

---

## Circuit

```
DHT11 Pin → Arduino
  Pin 1 (VCC)  → 5V
  Pin 2 (DATA) → D7  (also connect 10kΩ resistor between DATA and 5V)
  Pin 4 (GND)  → GND
```

> Many DHT11 modules sold online already have the pull-up resistor built in.

---

## Library Installation

1. Open Arduino IDE → **Manage Libraries**
2. Search `DHT sensor library` by Adafruit
3. Install it + install **Adafruit Unified Sensor** when prompted

---

## How to Run

1. Open `temperature_sensor.ino` and upload
2. Open Serial Monitor at 9600 baud
3. Readings appear every 2 seconds

---

## DHT11 vs DHT22

| Feature | DHT11 | DHT22 |
|---|---|---|
| Temperature Range | 0–50°C | -40–80°C |
| Humidity Range | 20–80% | 0–100% |
| Accuracy | ±2°C, ±5% RH | ±0.5°C, ±2% RH |
| Cost | Cheaper | Slightly more |

---

## Concepts Learned

- Single-wire protocol for sensor communication
- `dht.readTemperature()` and `dht.readHumidity()`
- `isnan()` — checking for invalid floating-point readings
- Heat index calculation

---

## Try It Yourself

- Display readings on the LCD from Project 06
- Log data to Serial Plotter (Tools → Serial Plotter) for a live graph
- Trigger a fan/LED when temperature exceeds a threshold

<!-- Hub Update -->


<!-- Daily Streak Maintenance -->


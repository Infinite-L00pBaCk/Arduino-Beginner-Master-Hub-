# 05 — Ultrasonic Distance Sensor 📡

Measure distance to an object using the HC-SR04 sensor. Core component of obstacle-avoiding robots.

---

## Components Needed

| Component | Quantity |
|---|---|
| Arduino Uno | 1 |
| HC-SR04 Ultrasonic Sensor | 1 |
| Breadboard | 1 |
| Jumper Wires | 4 |

---

## Circuit

```
HC-SR04 Pin → Arduino Pin
  VCC       → 5V
  GND       → GND
  TRIG      → D9
  ECHO      → D10
```

---

## How to Run

1. Open `ultrasonic_sensor.ino` and upload
2. Open Serial Monitor at 9600 baud
3. Move your hand in front of the sensor
4. Watch the distance update in real time

---

## How It Works

```
1. Arduino sends a 10µs HIGH pulse on TRIG pin
2. Sensor emits 8 ultrasonic bursts at 40kHz
3. Sound reflects off the object and returns
4. ECHO pin goes HIGH for the travel duration
5. Distance = (duration × speed of sound) / 2
```

```
  Arduino         HC-SR04          Object
    TRIG ──pulse──► [emit] ~~~~~~~►|
    ECHO ◄─────── [receive] ~~~~~~~|
```

---

## Concepts Learned

- `pulseIn(pin, HIGH)` — measures how long a pin stays HIGH in microseconds
- Speed of sound calculation for distance
- Sensor range: 2cm – 400cm, accuracy: ±3mm

---

## Try It Yourself

- Add an LED or buzzer that activates when distance < 15 cm
- Display the distance on an LCD screen
- Build a full obstacle-avoiding robot with 2 DC motors

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


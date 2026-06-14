# 04 — Servo Motor Control ⚙️

Control a servo motor and sweep it between 0° and 180°. Foundation for robotic arms, pan-tilt systems, and more.

---

## Components Needed

| Component | Quantity |
|---|---|
| Arduino Uno | 1 |
| SG90 Servo Motor | 1 |
| Breadboard | 1 |
| Jumper Wires | 3 |

---

## Circuit

```
Servo Wire Colors:
  Brown/Black → GND
  Red         → 5V
  Orange/Yellow → Pin 9 (signal)
```

> ⚠️ For multiple servos or heavy-load servos, use an external 5V power supply — don't power them from Arduino's 5V pin.

---

## How to Run

1. No extra library needed — `Servo.h` is built into Arduino IDE
2. Open `servo_motor.ino` and upload
3. Watch the servo sweep left and right continuously
4. Open Serial Monitor to see angle values

---

## Concepts Learned

- `#include <Servo.h>` — include the Servo library
- `servo.attach(pin)` — connect servo object to a pin
- `servo.write(angle)` — move servo to 0–180 degrees
- How PWM signals control servo position (1ms–2ms pulse width)

---

## Try It Yourself

- Control the servo angle with a potentiometer on A0
- Build a simple robotic arm with 2 servos
- Create a radar system with servo + ultrasonic sensor

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


# 09a — Traffic Light Simulator 🚦

Simulate a real traffic light sequence using 3 LEDs. Great first mini-project combining everything from projects 01–02.

---

## Components Needed

| Component | Quantity |
|---|---|
| Arduino Uno | 1 |
| Red LED | 1 |
| Yellow LED | 1 |
| Green LED | 1 |
| 220Ω Resistors | 3 |
| Breadboard | 1 |
| Jumper Wires | 6 |

---

## Circuit

```
Pin 11 → 220Ω → Red LED    → GND
Pin 10 → 220Ω → Yellow LED → GND
Pin  9 → 220Ω → Green LED  → GND
```

---

## Traffic Light Sequence

```
🔴 RED    (4 seconds)  — STOP
🟢 GREEN  (3 seconds)  — GO
🟡 YELLOW (1.5 seconds) — SLOW DOWN
🔴 RED    (repeat...)
```

---

## How to Run

1. Wire up the 3 LEDs as shown
2. Upload `traffic_light.ino`
3. Watch the light sequence loop automatically
4. Open Serial Monitor to see state changes printed

---

## Try It Yourself

- Add a pedestrian crossing button that interrupts to show a walk signal
- Add a buzzer that beeps during GREEN for visually impaired simulation
- Add a second set of lights for a 4-way intersection

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


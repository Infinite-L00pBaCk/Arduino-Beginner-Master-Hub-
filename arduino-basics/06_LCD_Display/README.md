# 06 — LCD Display (16x2 with I2C) 🖥️

Display text on a 16x2 LCD screen using the I2C interface — only 2 wires needed for data!

---

## Components Needed

| Component | Quantity |
|---|---|
| Arduino Uno | 1 |
| 16x2 LCD with I2C module | 1 |
| Breadboard | 1 |
| Jumper Wires | 4 |

> Buy the LCD with the I2C backpack already soldered — it saves a lot of wiring.

---

## Circuit

```
I2C LCD Pin → Arduino Pin
  GND       → GND
  VCC       → 5V
  SDA       → A4
  SCL       → A5
```

---

## Library Installation

1. Open Arduino IDE
2. Go to **Sketch → Include Library → Manage Libraries**
3. Search for `LiquidCrystal I2C` by Frank de Brabander
4. Click **Install**

---

## How to Run

1. Wire the LCD as shown above
2. Open `lcd_display.ino` and upload
3. You should see text appear on the LCD
4. If display is **blank but backlight is on** → adjust the contrast potentiometer on the I2C module
5. If nothing works → try changing address from `0x27` to `0x3F` in the code

---

## Concepts Learned

- I2C protocol — 2-wire communication (SDA + SCL)
- `lcd.setCursor(col, row)` — position text cursor
- `lcd.print()` — write text to screen
- `lcd.clear()` — wipe the display
- I2C address scanning if display doesn't respond

---

## Try It Yourself

- Display live sensor readings (temperature, distance)
- Build a simple menu system with a button
- Show a scrolling ticker message using `lcd.scrollDisplayLeft()`

<!-- Hub Update -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Daily Streak Maintenance -->


<!-- Backdated Streak Recovery -->


<!-- Daily Streak Maintenance -->


# Project 03: Button Control (Digital Input) 🔘

In the Blink project, the Arduino only sent data *out*. Now, we are going to read data *in* from the real world. We will use a pushbutton to manually control an LED!

## 📦 Component List
- 1x Arduino Uno
- 1x Breadboard
- 1x LED (Any color)
- 1x Pushbutton
- 1x 220-ohm Resistor (for the LED)
- 1x 10k-ohm Resistor (Brown-Black-Orange, for the button)
- 5x Jumper Wires

---

## 🔌 Circuit Connection Guide

### LED Circuit:
1. Connect LED shorter leg to GND using the 220Ω resistor.
2. Connect LED longer leg to **Pin 13**.

### Button Circuit:
1. Place the pushbutton across the center gap of the breadboard.
2. Connect the **bottom-left pin** of the button to the **5V** rail on the Arduino.
3. Connect the **bottom-right pin** of the button to **Pin 2** on the Arduino.
4. **CRITICAL STEP (The Pull-Down Resistor):** Connect the 10kΩ resistor from the **bottom-right pin** of the button to **GND**. 
   > *Why? This prevents a "floating" state, ensuring the Arduino reads a clean 0V (LOW) when the button is not pressed.*

---

## 🧠 Code Explanation

- `const int BUTTON_PIN = 2;` 
  Declares the pin our button is attached to.
- `int buttonState = 0;` 
  A variable to store the current status of the button (0 for LOW/Off, 1 for HIGH/On). It is not a `const` because the state will change!
- `pinMode(BUTTON_PIN, INPUT);` 
  Configures Pin 2 to listen for incoming voltage.
- `buttonState = digitalRead(BUTTON_PIN);` 
  Reads the voltage at Pin 2. If the button is pressed, 5V flows to the pin, and it reads `HIGH`. If unpressed, it reads `LOW`.
- `if (buttonState == HIGH)` 
  A conditional statement. "IF the button is pressed, THEN execute the code in the brackets (turn LED on). ELSE, do something different (turn LED off)."

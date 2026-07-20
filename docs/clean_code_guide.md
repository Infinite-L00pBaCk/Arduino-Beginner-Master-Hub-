# 🧹 The Arduino "Clean Code" Guide

When you first start coding, your only goal is: *"Please just make the LED turn on!"* 

However, as your projects get bigger, messy code becomes impossible to read. If you ask for help on a forum with messy code, people will often refuse to read it. Follow these guidelines to write professional, clean, and efficient Arduino code!

---

## 1. The Magic "Auto-Format" Shortcut
This is the single most important trick you will ever learn in the Arduino IDE. 

If your code is completely misaligned, with random spaces and brackets everywhere, the IDE can fix it for you instantly!

* **Windows / Linux:** Press `Ctrl` + `T`
* **Mac:** Press `Cmd` + `T`

*(You can also go to the top menu and click `Tools` > `Auto Format`).*

**Messy Code:**
```cpp
void setup(){
pinMode(13,OUTPUT);
  }
void loop(  ){
   digitalWrite(13, HIGH);
delay(1000);
}

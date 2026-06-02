/*
  Project 12: Keypad Security Alarm
  Description: Requires a password to unlock. Triggers an alarm if wrong.
  Author: Arduino-Beginner-Master-Hub
*/

#include <Keypad.h>

const byte ROWS = 4; // Four rows
const byte COLS = 4; // Four columns

// Define the Keymap
char hexaKeys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

// Connect keypad ROW1, ROW2, ROW3 and ROW4 to these Arduino pins.
byte rowPins[ROWS] = {9, 8, 7, 6}; 
// Connect keypad COL1, COL2, COL3 and COL4 to these Arduino pins.
byte colPins[COLS] = {5, 4, 3, 2}; 

// Create the Keypad object
Keypad customKeypad = Keypad(makeKeymap(hexaKeys), rowPins, colPins, ROWS, COLS); 

int greenLed = 10;
int redLed = 11;
int buzzer = 12;

char secretPassword = 'A'; // The secret key to unlock!

void setup() {
  pinMode(greenLed, OUTPUT);
  pinMode(redLed, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
  Serial.println("System Armed. Enter Password:");
}

void loop() {
  char customKey = customKeypad.getKey();
  
  if (customKey) { // If a key was pressed
    Serial.println(customKey);
    
    if (customKey == secretPassword) {
      // Correct Password!
      digitalWrite(greenLed, HIGH);
      delay(3000); // Unlock for 3 seconds
      digitalWrite(greenLed, LOW);
    } else {
      // Wrong Password! Trigger Alarm!
      for (int i = 0; i < 5; i++) {
        digitalWrite(redLed, HIGH);
        tone(buzzer, 1000);
        delay(200);
        digitalWrite(redLed, LOW);
        noTone(buzzer);
        delay(200);
      }
    }
  }
}

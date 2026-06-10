/*
  Project 25: Reaction Time Game
  Description: A reaction time game using two buttons and a 7-segment display.
  Author: Arduino-Beginner-Master-Hub
*/

// --- PINS ---
const int segmentPins[7] = {2, 3, 4, 5, 6, 7, 8}; // a, b, c, d, e, f, g
const int START_BUTTON = 9;
const int REACT_BUTTON = 10;

// --- 7-SEGMENT DIGITS (Common Cathode) ---
// 0 = led off, 1 = led on
const byte digits[10][7] = {
  {1, 1, 1, 1, 1, 1, 0}, // 0
  {0, 1, 1, 0, 0, 0, 0}, // 1
  {1, 1, 0, 1, 1, 0, 1}, // 2
  {1, 1, 1, 1, 0, 0, 1}, // 3
  {0, 1, 1, 0, 0, 1, 1}, // 4
  {1, 0, 1, 1, 0, 1, 1}, // 5
  {1, 0, 1, 1, 1, 1, 1}, // 6
  {1, 1, 1, 0, 0, 0, 0}, // 7
  {1, 1, 1, 1, 1, 1, 1}, // 8
  {1, 1, 1, 1, 0, 1, 1}  // 9
};

// --- GAME STATE ---
enum State { WATING_TO_START, COUNTDOWN, WAITING_FOR_REACT, GAME_OVER };
State gameState = WATING_TO_START;

unsigned long reactStartTime = 0;
unsigned long reactionTime = 0;

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
  pinMode(START_BUTTON, INPUT);
  pinMode(REACT_BUTTON, INPUT);
  
  randomSeed(analogRead(0));
  displayBlank();
  Serial.begin(9600);
}

void loop() {
  switch (gameState) {
    case WATING_TO_START:
      displayDigit(0); // Show 0 to indicate ready
      if (digitalRead(START_BUTTON) == HIGH) {
        delay(200); // Debounce
        gameState = COUNTDOWN;
      }
      break;

    case COUNTDOWN:
      displayDigit(3);
      delay(1000);
      displayDigit(2);
      delay(1000);
      displayDigit(1);
      delay(1000);
      displayBlank();
      delay(random(1000, 4000)); // Random wait 1 to 4 seconds
      reactStartTime = millis();
      gameState = WAITING_FOR_REACT;
      displayDigit(8); // Turn on all segments as the "GO!" signal
      break;

    case WAITING_FOR_REACT:
      if (digitalRead(REACT_BUTTON) == HIGH) {
        reactionTime = millis() - reactStartTime;
        gameState = GAME_OVER;
      } else if (millis() - reactStartTime > 2000) { // Too slow
        reactionTime = 2000;
        gameState = GAME_OVER;
      }
      break;

    case GAME_OVER:
      int score;
      if (reactionTime < 200) score = 1;
      else if (reactionTime < 250) score = 2;
      else if (reactionTime < 300) score = 3;
      else if (reactionTime < 350) score = 4;
      else if (reactionTime < 400) score = 5;
      else if (reactionTime < 500) score = 6;
      else if (reactionTime < 600) score = 7;
      else if (reactionTime < 800) score = 8;
      else score = 9;
      
      displayDigit(score);
      
      Serial.print("Reaction Time: ");
      Serial.print(reactionTime);
      Serial.print(" ms | Score: ");
      Serial.println(score);

      if (digitalRead(START_BUTTON) == HIGH) {
        delay(200); // Debounce
        gameState = WATING_TO_START;
      }
      break;
  }
}

void displayDigit(int digit) {
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], digits[digit][i]);
  }
}

void displayBlank() {
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], LOW);
  }
}

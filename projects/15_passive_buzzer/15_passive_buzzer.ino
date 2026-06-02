/*
  Project 15: Passive Buzzer (Melodies)
  Description: Plays a simple scale using the tone() function.
  Author: Arduino-Beginner-Master-Hub
*/

int buzzerPin = 8; // The pin the buzzer is connected to

void setup() {
  // We don't actually need to set pinMode for tone()
}

void loop() {
  // Play a C Major Scale
  
  // NOTE_C4 = 262 Hz
  tone(buzzerPin, 262, 500); 
  delay(500); // Wait for the note to finish playing
  
  // NOTE_D4 = 294 Hz
  tone(buzzerPin, 294, 500);
  delay(500);
  
  // NOTE_E4 = 330 Hz
  tone(buzzerPin, 330, 500);
  delay(500);
  
  // NOTE_F4 = 349 Hz
  tone(buzzerPin, 349, 500);
  delay(500);
  
  // NOTE_G4 = 392 Hz
  tone(buzzerPin, 392, 500);
  delay(500);
  
  // NOTE_A4 = 440 Hz
  tone(buzzerPin, 440, 500);
  delay(500);
  
  // NOTE_B4 = 494 Hz
  tone(buzzerPin, 494, 500);
  delay(500);
  
  // NOTE_C5 = 523 Hz
  tone(buzzerPin, 523, 500);
  delay(500);
  
  // Wait 2 seconds before repeating the scale
  delay(2000); 
}

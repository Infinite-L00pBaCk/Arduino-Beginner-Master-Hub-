/*
  Project 17: Flame Sensor Fire Alarm
  Description: Sounds a buzzer when an infrared flame is detected.
  Author: Arduino-Beginner-Master-Hub
*/

int flamePin = 7; // Connect D0 of Flame Sensor to Pin 7
int buzzerPin = 12; // Connect Buzzer to Pin 12
int flameDetected = 0;

void setup() {
  pinMode(flamePin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  flameDetected = digitalRead(flamePin);
  
  // NOTE: Many flame sensors pull LOW when they detect fire. 
  // If your alarm rings when there is NO fire, change LOW to HIGH below!
  if (flameDetected == LOW) { 
    Serial.println("FIRE DETECTED! ALARM!");
    
    // Siren Sound
    tone(buzzerPin, 1000); 
    delay(200);
    tone(buzzerPin, 1500);
    delay(200);
  } else {
    Serial.println("All clear.");
    noTone(buzzerPin); // Silence the buzzer
    delay(500);
  }
}

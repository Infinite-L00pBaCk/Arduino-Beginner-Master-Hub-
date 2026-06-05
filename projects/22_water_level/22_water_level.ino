/*
  Project 22: Water Level Sensor
  Description: Reads analog values to determine how deep the sensor is submerged.
  Author: Arduino-Beginner-Master-Hub
*/

int waterPin = A0; // The signal pin of the water sensor

void setup() {
  // Start the Serial Monitor to see the values
  Serial.begin(9600);
  Serial.println("Water Sensor Test Started");
}

void loop() {
  // Read the analog value (0 to 1023)
  int waterLevel = analogRead(waterPin);
  
  // Print the raw number to the Serial Monitor
  Serial.print("Raw Sensor Value: ");
  Serial.print(waterLevel);
  
  // Add some logic to translate the raw number into readable alerts
  if (waterLevel <= 50) {
    Serial.println(" -> Status: Completely Dry! 🌵");
  } 
  else if (waterLevel > 50 && waterLevel <= 350) {
    Serial.println(" -> Status: Shallow Water 💧");
  } 
  else if (waterLevel > 350) {
    Serial.println(" -> Status: DEEP WATER! Flood Warning! 🌊🚨");
  }
  
  // Wait 1 second before taking another reading
  delay(1000);
}

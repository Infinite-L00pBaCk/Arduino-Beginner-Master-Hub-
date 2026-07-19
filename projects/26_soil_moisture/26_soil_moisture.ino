/*
 * Project 26: Soil Moisture Sensor
 * Reads the analog value from a soil moisture sensor to determine if a plant needs watering.
 */

const int sensorPin = A0; // Soil moisture sensor connected to Analog Pin A0
int sensorValue = 0;      // Variable to store the reading

void setup() {
  Serial.begin(9600);     // Initialize serial communication for reading values
  Serial.println("Soil Moisture Sensor Started!");
}

void loop() {
  // Read the analog value (0-1023)
  // 1023 = completely dry (air)
  // ~0 = completely submerged in water
  sensorValue = analogRead(sensorPin);
  
  Serial.print("Moisture Level: ");
  Serial.print(sensorValue);
  
  // Basic threshold logic
  if (sensorValue > 800) {
    Serial.println(" - SOIL IS DRY! Water the plant! 💧");
  } else if (sensorValue >= 400 && sensorValue <= 800) {
    Serial.println(" - SOIL IS MOIST. Perfect! 🌱");
  } else {
    Serial.println(" - SOIL IS VERY WET! Don't overwater! 🌊");
  }

  delay(2000); // Wait 2 seconds before reading again
}

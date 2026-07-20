// Project 40: Water Level Sensor
// This project reads an analog value from a water level sensor to determine the depth of the water.

const int sensorPin = A0;   // The analog pin the sensor is connected to
const int ledPin = 13;      // Optional LED to indicate high water level

int sensorValue = 0;        // Variable to store the sensor value

void setup() {
  Serial.begin(9600);       // Start the serial connection
  pinMode(ledPin, OUTPUT);  // Set the LED pin as an output
}

void loop() {
  // Read the value from the sensor
  sensorValue = analogRead(sensorPin);
  
  // Print the value to the Serial Monitor
  Serial.print("Water Level Sensor Value: ");
  Serial.println(sensorValue);

  // Turn on LED if water level goes above a certain threshold (e.g., 300)
  if (sensorValue > 300) {
    digitalWrite(ledPin, HIGH);
    Serial.println("Warning: High Water Level Detected!");
  } else {
    digitalWrite(ledPin, LOW);
  }
  
  // Wait for 1 second before taking the next reading
  delay(1000);
}

const int gasSensorPin = A0;  // Analog pin connected to MQ-2 sensor
const int buzzerPin = 8;      // Digital pin connected to the buzzer
const int ledPin = 13;        // Built-in LED for visual alert
const int threshold = 400;    // Gas concentration threshold (adjust as needed)

void setup() {
  Serial.begin(9600);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
  Serial.println("MQ-2 Gas Sensor Ready!");
  Serial.println("Warming up sensor (allow 1-2 minutes)...");
}

void loop() {
  int gasLevel = analogRead(gasSensorPin); // Read the gas concentration

  Serial.print("Gas Level: ");
  Serial.println(gasLevel);

  if (gasLevel > threshold) {
    // Gas detected! Trigger alarm
    Serial.println("WARNING: Gas/Smoke Detected!");
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000); // Sound buzzer at 1kHz
  } else {
    // Normal conditions
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }

  delay(500); // Read every half second
}

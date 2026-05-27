// ============================================================
//  07 - Temperature & Humidity Sensor (DHT11)
//  Arduino Basics | Author: Priyam Prakash
// ============================================================
//  Reads temperature and humidity from DHT11 sensor
//  and prints values to Serial Monitor every 2 seconds.
// ============================================================

#include <DHT.h>

const int DHT_PIN  = 7;       // Data pin of DHT11
const int DHT_TYPE = DHT11;   // Change to DHT22 if using that sensor

DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  Serial.println("DHT11 Temperature & Humidity Sensor");
  Serial.println("=====================================");
}

void loop() {
  delay(2000);  // DHT11 needs at least 2 seconds between readings

  float humidity    = dht.readHumidity();
  float tempCelsius = dht.readTemperature();       // Celsius
  float tempFahr    = dht.readTemperature(true);   // Fahrenheit

  // Check for failed readings
  if (isnan(humidity) || isnan(tempCelsius)) {
    Serial.println("[!] Failed to read from DHT sensor!");
    return;
  }

  // Compute Heat Index
  float heatIndex = dht.computeHeatIndex(tempFahr, humidity);

  Serial.print("Humidity     : ");
  Serial.print(humidity);
  Serial.println(" %");

  Serial.print("Temperature  : ");
  Serial.print(tempCelsius);
  Serial.print(" °C  /  ");
  Serial.print(tempFahr);
  Serial.println(" °F");

  Serial.print("Heat Index   : ");
  Serial.print(heatIndex);
  Serial.println(" °F");
  Serial.println("-------------------------------------");
}

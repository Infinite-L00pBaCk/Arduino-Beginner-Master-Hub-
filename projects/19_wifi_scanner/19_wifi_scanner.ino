/*
  Project 19: WiFi Network Scanner
  Description: Scans for available WiFi networks and prints them to the Serial Monitor.
  Author: Arduino-Beginner-Master-Hub
*/

#include "ESP8266WiFi.h"

void setup() {
  Serial.begin(115200); // Note the faster baud rate often used with ESP8266!
  
  // Set WiFi to station mode and disconnect from an AP if it was previously connected
  WiFi.mode(WIFI_STA);
  WiFi.disconnect();
  delay(100);

  Serial.println("WiFi Scanner Setup Complete.");
}

void loop() {
  Serial.println("Starting Scan...");

  // WiFi.scanNetworks will return the number of networks found
  int numNetworks = WiFi.scanNetworks();
  
  Serial.println("Scan Complete!");
  
  if (numNetworks == 0) {
    Serial.println("No networks found.");
  } else {
    Serial.print(numNetworks);
    Serial.println(" networks found:");
    
    // Loop through all the found networks and print their names (SSID) and signal strength (RSSI)
    for (int i = 0; i < numNetworks; i++) {
      Serial.print(i + 1);
      Serial.print(": ");
      Serial.print(WiFi.SSID(i));
      Serial.print(" (Signal: ");
      Serial.print(WiFi.RSSI(i));
      Serial.println(" dBm)");
      delay(10);
    }
  }
  
  Serial.println("-----------------------");
  
  // Wait 5 seconds before scanning again
  delay(5000);
}

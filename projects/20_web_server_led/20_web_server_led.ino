/*
  Project 20: Smart Web Server LED
  Description: Hosts a web page that allows you to turn an LED on and off from a phone.
  Author: Arduino-Beginner-Master-Hub
*/

#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>

// ⚠️ CHANGE THESE TO YOUR HOME WIFI! ⚠️
const char* ssid = "YOUR_WIFI_NAME";
const char* password = "YOUR_WIFI_PASSWORD";

// Create a web server object that listens for HTTP requests on Port 80
ESP8266WebServer server(80);

// Pin D1 on NodeMCU is GPIO 5
const int ledPin = 5; 

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW); // Start with LED off

  // Connect to WiFi network
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  
  WiFi.begin(ssid, password);
  
  // Wait until connected
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  
  Serial.println("");
  Serial.println("WiFi connected!");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP()); // THIS IS THE IP YOU TYPE INTO YOUR PHONE BROWSER!

  // Define what happens when someone visits the main page "/"
  server.on("/", handleRoot);
  
  // Define what happens when someone clicks the ON or OFF links
  server.on("/ledon", handleLedOn);
  server.on("/ledoff", handleLedOff);

  // Start the server
  server.begin();
  Serial.println("HTTP server started");
}

void loop() {
  // Listen for incoming clients (people visiting the webpage)
  server.handleClient();
}

// --- Web Page Functions ---

void handleRoot() {
  // The HTML code for our tiny website
  String html = "<html><body>";
  html += "<h1>Arduino Web Server!</h1>";
  html += "<p><a href=\"/ledon\"><button style=\"font-size:30px;\">Turn LED ON</button></a></p>";
  html += "<p><a href=\"/ledoff\"><button style=\"font-size:30px;\">Turn LED OFF</button></a></p>";
  html += "</body></html>";
  
  server.send(200, "text/html", html);
}

void handleLedOn() {
  digitalWrite(ledPin, HIGH); 
  server.sendHeader("Location","/");        // Redirect back to main page
  server.send(303);                         // Send standard redirect code
}

void handleLedOff() {
  digitalWrite(ledPin, LOW); 
  server.sendHeader("Location","/");        // Redirect back to main page
  server.send(303);                         // Send standard redirect code
}

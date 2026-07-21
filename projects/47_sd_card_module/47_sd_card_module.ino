#include <SPI.h>
#include <SD.h>
File myFile;
void setup() {
  Serial.begin(9600);
  if (!SD.begin(4)) {
    Serial.println("initialization failed!");
    return;
  }
  myFile = SD.open("test.txt", FILE_WRITE);
  if (myFile) {
    myFile.println("testing 1, 2, 3.");
    myFile.close();
    Serial.println("done.");
  }
}
void loop() {
}

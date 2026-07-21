#define CLK 2
#define DT 3
int counter = 0;
int currentStateCLK;
int lastStateCLK;
void setup() {
  pinMode(CLK, INPUT);
  pinMode(DT, INPUT);
  Serial.begin(9600);
  lastStateCLK = digitalRead(CLK);
}
void loop() {
  currentStateCLK = digitalRead(CLK);
  if (currentStateCLK != lastStateCLK  && currentStateCLK == 1){
    if (digitalRead(DT) != currentStateCLK) {
      counter --;
    } else {
      counter ++;
    }
    Serial.print("Direction: ");
    Serial.print(counter);
    Serial.println("");
  }
  lastStateCLK = currentStateCLK;
}

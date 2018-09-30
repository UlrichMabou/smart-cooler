// Sketch to test the relay. Adjust and integrate...

// The digital pin that is used to control the relay
#define COOLINGPIN 8

void setup() {
  pinMode(COOLONGPIN, OUTPUT);
  digitalWrite(COOLINGPIN, HIGH);
}
void loop() {
  digitalWrite(COOLINGPIN, LOW);
  delay(3000);
  digitalWrite(COOLINGPIN, HIGH);
  delay(3000);
}

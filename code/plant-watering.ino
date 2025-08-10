// Automatic Plant Watering System
int sensorPin = A0;
int relayPin = 7;
void setup() {
  pinMode(relayPin, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  int value = analogRead(sensorPin);
  if (value < 400) digitalWrite(relayPin, HIGH);
  else digitalWrite(relayPin, LOW);
  delay(1000);
}

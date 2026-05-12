// IR Based Light Control
int irSensor = 2;
int relay = 3;
void setup() {
  pinMode(irSensor, INPUT);
  pinMode(relay, OUTPUT);
}
void loop() {
  if (digitalRead(irSensor) == HIGH) digitalWrite(relay, HIGH);
  else digitalWrite(relay, LOW);
}

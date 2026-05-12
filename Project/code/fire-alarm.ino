// Fire Alarm System
int flameSensor = 2;
int buzzer = 3;
void setup() {
  pinMode(flameSensor, INPUT);
  pinMode(buzzer, OUTPUT);
}
void loop() {
  if (digitalRead(flameSensor) == LOW) digitalWrite(buzzer, HIGH);
  else digitalWrite(buzzer, LOW);
}

// Temperature Display on LCD
#include <LiquidCrystal.h>
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
int tempPin = A0;
void setup() {
  lcd.begin(16, 2);
}
void loop() {
  int val = analogRead(tempPin);
  float tempC = val * 0.488;
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(tempC);
  lcd.print(" C");
  delay(1000);
}

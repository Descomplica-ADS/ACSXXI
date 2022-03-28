#include <LiquidCrystal.h>

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  lcd.begin(16, 2);

  lcd.setCursor(3, 0);
  lcd.print("Faculdade");

  lcd.setCursor(2, 1);
  lcd.print("Descomplica!");

  delay(1000);
}

void loop() {
  lcd.clear();

  lcd.setCursor(4, 0);
  lcd.print("AULA 16");

  lcd.setCursor(3, 1);
  lcd.print("CONCLUIDA");

  delay(500);

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("GG !! GG !! GG !");

  lcd.setCursor(0, 1);
  lcd.print("! GG !! GG !! GG");

  delay(500);
}
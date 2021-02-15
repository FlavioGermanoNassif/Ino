#include <Wire.h>
#include <LiquidCrystal_I2C.h>
int k = 0;
int i = 0;

LiquidCrystal_I2C lcd(0x27,2,1,0,4,5,6,7,3, POSITIVE);
void setup()
{
 lcd.begin (16,2);

}

void loop()
{
  lcd.clear();
  int pot = analogRead(A0); // Potenciometro

  lcd.setCursor(0,i);
  lcd.print(pot);
  
  int pct = map(pot, 0, 1023, 0, 100);
  lcd.setCursor(0,1);
  lcd.print(pct);
  delay(30);


}
  

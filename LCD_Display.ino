//Code Written By RAJDEEP BARUAH

#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);
void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);
  // put your setup code here, to run once:

}

void loop() {
  lcd.setCursor(0,0);
  lcd.print("HELLO"); 
  lcd.setCursor(7,2);
  lcd.print("THANK YOU");
}

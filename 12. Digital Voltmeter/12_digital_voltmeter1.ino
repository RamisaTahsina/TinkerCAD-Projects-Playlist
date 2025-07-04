#include<LiquidCrystal.h>

//initialize the library with the number of the interface pins
LiquidCrystal lcd(12,11,5,4,3,2);

float volt=0.0;
float temp=0.0, R1=90900, R2=10000;
int analog=0;

void setup()
{
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.print("Digital Voltmeter");
}

void loop ()
{
  analog=analogRead(A0);
  temp= (analog*5.0)/1024.0;
  volt=temp/ (R2/(R1+R2));
  
  lcd.setCursor(0, 1);
  Serial.println(volt);
  lcd.print(volt);
  delay(300);
}

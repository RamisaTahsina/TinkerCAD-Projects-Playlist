#include<LiquidCrystal.h>
#include<Servo.h>

Servo S1, S2; // object of type servo

#define IR_Slot1 7
#define IR_Slot2 8
#define IR_Entry 6
#define IR_Exit 13

int pos = 0;// initial position of servo motor

// initialize the library with the numbers of the inteface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2 );

void setup() {
  S1.attach(9); // servo 1
  S2.attach(10);// servo 2

  S1.write(pos); // initial position
  S2.write(pos);

  pinMode(IR_Slot1, INPUT);
  pinMode(IR_Slot2, INPUT);
  pinMode(IR_Entry, INPUT);
  pinMode(IR_Exit, INPUT);

  lcd.begin(16, 2);
  lcd.print("Smart Parking");
  lcd.setCursor(0, 1);// column 1 row 2
  lcd.print("   system");
  delay(2000);
  lcd.clear(); // clear the lcd screen
  lcd.setCursor(0, 0);
  lcd.print("Slot 1 = A");
  lcd.setCursor(0, 1);
  lcd.print("Slot 2 = A");
  delay(2000);
}

void loop()
{
  if (digitalRead(IR_Slot1) == HIGH)
  {
    lcd.setCursor(0, 0);
    lcd.print("Slot 1 = NA");
  }
  else
  {
    lcd.setCursor(0, 0);    
    lcd.print("Slot 1 =  A");
  }

  if (digitalRead(IR_Slot2) == HIGH)
  {
    lcd.setCursor(0, 1);
    lcd.print("Slot 2 = NA");
  } 
  else 
  {
    lcd.setCursor(0, 1);    
    lcd.print("Slot 2 =  A");
  }

  if (digitalRead(IR_Entry) == HIGH)
  {
    S1.write(pos + 90);
  }
  else 
  {
    S1.write(pos);
  }
  
  if (digitalRead(IR_Exit) == HIGH) 
  {
    S2.write(pos + 90);
  } else 
  {
    S2.write(pos);
  }
}
void setup()
{
  unsigned char led;
 for(led=1; led<=8; led++)
  pinMode(led, OUTPUT);
}

void loop()
{
  unsigned char led;
  for(led=1; led<=8; led++)
  {
    digitalWrite(led, HIGH);
    delay(300);
  }
  
  for(led=1; led<=8; led++)
  {
    digitalWrite(led, LOW);
    delay(300);
  }
}
int pot=0;
int led=0;
int sensor=A3;

void setup()
{
  pinMode(led, OUTPUT);
  pinMode(sensor, INPUT);
}

void loop()
{
  pot=analogRead(sensor);
  pot=map(pot,0,1023,0,255);
  analogWrite(led, pot);
}

  
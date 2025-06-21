int r=11;
int b=10;
int g=9;

void setup(){
  pinMode(r,OUTPUT);
  pinMode(b,OUTPUT);
  pinMode(g,OUTPUT);
}
void loop()
{
  color(255,0,0);
  delay(500);
  color(0,255,0);
  delay(500);
  color(0,0,255);
  delay(500);
  color(255,255,255);
  delay(500);
  color(0,0,0);
  delay(500);
}
 void color(unsigned char red, unsigned char green, unsigned char blue)
 {
   analogWrite(r, red);
   analogWrite(g,green);
   analogWrite(b, blue);
 }

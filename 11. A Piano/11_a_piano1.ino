int b1=2;
int b2=3;
int b3=4;
int b4=5;
int b5=6;
int b6=7;
int b7=8;
int b8=9;

int buzz=13;

void setup()
{
  pinMode(b1,INPUT);
  pinMode(b2,INPUT);
  pinMode(b3,INPUT);
  pinMode(b4,INPUT);
  pinMode(b5,INPUT);
  pinMode(b6,INPUT);
  pinMode(b7,INPUT);
  pinMode(b8,INPUT);
  
  pinMode(buzz,INPUT);
}

void loop()
{
  int n1=digitalRead(b1);
  int n2=digitalRead(b2);
  int n3=digitalRead(b3);
  int n4=digitalRead(b4);
  int n5=digitalRead(b5);
  int n6=digitalRead(b6);
  int n7=digitalRead(b7);
  int n8=digitalRead(b8);
  
  if(n1==1){
    tone(buzz,300,100);
  }
  if(n2==1){
    tone(buzz,400,100);
  }
  if(n3==1){
    tone(buzz,500,100);
  }
  if(n4==1){
    tone(buzz,600,100);
  }
  if(n5==1){
    tone(buzz,700,100);
  }
  if(n6==1){
    tone(buzz,800,100);
  }
  if(n7==1){
    tone(buzz,900,100);
  }
  if(n8==1){
    tone(buzz,1000,100);
  }
  delay(10);
}


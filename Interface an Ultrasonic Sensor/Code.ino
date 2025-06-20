#define trig 9
#define echo 10



void setup() {
  pinMode(trig,OUTPUT); 
  pinMode(echo, INPUT);


  Serial.begin(9600);
}

void loop() {
  digitalWrite(trig,LOW);
  delayMicroseconds(2);
  digitalWrite(trig,HIGH);
  delayMicroseconds(10);

  float t=pulseIn(echo,HIGH);
  float d=0.034 * t /2;
 
  Serial.println(d); 

  delay(100);
}

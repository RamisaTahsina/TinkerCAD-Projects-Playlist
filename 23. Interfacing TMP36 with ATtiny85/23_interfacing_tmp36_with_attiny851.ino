const float baselineTem=20.0;
const int sensor=A2, r=0, b=1, g=2;

float temp;

// color arrays
// format: color[]={R,G,B}
bool yellow[]={1,1,0},
  red[]={1,0,0},
  green[]={0,1,0},
  blue[]={0,0,1},
  white[]={1,1,1},
  cyan[]={0,1,1},
  off[]={0,0,0};

void setup()
{
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(5, OUTPUT);
  
  digitalWrite(5, HIGH);
}

void loop () 
{
  readSensor();
  colorConditions();
}



void colorConditions() // blink conditions
{
/* blink white*/  if(temp <=9)
    ledControlBlink(white);
/*blink red*/  if(temp >=35)
    ledControlBlink(red); 
/*white*/  if(temp >=10 && temp <= 14.0)
    ledControl(white);
/*cyan*/  if(temp >=15.0 && temp <=20.0)
    ledControl(cyan);
/*green*/  if(temp >=21 && temp  <=24)
    ledControl(green);
 /*yellow*/ if(temp >= 25 && temp <=29)
    ledControl(yellow);
 /*red*/ if(temp >=30) 
    ledControl(red);
}
  
  //takes a boolean array for each RGB Value.
  
  void ledControl (bool color[])
  {
  digitalWrite (r, color[0]);
  digitalWrite (g, color[1]);
  digitalWrite (b, color[2]);
  }
  
  void ledControlBlink(bool color[])
  { 
  ledControl(color);
  delay(500);
  ledControl(off);
  delay(500);
  }
  
  //reads data, converts to degree celcius
  
  void readSensor()
  {
  int SENSOR= analogRead(sensor);
  float volt=SENSOR*3.0;
  volt/=1024.0;
  temp=(volt-0.5) * 100;
}


  
  

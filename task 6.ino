int dir1= 4;
int dir2= 3;
int speedPin= 5;
int maxSpeed= 255;
int miniSpeed= 50;
int tiltPin=6;
int tiltVal;



void setup()
{
  pinMode (dir1, OUTPUT);
  pinMode (dir2, OUTPUT);
  pinMode (speedPin,OUTPUT);
  Serial.begin(9600);
  pinMode (tiltPin, INPUT);
}

void loop()
{
  tiltVal= digitalRead(tiltPin);
  
  if (tiltVal == 0){
  	digitalWrite (dir1, HIGH);
  	digitalWrite (dir2, LOW);
    analogWrite (speedPin, maxSpeed);
  }
  
   if (tiltVal == 1){
  	digitalWrite (dir1, LOW);
  	digitalWrite (dir2, HIGH);
     analogWrite (speedPin, miniSpeed);}
  }
// C++ code
//
void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  digitalWrite(2, LOW);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  digitalWrite(6, LOW);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);

}

void loop()
{
  float input = map(analogRead(0),0,1023,0,300);
  
  if(input > 240)
  {
    digitalWrite(2, HIGH);
  	digitalWrite(3, LOW);
  	digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  	digitalWrite(6, LOW);
    digitalWrite(7, LOW);
  	digitalWrite(8, LOW);
  }
  else if(input > 230 )
  {
    digitalWrite(2, LOW);
  	digitalWrite(3, HIGH);
  	digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  	digitalWrite(6, LOW);
    digitalWrite(7, LOW);
  	digitalWrite(8, LOW);
  }
  else if(input > 220 )
  {
    digitalWrite(2, LOW);
  	digitalWrite(3, LOW);
  	digitalWrite(4, HIGH);
    digitalWrite(5, LOW);
  	digitalWrite(6, LOW);
    digitalWrite(7, LOW);
  	digitalWrite(8, LOW);
  }
  else if(input > 210 )
  {
    digitalWrite(2, LOW);
  	digitalWrite(3, LOW);
  	digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
  	digitalWrite(6, LOW);
    digitalWrite(7, LOW);
  	digitalWrite(8, LOW);
  }
  else if(input > 200 )
  {
    digitalWrite(2, LOW);
  	digitalWrite(3, LOW);
  	digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  	digitalWrite(6, HIGH);
    digitalWrite(7, LOW);
  	digitalWrite(8, LOW);
  }
  else if(input > 190 )
  {
    digitalWrite(2, LOW);
  	digitalWrite(3, LOW);
  	digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  	digitalWrite(6, LOW);
    digitalWrite(7, HIGH);
  	digitalWrite(8, LOW);
  }
   else if(input > -1)
  {
    digitalWrite(2, LOW);
  	digitalWrite(3, LOW);
  	digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  	digitalWrite(6, LOW);
    digitalWrite(7, LOW);
  	digitalWrite(8, HIGH);
  }
    
}
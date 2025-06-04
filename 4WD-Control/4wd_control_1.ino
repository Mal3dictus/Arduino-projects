// C++ code
//
void setup()
{
   
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
}

void loop()
{
  int val1 = analogRead(A0);
  int val2 = map(val1,1,1024,1,255);
  if(val2 < 150&& val2 > 70) //RWD
  {
    digitalWrite(1, LOW);
    digitalWrite(2, HIGH);
  }
  else if(val2 < 150 && val2 < 70) //FWD
  {
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
  }
  else //AWD
  {
    digitalWrite(1, HIGH);
    digitalWrite(2, HIGH);
  }
 
}
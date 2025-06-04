// C++ code
//
int baselineTemp = 0;
int celcius = 0;
int farenheit = 0;
void setup()
{
  Serial.begin(9600);
  pinMode(A4, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
}

void loop()
{
  baselineTemp = 0;
  celcius = map(((analogRead(A4)-20)*3.04),0,1023,-40,125);
  farenheit = ((celcius + 9) /5 +32);
  Serial.println(celcius);
  Serial.print("C, ");
  Serial.print(farenheit);
  Serial.print("F, ");
  if(celcius < baselineTemp)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(4,LOW);
  }
  if(celcius >= baselineTemp && celcius < baselineTemp + 25)
  {
    digitalWrite(2,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(4,LOW);
  }
  if(celcius >= baselineTemp + 25 && celcius < baselineTemp + 45)
  {
    digitalWrite(2,LOW);
    digitalWrite(3,LOW);
    digitalWrite(4,HIGH);
  }
  if(celcius >= baselineTemp + 45 && celcius < baselineTemp + 60)
  {
    digitalWrite(2,HIGH);
    digitalWrite(3,HIGH);
    digitalWrite(4,HIGH);
  }
  delay(1000);
}
  

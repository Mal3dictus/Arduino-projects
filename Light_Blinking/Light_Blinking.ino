


int input;
void setup() {
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}


void loop() {
  while (Serial.available() > 0)   {
  input = Serial.parseInt();
  Serial.println(input);
  }
 for(; input > 0; input--)
 {
   digitalWrite(2, HIGH);  
    delay(200);               
   digitalWrite(2, LOW); 
    delay(200); 
   digitalWrite(2, HIGH);  
    delay(200);  
   digitalWrite(2, LOW);
   
 
    digitalWrite(3, HIGH);   
    delay(500);                     
    digitalWrite(3, LOW);   

   
   
   digitalWrite(4, HIGH);  
    delay(200);               
   digitalWrite(4, LOW); 
    delay(200); 
   digitalWrite(4, HIGH);  
    delay(200);  
   digitalWrite(4, LOW); 

  
    digitalWrite(3, HIGH);   
    delay(500);                     
    digitalWrite(3, LOW);   
    
   

 }    
}

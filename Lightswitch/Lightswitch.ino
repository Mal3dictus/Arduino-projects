

const int button = 2;     
const int led1 =  13; 
const int led2 =  12;
int old = 1;
int leds = 13;

int buttonState = 0;         

void setup() {
  
  pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
  pinMode(button, INPUT_PULLUP);
 Serial.begin(9600);

}

void loop() {
  
  buttonState = digitalRead(button);

  if (old != buttonState) 
  {
 if(buttonState){
  if (leds == led1) {
    Serial.println("LED1");
    digitalWrite(led1,HIGH);
    digitalWrite(led2, LOW);
    leds = led2;
  } 
  else if (leds == led2) {
     Serial.println("LED2");
    digitalWrite(led2,HIGH);
    digitalWrite(led1, LOW);
    leds = led1;
  }
 }

    
    old = buttonState;
    
  }
    

  
}

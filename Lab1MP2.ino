//www.elegoo.com
//2016.12.08

int redPin = 11;
int yellPin = 12;
int greenPin = 13;
int buttonApin = 9;
int speaker=10;


void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(buttonApin, INPUT_PULLUP);  
  pinMode(yellPin,OUTPUT);
  pinMode(greenPin,OUTPUT);
  pinMode(speaker,OUTPUT);
}



void loop() 
{


if (digitalRead(buttonApin) == HIGH){
   
    digitalWrite(redPin,LOW);
    delay(350);
    digitalWrite(redPin,HIGH);
    delay(350);
  
    

}
  
   if (digitalRead(buttonApin) == LOW)
  {

    delay(500);
       
    while(digitalRead(buttonApin)==HIGH){
    digitalWrite(redPin, HIGH);
    delay(17000);
    digitalWrite(speaker,HIGH);
    delay(1000);
    digitalWrite(speaker,LOW);
    delay(2000);
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);
    delay(17000);
    digitalWrite(speaker,HIGH);
    delay(1000);
    digitalWrite(speaker,LOW);
    delay(2000);
    digitalWrite(greenPin,LOW);
    digitalWrite(yellPin,HIGH);
    digitalWrite(speaker,HIGH);
    delay(1000);
    digitalWrite(speaker,LOW);
    delay(2000);
    digitalWrite(yellPin,LOW);
    
   }
    
  
  }


}

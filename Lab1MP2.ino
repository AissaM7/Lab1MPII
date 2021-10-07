//www.elegoo.com
//2016.12.08

int redPin = 11;// declaration of arduino pins
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


if (digitalRead(buttonApin) == HIGH){ //checks if button isnt pressed if not redlight just keeps blinking
 
   
    digitalWrite(redPin,LOW);// Blinks the redlight before the sequence is started
    delay(350);
    digitalWrite(redPin,HIGH);
    delay(350);
  
    

}
  
   if (digitalRead(buttonApin) == LOW) //checks if button pressed if it is it runs the loop
  {

    delay(500);
       
    while(digitalRead(buttonApin)==HIGH){
    digitalWrite(redPin, HIGH);//Turns the red light for 20 seconds 
    delay(17000);
    digitalWrite(speaker,HIGH);//speaker goes off for 1 seconds 3 seconds before light changes
    delay(1000);
    digitalWrite(speaker,LOW);//speaker stops
    delay(2000);
    digitalWrite(redPin,LOW);
    digitalWrite(greenPin,HIGH);//Green light goes off for 20 seconds
    delay(17000);
    digitalWrite(speaker,HIGH);//speaker goes off for 1 seconds 3 seconds before light changes
    delay(1000);
    digitalWrite(speaker,LOW);
    delay(2000);
    digitalWrite(greenPin,LOW);
    digitalWrite(yellPin,HIGH);//Yellow light goes off for 3 seconds
    digitalWrite(speaker,HIGH);//speaker goes off for 1 seconds 3 seconds before light changes
    delay(1000);
    digitalWrite(speaker,LOW);
    delay(2000);
    digitalWrite(yellPin,LOW);//yellow light turns off
    
   }
    
  
  }


}

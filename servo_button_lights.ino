#include <Servo.h>
Servo myservo;
/**********************************/
int ledPin1 = 2;
int ledPin2 = 3;
int ledPin3 = 4;

const int buttonPin = A3;
const int servoPin = 13;
int buttonState = 0;
int pressed = 0; 


/**********************************/
void setup(){
  pinMode(buttonPin,INPUT);
 pinMode(ledPin1,OUTPUT);
 pinMode(ledPin2,OUTPUT);
 pinMode(ledPin3,OUTPUT);
}
/**********************************/

void loop(){
  buttonState = digitalRead(buttonPin);
 
  if (buttonState ==  HIGH){
        
        
        pressed++;
        delay(500);
        
   }
   
  if(pressed == 1){
     digitalWrite(ledPin1,HIGH);
     delay(1000);
     digitalWrite(ledPin1,LOW);
     digitalWrite(ledPin2,HIGH);
     delay(1000);
     digitalWrite(ledPin2,LOW);
     digitalWrite(ledPin3,HIGH);
     delay(2000);
     digitalWrite(ledPin3,LOW);
      myservo.attach(servoPin);
      myservo.write(180);
      delay(3000);
      pressed++;
    }
  if (pressed == 3){
    myservo.attach(servoPin);
    myservo.write(20);
    pressed = 0;
  }
}


/************************************/

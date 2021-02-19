#include <Servo.h>
Servo myservo;
/**********************************/
const int buttonPin = A3;
const int servoPin = 13;
int buttonState = 0;
int pressed = 0; 

/**********************************/
void setup(){
  pinMode(buttonPin,INPUT);
  
}
/**********************************/
void loop(){
  buttonState = digitalRead(buttonPin);
 
  if (buttonState ==  HIGH){
      pressed++;
      delay(500);
   }
   
  if(pressed == 1){
      myservo.attach(servoPin);
      myservo.write(180);
    }
  if (pressed == 2){
    myservo.attach(servoPin);
    myservo.write(10);
    pressed = 0;
  }
}

/************************************/

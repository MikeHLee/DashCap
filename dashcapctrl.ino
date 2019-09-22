#include "IRremote.h"

int buttonApin = 13; // declare push button pins
int buttonBpin = 12;
int buttonCpin = 11;
int buttonDpin = 10;
int buttonEpin = 9;

int receiver = 5; // Signal Pin of IR receiver to Arduino Digital Pin 5

/*-----( Declare objects )-----*/
IRrecv irrecv(receiver);     // create instance of 'irrecv'
decode_results results;      // create instance of 'decode_results'

void translateIR(){

  switch(results.value){
  case 0xFF6897: Serial.println("0");    break;
  case 0xFF30CF: Serial.println("1");    break;
  case 0xFF18E7: Serial.println("2");    break;
  case 0xFF7A85: Serial.println("3");    break;
  case 0xFF10EF: Serial.println("4");    break;
  case 0xFF38C7: Serial.println("5");    break;
  }

} //END translateIR

void setup(){
  Serial.begin(9600);
  pinMode(buttonApin, INPUT_PULLUP);
  pinMode(buttonBpin, INPUT_PULLUP);
  pinMode(buttonCpin, INPUT_PULLUP);  
  pinMode(buttonDpin, INPUT_PULLUP);
  pinMode(buttonEpin, INPUT_PULLUP);

  Serial.println("IR Receiver Button Decode"); 
  irrecv.enableIRIn(); // Start the receiver
}

void loop(){
  if(digitalRead(buttonApin) == LOW){
    Serial.println(1);
  } else if(digitalRead(buttonBpin) == LOW) {
    Serial.println(2);
  } else if(digitalRead(buttonCpin) == LOW) {
    Serial.println(3);
  } else if(digitalRead(buttonDpin) == LOW) {
    Serial.println(4);
  } else if(digitalRead(buttonEpin) == LOW) {
    Serial.println(5);
  } else {
    Serial.println(0);
  }
  
  if (irrecv.decode(&results)){
    translateIR(); 
    irrecv.resume(); // receive the next value
  }  
  
  delay(10);
}

int buttonApin = 13; // declare push button pins
int buttonBpin = 12;
int buttonCpin = 11;
int buttonDpin = 10;
int buttonEpin = 9;


void setup(){
  Serial.begin(9600);
  pinMode(buttonApin, INPUT_PULLUP);
  pinMode(buttonBpin, INPUT_PULLUP);
  pinMode(buttonCpin, INPUT_PULLUP);  
  pinMode(buttonDpin, INPUT_PULLUP);
  pinMode(buttonEpin, INPUT_PULLUP);
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
 
  delay(10);
}

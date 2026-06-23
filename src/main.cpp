#include <Arduino.h>

void setup() {
  // put your setup code here, to run once:
  pinMode(8,INPUT);
  pinMode(9,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(digitalRead(8) == 0)
  {
    digitalWrite(9,HIGH);
  }
  else
  {
    digitalWrite(9,LOW);
  }
}

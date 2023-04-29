#include <Arduino.h>

int potPin = A2;
int yPin = 11;

int potVal; // potentioometr value 0-1023
float LEDVal;

void setup()
{
  // put your setup code here, to run once:
  pinMode(potPin, INPUT);
  pinMode(yPin, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  LEDVal = (255. / 1023.) * potVal;

  analogWrite(yPin, LEDVal);

  Serial.println(LEDVal);
}
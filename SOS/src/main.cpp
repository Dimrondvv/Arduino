#include <Arduino.h>

int greenLed = 12;
int shortDelay = 150;
int longDelay = 500;
int waitForNext = 2000;

void setup()
{
  // put your setup code here, to run once:
  pinMode(greenLed, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 3; i++)
  {
    digitalWrite(greenLed, HIGH);
    delay(shortDelay);
    digitalWrite(greenLed, LOW);
    delay(shortDelay);
  }

  delay(shortDelay);

  for (int i = 0; i < 3; i++)
  {
    digitalWrite(greenLed, HIGH);
    delay(longDelay);
    digitalWrite(greenLed, LOW);
    delay(longDelay);
  }

  delay(shortDelay);

  for (int i = 0; i < 3; i++)
  {
    digitalWrite(greenLed, HIGH);
    delay(shortDelay);
    digitalWrite(greenLed, LOW);
    delay(shortDelay);
  }

  delay(waitForNext);
}
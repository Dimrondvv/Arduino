#include <Arduino.h>

int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;

int buttonNextPin = 2;
int buttonPrevPin = 3;

int buttonStateNext = 0;

int buttonStatePrev = 0;

int waitTime = 1000;

int cnt = 0;

void setup()
{
  // put your setup code here, to run once:
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  pinMode(LED3, OUTPUT);
  pinMode(LED4, OUTPUT);

  pinMode(buttonNextPin, INPUT);
  pinMode(buttonPrevPin, INPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  if (cnt > 15 || cnt < 0)
  {
    cnt = 0;
  }
  else
  {
    switch (cnt)
    {
    case 0:
      delay(waitTime);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);
      cnt++;

      break;

    case 1:
      delay(waitTime);
      digitalWrite(LED1, HIGH);
      cnt++;

      break;

    case 2:
      delay(waitTime);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
      cnt++;

      break;

    case 3:
      delay(waitTime);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      cnt++;

      break;

    case 4:
      delay(waitTime);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, HIGH);
      cnt++;

      break;

    case 5:
      delay(waitTime);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, HIGH);
      cnt++;

      break;

    case 6:
      delay(waitTime);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      cnt++;

      break;

    case 7:
      delay(waitTime);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      cnt++;

      break;

    case 8:
      delay(waitTime);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, HIGH);
      cnt++;

      break;

    case 9:
      delay(waitTime);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, HIGH);
      cnt++;

      break;

    case 10:
      delay(waitTime);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, HIGH);
      cnt++;

      break;

    case 11:
      delay(waitTime);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, HIGH);
      cnt++;

      break;

    case 12:
      delay(waitTime);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);
      cnt++;

      break;

    case 13:
      delay(waitTime);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);
      cnt++;

      break;

    case 14:
      delay(waitTime);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);
      cnt++;

      break;

    case 15:
      delay(waitTime);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);
      cnt++;

      break;
    default:
      break;
    }
  }
}
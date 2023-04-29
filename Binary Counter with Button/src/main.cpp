#include <Arduino.h>

int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 10;

int buttonNextPin = 2;
int buttonPrevPin = 3;

int buttonStateNext = 0;
int buttonStatePrev = 0;

int prestate = 0;

int waitTime = 0;

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
  buttonStateNext = digitalRead(buttonNextPin);
  buttonStatePrev = digitalRead(buttonPrevPin);

  if (buttonStateNext == HIGH && prestate == 0)
  {
    cnt++;
    prestate = 1;
  }
  else if (buttonStatePrev == HIGH && prestate == 0)
  {
    cnt--;
    prestate = 1;
  }
  else if (buttonStateNext == LOW && buttonStatePrev == LOW)
  {
    prestate = 0;
  }

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

      break;

    case 1:
      delay(waitTime);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);

      break;

    case 2:
      delay(waitTime);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);

      break;

    case 3:
      delay(waitTime);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, LOW);

      break;

    case 4:
      delay(waitTime);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, LOW);

      break;

    case 5:
      delay(waitTime);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, LOW);

      break;

    case 6:
      delay(waitTime);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, LOW);

      break;

    case 7:
      delay(waitTime);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, LOW);

      break;

    case 8:
      delay(waitTime);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, HIGH);

      break;

    case 9:
      delay(waitTime);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, HIGH);

      break;

    case 10:
      delay(waitTime);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, HIGH);

      break;

    case 11:
      delay(waitTime);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, LOW);
      digitalWrite(LED4, HIGH);

      break;

    case 12:
      delay(waitTime);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);

      break;

    case 13:
      delay(waitTime);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, LOW);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);

      break;

    case 14:
      delay(waitTime);
      digitalWrite(LED1, LOW);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);

      break;

    case 15:
      delay(waitTime);
      digitalWrite(LED1, HIGH);
      digitalWrite(LED2, HIGH);
      digitalWrite(LED3, HIGH);
      digitalWrite(LED4, HIGH);

      break;
    default:
      break;
    }
  }
}
#include <Arduino.h>

const int sensorPin = A0;
const int sensorPower = 2;

// Sensor reading
int sensor;
float moist_Percentage;

// delay between sensor readings
const int delayTime = 1000;

void setup()
{
  // put your setup code here, to run once:
  pinMode(sensorPower, OUTPUT);

  Serial.begin(9600);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(sensorPower, HIGH);
  delay(10);

  sensor = analogRead(sensorPin);
  moist_Percentage = (100 - ((sensor / 1023.00) * 100));

  digitalWrite(sensorPower, LOW);

  Serial.println(moist_Percentage);

  delay(delayTime);
}

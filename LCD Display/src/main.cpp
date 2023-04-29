#include <Arduino.h>
#include <LiquidCrystal.h>
#include <DHT.h>
#include <Adafruit_Sensor.h>

#define DHT11PIN 7
#define DHTTYPE DHT11

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
DHT dht(DHT11PIN, DHTTYPE);

float humidity;
float Celsius;

String hum = "Hum (%): ";
String temp = "Temp C: ";

void setup()
{
  // put your setup code here, to run once:
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  dht.begin();
  // Print a message to the LCD.
  // lcd.print("Witam");
}

void loop()
{
  // put your main code here, to run repeatedly:
  delay(2000);

  humidity = dht.readHumidity();
  Celsius = dht.readTemperature();

  lcd.setCursor(0, 0);
  lcd.print(hum + humidity);
  // set the cursor to column 0, line 1
  // (note: line 1 is the second row, since counting begins with 0):
  lcd.setCursor(0, 1);
  // print the number of seconds since reset:
  lcd.println(temp + Celsius + "   ");
}
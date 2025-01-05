#include<ESP8266WiFi.h>
#include<DHT.h>
DHT sensor(D2, DHT11);
float hum, temp;
void setup() 
{
 Serial.begin(9600);
 sensor.begin();
}
void loop() 
{
hum=sensor.readHumidity();
temp=sensor.readTemperature();
Serial.print("Humidity="); Serial.print(hum);
Serial.print("Temperature="); Serial.print(temp);
delay(5000);
}

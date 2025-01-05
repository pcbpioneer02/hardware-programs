#include<ESP8266WiFi.h>
char* ssid = "xxxxxxx"; // wifi name
char* pass = "yyyyyyy"; // wifi password
void setup() 
{
 Serial.begin(9600);
 Serial.println("Connecting to wifi....");
 WiFi.begin(ssid, pass); 
 
 while(WiFi.status()!=WL_CONNECTED)
 {
 Serial.print(".");
 delay(500);
 }
 Serial.println("Wifi connected...");
 Serial.println(WiFi.localIP());
}
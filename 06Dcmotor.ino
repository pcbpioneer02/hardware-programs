#include<ESP8266WiFi.h>
void setup()
 {
 Serial.begin(9600);
 WiFi.mode(WIFI_STA);
 }
void loop()
 {
 Serial.println("Scanning the networks....");
 int n=WiFi.scanNetworks();
 if(n==0)
 {
 Serial.println("No networks present");
 }
 else 
 {
 for(int i=0; i<n; i++)
  {
 Serial.print(i+1);
 Serial.print(":");
 Serial.print(WiFi.SSID(i)); // service set identifier
 Serial.print("(");
 Serial.print(WiFi.RSSI(i)); // Receive Signal Indicator
 Serial.print(")");
 Serial.println(""); 
 }
 }
 Serial.println(""); 
 delay(5000);
 
 }

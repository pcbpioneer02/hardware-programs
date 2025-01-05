#include <BlynkSimpleEsp8266.h>
char auth[] = "Your_Blynk_Auth_Token";
char ssid[] = "Your_WiFi_SSID";
char pass[] = "Your_WiFi_Password";
const int smokeSensorPin = A0; // Analog pin for the smoke sensor
int smokeSensorValue = 0;
void setup()
 {
 Serial.begin(9600);
 Blynk.begin(auth, ssid, pass);
}
void loop() 
{
 Blynk.run();
 sendSmokeData();
}
void sendSmokeData()
 {
 smokeSensorValue = analogRead(smokeSensorPin);
 Serial.print("Smoke Sensor Value: ");
 Serial.println(smokeSensorValue);
 Blynk.virtualWrite(V0, smokeSensorValue); // Update Gauge widget with 
sensor value
}

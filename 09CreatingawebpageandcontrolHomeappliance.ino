#define BLYNK_PRINT Serial 
// Blynk app will be able to print in Serial monitor
#include<BlynkSimpleEsp8266.h>
char ssid[] = "AIRONET-VIJAY";
char pass[]="vijay@6738";
char auth[]="W-DamQoAB0QUfPV4w6P4maSos0SQlaC6";
void setup() 
{
 Serial.begin(9600);
 Blynk.begin(auth, ssid, pass);
}
void loop()
 {
 Blynk.run();
}
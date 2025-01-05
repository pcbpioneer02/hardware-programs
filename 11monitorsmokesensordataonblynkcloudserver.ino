#include <DHT.h>
#include <BlynkSimpleEsp8266.h>
char auth[] = "Your_Blynk_Auth_Token";
char ssid[] = "Your_WiFi_SSID";
char pass[] = "Your_WiFi_Password";
#define DHTPIN 2 // Digital pin connected to the DHT11 sensor
#define DHTTYPE DHT11 // DHT sensor type
DHT dht(DHTPIN, DHTTYPE);
void setup() {
 Serial.begin(9600);
 Blynk.begin(auth, ssid, pass);
 dht.begin();

}
void loop() {
 Blynk.run();
 readDHTData();
}
void readDHTData() {
 float temperature = dht.readTemperature();
 float humidity = dht.readHumidity();
 if (!isnan(temperature) && !isnan(humidity)) {
 Serial.print("Temperature: ");
 Serial.print(temperature);
 Serial.print(" °C | Humidity: ");
 Serial.print(humidity);
 Serial.println(" %");
 Blynk.virtualWrite(V1, temperature); // Update Temperature widget
 Blynk.virtualWrite(V2, humidity); // Update Humidity widget
 } else {
 Serial.println("Failed to read from DHT sensor!");
 }
 delay(5000); // Update every 5 seconds (adjust as needed)
}

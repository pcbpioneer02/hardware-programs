#include<ESP8266WiFi.h>
char* ssid = "VNG J6 hotspot"; // wifi name
char* pass = "vngvngvng"; // wifi password
WiFiServer server(80); // 80 is port no of HTTP protocol
void setup() {
 Serial.begin(9600);
 pinMode(D2, OUTPUT);
 Serial.println("Connecting to wifi....");
 WiFi.begin(ssid, pass); 
 while(WiFi.status()!=WL_CONNECTED){
 Serial.print(".");
 delay(500);
 }
 Serial.println("Wifi connected...");
 server.begin();
 Serial.println(WiFi.localIP());
} 
void loop() {
WiFiClient client = server.available(); // Laptop- web browser
if(!client){
 return;
}
 //Serial.println("New client");
 String request = client.readStringUntil('\r');
 Serial.println(request);
 if(request.indexOf("/on")!=-1){
 digitalWrite(D2, HIGH);
 Serial.println("LED ON"); 
 }
 if(request.indexOf("/off")!=-1)
 {
 digitalWrite(D2, LOW);
 Serial.println("LED OFF"); 
 }
client.println("<html><title>Local Web 
Server</title><center>");
client.println("<h1>Local Web Server Controlled LED</h1>");
client.println("<a href='/on'><button> LED ON 
</button></a>");
client.println("<a href='/off'><button> LED OFF 
</button></a>");
client.println("</center></html>");
 }

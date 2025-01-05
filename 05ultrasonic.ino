void setup() {
 pinMode(D1, OUTTPUT); 
Serial.begin(9600);
}
void loop() 
{
 digitalWrite(D1, LOW); 
 Serial.println("Current Flowing"); 
 delay(5000); 
 digitalWrite(D1, HIGH); 
 Serial.println("Current not Flowing"); 
 delay(5000);
}

void setup()
 {
 pinMode(D2,OUTPUT); // Trigger Input
 pinMode(D1,INPUT); // Echo Output
 Serial.begin(9600);
}
void loop()
 {
 digitalWrite(D2,HIGH);
 delayMicroseconds(10);
 digitalWrite(D2,LOW);
 delayMicroseconds(10);
 long time = pulseIn(D1,HIGH); 
// reads the pulse and convert in microseconds
 float cm = time/29/2;
 float inch = time/74/2;
 Serial.print(cm);Serial.print(",");Serial.println(inch);
 delay(2000);
}

void setup()
 {
Serial.begin(9600);
pinMode(A0, INPUT);
pinMode(D3, OUTPUT);
}
void loop()
 {
int data = analogRead(A0);
Serial.println(data);
analogWrite(D3, data);
delay(1000);
}
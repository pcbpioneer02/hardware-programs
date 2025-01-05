void setup()
{
pinMode(D1, INPUT);
Serial.begin(9600); // baud rate
pinMode(D2, OUTPUT); // LED is connected to D2
}
void loop()
{
int data = digitalRead(D1);
digitalWrite(D2, data);
Serial.println(data);
delay(1000);
}

const int d = 7;
void setup()
{
    ​pinMode(d, INPUT);
    ​Serial.begin(9600);
}
void loop()
{
    ​int sensorVal = digitalRead(d);
    ​Serial.println(sensorVal);
    ​if(sensorVal == HIGH) Serial.println("Khong co Lua");
    else Serial.println("Co lua”);
}

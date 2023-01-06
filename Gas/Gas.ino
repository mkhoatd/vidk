const int MQ2pin = A0;

void setup()
{
    Serial.begin(9600);
    Serial.println("Gas sensor warming up!");
    delay(20000); // cho phep MQ-2 khoi dong
}

void loop()
{
    int sensorValue = analogRead(MQ2pin); // read analog input pin 0

    Serial.print("Sensor Value: ");
    Serial.print(sensorValue);
    if (sensorValue > 200)
        Serial.print("!! Smoke detected !!");
    Serial.println("");
    delay(1000);
}

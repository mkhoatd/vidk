const int d = 7;

void setup()
{
    pinMode(d, INPUT);
    Serial.begin(9600);
}

void loop()
{
    int vd = digitalRead(d);
    if (vd)
        Serial.println("Khong co rung!");
    else
        Serial.println("Co rung.");
    delay(500);
}

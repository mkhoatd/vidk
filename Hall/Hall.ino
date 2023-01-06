const int d = 7;
const int a = A0;

void setup()
{
    pinMode(d, INPUT);
    pinMode(a, INPUT);
    Serial.begin(9600);
}

void loop()
{
    int vd = digitalRead(d);
    int va = analogRead(a);
    Serial.print("Vd: ");
    Serial.println(vd);
    Serial.print("Va: ");
    Serial.println(va);
    if (vd)
        Serial.println(“Khong co tu.”);
    else
        Serial.println(“Co tu.”);
    delay(200);
}

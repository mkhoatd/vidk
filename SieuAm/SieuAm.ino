const int trigPin = 6; // TRIG gắn vào digital 6
const int echoPin = 7; // ECHO gắn vào digital 7
void setup()
{
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}

void loop()
{
    digitalWrite(trigPin, LOW); // set LOW một lúc để clear
    delayMicroseconds(2);
    //
    digitalWrite(trigPin, HIGH); // set trigPin HIGH để phát tín hiệu
    delayMicroseconds(10);
    //
    digitalWrite(trigPin, LOW); // set trigPin về LOW, dừng phát
    //
    int duration = pulseIn(echoPin, HIGH); // đọc độ dài pulse ở echoPin
    //
    double cm = (double)duration / 2 / 29.1; // chia cho hằng số
    Serial.print(cm);
    Serial.println("cm");
    // cm lúc này là khoảng cách từ Sensor đến
    // bức tường gần nhất ở Centimeter.
}

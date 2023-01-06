const int enA = 9; // chân digital có dấu ~
const int in1 = 8;
const int in2 = 7;

void setup()
{
    pinMode(enA, OUTPUT);
    pinMode(in1, OUTPUT);
    pinMode(in2, OUTPUT);

    // lúc đầu tắt motor
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
}

void loop()
{
    // quay tới ở max tốc độ
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    analogWrite(enA, 255);
    delay(2000);

    // quay lui, tốc độ tăng dần
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    for (int sp = 0; sp < 256; sp++)
    {
        analogWrite(enA, sp);
        delay(20);
    }

    // tắt động cơ trong 2s
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    delay(2000);
}

#include <Servo.h>

Servo myservo;

const int ServoPin = 9;
void setup()
{
    myservo.attach(ServoPin);
}
int pos = 0;

void loop()
{
    for (pos = 0; pos <= 180; pos += 1)
    {
        myservo.write(pos);
        delay(15);
    }
    for (pos = 180; pos >= 0; pos -= 1)
    {
        myservo.write(pos);
        delay(15);
    }
}

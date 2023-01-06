int a = A0; // analog pin vào A0
int d = 7;  // digital pin vào 7

void setup()
{
  pinMode(a, INPUT);
  pinMode(d, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int va = analogRead(a);
  int vd = digitalRead(d);
  Serial.print("Analog = ");
  Serial.println(va);
  Serial.print("Digital = ");
  Serial.println(vd);
  if (vd == 0)
  {
    Serial.println("Troi sang");
  }
  else
  {
    Serial.println("Troi toi");
  }
  delay(500);
}

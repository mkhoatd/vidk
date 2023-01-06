const int vx = A0;
const int vy = A1;
const int sw = 7;

void setup()
{
  pinMode(vx, INPUT);
  pinMode(vy, INPUT);
  pinMode(sw, INPUT_PULLUP); // neu chi la INPUT thi phai mac dien tro
  Serial.begin(9600);
}

void loop()
{
  int x = analogRead(vx);
  int y = analogRead(vy);
  int s = digitalRead(sw); // HIGH neu khong bam, LOW neu bam
  Serial.print("X = ");
  Serial.println(x);
  Serial.print("Y = ");
  Serial.println(y);
  Serial.print("s = ");
  Serial.println(s);
  delay(500);
}

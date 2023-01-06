const int d = 7; // d0 vao Digital 7
const int a = A0; // a0 vao Analog 0

void setup() {
  pinMode(d, INPUT); pinMode(a, INPUT); Serial.begin(9600);
}

void loop() {
  int va = analogRead(a); // WHITE gia thi thap | else gia tri cao
  int vd = digitalRead(d); // WHITE thi LOW | else HIGH
  Serial.print(va); Serial.print(" | "); Serial.println(vd);
  if (vd == LOW) Serial.println("Da thay White LINE!!");
  else Serial.println("Khong thay LINE..");
  delay(100);
}

#define sensor 10
#define led 7
boolean val=1;//Mặc định không phát hiện âm thanh
boolean ledStatus=0;//Mặc định không bật đèn
void setup()
{
  pinMode(sensor,INPUT);
  pinMode(led,OUTPUT);
}
void loop()
{
  val=digitalRead(sensor);
  if(val==0) ledStatus = 1;
  digitalWrite(led,ledStatus);
  delay(100);//Delay tí cho nó ổn định
}
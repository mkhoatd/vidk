#include <dht.h>

int DHT_IN = 7; // chan Digital input cua sensor
dht dht_sensor;

void setup() {
  Serial.begin(9600);
}
void loop() {
  int check = dht_sensor.read11(DHT_IN); // DHT11
  float h = dht_sensor.humidity; // % do am
  float t = dht_sensor.temperature; // nhiet do C
  Serial.print("Do am: "); Serial.print(h); Serial.println(" %");
  Serial.print("Nhiet do: "); Serial.print(t); Serial.println(" C");
  delay(500);
}

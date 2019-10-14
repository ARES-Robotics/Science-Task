#include<dht.h>
dht DHT;

// if you require to change the pin number, Edit the pin with your arduino pin.

#define DHT11_PIN 3

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  int chk = DHT.read11(DHT11_PIN);
  Serial.print(" Humidity (in percentage) " );
  Serial.print(DHT.humidity);
  Serial.print("    Temparature (in C) ");
  Serial.println(DHT.temperature);

  delay(2000);
}

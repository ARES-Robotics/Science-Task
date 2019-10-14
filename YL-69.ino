//HL-69 Soil Moisture Sensor

#define YL_ANALOG A0
#define YL_DIGITAL 3

void setup() {
  // put your setup code here, to run once:
  pinMode(YL_ANALOG,INPUT);
  pinMode(YL_DIGITAL,INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int val=analogRead(YL_ANALOG);
  int percent=map(val,0,1023,0,100);
  Serial.print("Soil Moisture Content (in percentage): ");
  Serial.println(100-percent);
  delay(2000);
}

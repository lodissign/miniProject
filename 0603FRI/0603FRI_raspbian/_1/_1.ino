int fromRasp=0;

void setup() {
  Serial.begin(9600);
}
void loop() {
  //Serial.println("Hello from Arduino!");
  //delay(1000);
  
  fromRasp=Serial.read();
  Serial.println(fromRasp);
}

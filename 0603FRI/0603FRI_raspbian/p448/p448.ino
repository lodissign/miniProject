void setup(){
  Serial.begin(9600);
}
void loop(){
  for(byte n=0;n<255;n++){
    Serial.println(String(n));
    delay(100);
  }
}

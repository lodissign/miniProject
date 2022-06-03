void setup(){
  Serial.begin(9600);
}

void loop(){
  if(Serial.available()){
    float data = Serial.read();
    
    Serial.write(data);
  }
}

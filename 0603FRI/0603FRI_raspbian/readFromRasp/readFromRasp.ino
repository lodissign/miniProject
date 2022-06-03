char data[20];
char dataIndex=0;

void setup() {
  Serial.begin(9600);
}
void loop() { 
  while(Serial.available()){
    data[dataIndex]=Serial.read();
    dataIndex++;
  }
  
  int dataInt= atoi(data);
  Serial.println(dataInt);
  
  delay(100);
  
  for(int a=0;a<21;a++){
    data[a]=NULL;
  }
  dataIndex=0;
}

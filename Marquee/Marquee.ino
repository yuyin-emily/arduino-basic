void setup() {
  // put your setup code here, to run once:
  
  for(int i=2;i<=6;i++)
  {
    pinMode(i,OUTPUT);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:
  
  for(int i=2;i<=6;i++)
  {
    digitalWrite(i,HIGH);
    delay(1000);
    digitalWrite(i,LOW);
  }
  
}

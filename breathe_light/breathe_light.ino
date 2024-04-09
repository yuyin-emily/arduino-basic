void setup() {
  // put your setup code here, to run once:
  
  pinMode(9,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<=25;i++)
  {
    analogWrite(9,i*10);
    delay(50);
  }
  for(int i=0;i<=25;i++)
  {
    analogWrite(9,(25-i)*10);
    delay(50);
  }
  /*
  for(int i=0;i<=5;i++)
  {
    analogWrite(9,i*50);
    delay(500);
  }
  for(int i=0;i<=5;i++)
  {
    analogWrite(9,(5-i)*50);
    delay(500);
  }
  */
}

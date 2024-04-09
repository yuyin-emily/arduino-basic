int output[]={5,6,9,10,11};

void setup() {
  // put your setup code here, to run once:

  for(int i=0;i<5;i++)
  {
    pinMode(output[i],OUTPUT);
  }
  
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<5;i++)
  {
    for(int j=0;j<=25;j++)
    {
      analogWrite(output[i],j*10);
      delay(40);
    }
    for(int j=0;j<=25;j++)
    {
      analogWrite(output[i],(25-j)*10);
      delay(40);
    }
  }
  for(int i=3;i>0;i--)
  {
    for(int j=0;j<=25;j++)
    {
      analogWrite(output[i],j*10);
      delay(40);
    }
    for(int j=0;j<=25;j++)
    {
      analogWrite(output[i],(25-j)*10);
      delay(40);
    }
  }
}

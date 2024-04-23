void setup() {
  for (int i=0;i<8;i++)
  {
    pinMode(i+2, OUTPUT);
  }
}

void loop() {
  for (int i=0;i<8;i++)
  {
    for (int j=0;j<8-i;j++)
    {
      shin(j+1);
    }
    for (int j=0;j<=i;j++)
    {
      digitalWrite(9-i, HIGH);
    }
  }
  delay(300);
  for (int i=0;i<8;i++)
  {
    digitalWrite(i+2, LOW); 
  }
  delay(300);
}

void shin(int l){
  digitalWrite(l, HIGH);
  delay(300);
  digitalWrite(l, LOW); 
  delay(300);
}

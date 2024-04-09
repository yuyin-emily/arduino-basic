int light=0;
void setup() {
  pinMode(A1,INPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
}
void loop() {
  int buttonState1 = digitalRead(A1);
  switch(buttonState1)
  {
    case 0:
      digitalWrite((light%4)+2,LOW);
      break;
    case 1:
      digitalWrite((light%4)+2,LOW);
      light++;
      digitalWrite((light%4)+2,HIGH);
      break;
    default:
      digitalWrite(2,LOW);
      digitalWrite(3,LOW);
      digitalWrite(4,LOW);
      digitalWrite(5,LOW);
      break;
  }
  delay(1000);
}

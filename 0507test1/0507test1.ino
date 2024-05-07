int buttonState1 = 0;
int buttonState2 = 0;
int buttonState3 = 0;
int now = 1;
int only = 0;
int all = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(10, INPUT);
  pinMode(11, INPUT);
  pinMode(12, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  digitalWrite(2, HIGH);
  digitalWrite(3, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonState1 = digitalRead(10);
  buttonState2 = digitalRead(11);
  buttonState3 = digitalRead(12);
  if (buttonState1 == HIGH and buttonState2 == HIGH and buttonState3 == HIGH){
    all++;
    q6();
  }
  else if (buttonState2 == HIGH and buttonState3 == HIGH){
    q5();
  }
  else if (buttonState1 == HIGH){
    int sensorValue = analogRead(A0);
    q2(sensorValue);
  }
  else if(buttonState2 == HIGH){
    now=(now+1)%3;
    q3();
  }
  else if(buttonState3 == HIGH){
    q4();
  }
}

void q2(int num){
  if(num<1024/3)
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
    now=1;
  }
  else if(num<1024/3*2)
  {
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(5, LOW);
    now=2;
  }
  else
  {
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    now=3;
  }
}

void q3(){
  if(now==1)
  {
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
  else if(now==2)
  {
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(5, LOW);
  }
  else
  {
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
  }
  delay(500);
}

void q4(){
  for(int i=0;i<4;i++)
  {
    if (i == only)
    {
      digitalWrite(i+2, HIGH);
    }
    else
    {
      digitalWrite(i+2, LOW);
    }
  }
  delay(100);
  only = (only+1)%4;
}

void q5(){
  for(int i=0;i<4;i++)
  {
    if (i == only)
    {
      digitalWrite(i+2, HIGH);
    }
    else
    {
      digitalWrite(i+2, LOW);
    }
  }
  delay(100);
  only = only-1;
  if(only<0){
    only = 3;
  }
}

void q6(){
  if(all%2==0){
    digitalWrite(2, HIGH);
    digitalWrite(3, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(5, HIGH);
  }
  else{
    digitalWrite(2, LOW);
    digitalWrite(3, LOW);
    digitalWrite(4, LOW);
    digitalWrite(5, LOW);
  }
  delay(100);
}
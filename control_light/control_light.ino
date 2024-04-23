long int nums[9]={};

void setup() {
  for (int i=0;i<8;i++)
  {
    pinMode(i+2, OUTPUT);
  }
  pinMode(10,INPUT);
  nums[0]=1;
  for(int i=1;i<9;i++){
    nums[i]=nums[i-1]*10;
  }
  Serial.begin(9600);
}

void loop() {
  int buttonState = 0;
  buttonState = digitalRead(10);
  if (buttonState == HIGH) {
    int sensorValue = analogRead(A3);
    int mappedValue = map(sensorValue, 0, 1023, 0, 9);
    shownum(nums[mappedValue]);
  }
}

void shownum(long int num){
  int digits[8] ={};
  for(int i=0;i<8;i++){
    digits[i]=num%10;
    num/=10;
  }
  for(int i=0;i<8;i++){
    if(digits[i]==1){
      digitalWrite(i+2,HIGH);
    }
    else{
      digitalWrite(i+2,LOW);
    }
  }
}
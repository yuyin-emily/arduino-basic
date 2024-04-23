const int buttonPin = 10;  
const int ledPin1 = 5;  
const int ledPin2 = 6;
int buttonState = 0;
int state = 0;

void setup() {

  pinMode(buttonPin, INPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);

}

void loop() {

  buttonState = digitalRead(buttonPin);
  if (buttonState == HIGH) {
    state+=1;
    if(state%3 == 0){
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, LOW);
    }
    else if(state%3 == 1){
      digitalWrite(ledPin1, HIGH);
    }
    else{
      digitalWrite(ledPin1, LOW);
      digitalWrite(ledPin2, HIGH);
    }
    delay(500);
  }
}

int output[]={5,6,9,10,11};

void setup() {
  Serial.begin(9600);
  for(int i=0;i<5;i++)
  {
    pinMode(output[i],OUTPUT);
  }
  
}

void loop() {
  if(Serial.available())
  {
    String data = Serial.readString();
    if(data.length()>0)
    {
      int pin = data.substring(0,data.indexOf(',')).toInt();
      int value = data.substring(data.indexOf(',')+1).toInt();
      bool in = false;
      bool over = true;
      Serial.print("PIN:");
      Serial.println(pin);
      Serial.print("value:");
      Serial.println(value);
      for(int i=0;i<5;i++)
      {
        if(pin == output[i])
        {
          in = true;
          break;
        }
      }
      if(not in)
      {
        Serial.println("此腳位沒有LED燈");
      }
      if(value>255 || value<0)
      {
        Serial.println("亮度超過數值範圍，無法改變亮度");
        over = false;
      }
      if(in && over)
      {
        analogWrite(pin,value);
      }
      
    }
  }
}

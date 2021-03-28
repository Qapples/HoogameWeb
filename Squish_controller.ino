
void setup() {
  // put your setup code here, to run once:
  pinMode(16, INPUT_PULLUP);
  Serial.begin(9600); 
  while (!Serial) {
    
  }
  
}

  int buttonState=0;
  bool jump=false;
void loop() {
  
  // put your main code here, to run repeatedly:
  int pinVal=digitalRead(16);
  delay(10);
  if (pinVal==LOW){
    
    jump=true;
    Serial.flush();
    Serial.write(jump);
   
    //Serial.println(jump);
    delay(100);
  }

   jump=false;
}

void setup() {
  // put your setup code here, to run once:
   pinMode(4, INPUT_PULLUP);
  Serial.begin(9600);  
  while (!Serial) {
    
  }
  
}

  
bool slap=false;

void loop() {
  
  // put your main code here, to run repeatedly:
  int pinVal=digitalRead(4);
  delay(10);
  if (pinVal==HIGH){
    
    slap=true;
    Serial.flush();
    Serial.write(slap);
   
    //Serial.println(slap);
    delay(100);
  }

   slap=false;
}

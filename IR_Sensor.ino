void setup() 
{
  Serial.begin(9600);//enable serial monitor
  pinMode(2, INPUT);//define arduino pin
  pinMode(3, OUTPUT);//define arduino pin
  
}

void loop() 
{
  bool value = digitalRead(2);//saves the boolean value
  if(value = 1)
  {
    Serial.println("Card Detected");
    digitalWrite(3,HIGH);//LED on
    
  }
  else
  {
    Serial.println("Card Removed");
    digitalWrite(3,LOW);//LED off
  }

}

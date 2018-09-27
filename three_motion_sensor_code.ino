void setup() 
{
  Serial.begin(9600);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);  
}

void loop() 
{
  if (digitalRead(7) == HIGH || digitalRead(8) == HIGH || digitalRead(9) == HIGH ) 
  {
    Serial.println("Active");
  }
  else 
  {
    Serial.println("Inactive");
  }
  delay(1000);
}

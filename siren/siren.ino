void setup()
{
 pinMode(13,OUTPUT);
 pinMode(8,OUTPUT); 
}


void loop()
{
  for(int i = 0; i < 10; i++)
  {
    digitalWrite(13,HIGH);
    delay(200);
    digitalWrite(13, LOW);
    digitalWrite(8, HIGH);
    delay(200);
    digitalWrite(8,LOW);
  }

  digitalWrite(13, HIGH);
  digitalWrite(8, HIGH);
  delay(1000);
}

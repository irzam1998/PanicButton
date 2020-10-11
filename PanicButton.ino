char notification;
void setup() 
{ 
  pinMode(2, OUTPUT);
  pinMode(4, INPUT_PULLUP);
  Serial.begin(9600);
}

void loop() 
{
  if(digitalRead(4) == LOW)
  {
    delay(30); 
    if(digitalRead(4) == LOW)
    {
    Serial.println("D");
    }
  }
  notification = Serial.read();
  if (notification=='1')
  { 
    digitalWrite(2, HIGH);
  }
  else if (notification=='0')
  {
    digitalWrite(2, LOW);
  }
}

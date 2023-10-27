int Pot=0;

void setup()
{
  pinMode(3, OUTPUT);
}

void loop()
{
  Pot=digitalRead(3);
  
  if(Pot == HIGHT){
    digitalWrite(3, HIGH);
  }
  else{
    digitalWrite(3, LOW);
  }   
}


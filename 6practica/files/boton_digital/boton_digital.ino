int lectura;
void setup() {
  pinMode(3, OUTPUT);
}
void loop()
{
  lectura=analogRead(A2);
  
  if(lectura<=512){
    digitalWrite(3, HIGH);
  }
  else if (lectura>512){
    digitalWrite(3, LOW);
  }   
}


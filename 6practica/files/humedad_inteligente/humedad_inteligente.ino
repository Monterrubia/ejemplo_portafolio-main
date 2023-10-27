#define sensor A1
#define ledRojo 3
int valor = 0;
void setup()
{
   pinMode(sensor, INPUT);
   pinMode(ledRojo, OUTPUT);
}
void loop()
{
    int valor = map(analogRead(sensor), 0, 1023, 100, 0);
    if(valor<=100){
  digitalWrite(ledRojo, HIGH);
}
else{
  digitalWrite(ledRojo, LOW);
}
}


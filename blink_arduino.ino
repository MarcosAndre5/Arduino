int led = 13;

void setup(){
  pinMode(led, OUTPUT);
}

void loop(){
  int tam = 10, umSegundo = 1000, doisSegundos = 2000;
  
  for(int i = 0; i < tam; i++){
    digitalWrite(led, HIGH);
    delay(umSegundo);
    digitalWrite(led, LOW);
    delay(umSegundo);
  }
  
  for(int i = 0; i < tam; i++){
    digitalWrite(led, HIGH);
    delay(doisSegundos);
    digitalWrite(led, LOW);
    delay(doisSegundos);
  }
}
const int led = 13;   
const int botao = 10; 
 

int estadoBotao = 0;

void setup() {
  pinMode(led,OUTPUT);  
  pinMode(botao,INPUT); 
}
 

void loop()
{  
  estadoBotao = digitalRead(botao);          
  if (estadoBotao == HIGH) {
    piscaLed();
  } else {
    digitalWrite(led,LOW);
  }       
}

void piscaLed()
{
    digitalWrite(led,HIGH);
    delay(1000);
    digitalWrite(led,LOW);
    delay(1000);
     
}

 

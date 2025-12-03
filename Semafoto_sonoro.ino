int vermelho = 13;

int amarelo = 12;

int verde = 11;

int buzzer = 2;

void setup()
{
  
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(buzzer, OUTPUT);
}

void loop()
{
  digitalWrite(vermelho, HIGH);
  delay(5000);
  digitalWrite(vermelho, LOW);
  delay(500); 
  digitalWrite(amarelo, HIGH);
  delay(2000);
  digitalWrite(amarelo, LOW);
  delay(500); 
  digitalWrite(verde, HIGH);
  
  for (int i = 0; i < 10; i++) {
    tone(buzzer, 1000); 
    delay(200);          
    noTone(buzzer);      
    delay(300);          
  }
  
  digitalWrite(verde, LOW);
  delay(500); 

}
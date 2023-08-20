//DECLARAÇÃO DE VARIÁVEIS E CONSTANTES

//Rua A
int Vermelho = 8; 
int Amarelo = 9;
int Verde = 10;

//Rua B
int Red = 5; 
int Yellow = 6;
int Green = 7;

//CONFIGURANDO OS PINOS

void setup() {
  pinMode(Vermelho, OUTPUT);
  pinMode(Amarelo, OUTPUT);
  pinMode(Verde, OUTPUT);
  pinMode(Green, OUTPUT);
  pinMode(Yellow, OUTPUT);
  pinMode(Red, OUTPUT);
}

//PROGRAMA (ONDE O FLUXOGRAMA É IMPLEMENTADO)

void loop() {
  digitalWrite(Vermelho, HIGH); // Rua A
  digitalWrite(Green, HIGH); // Rua B
  delay(3000); // Aguardar 3 segundos
  
  digitalWrite(Green, LOW); // Rua B
  digitalWrite(Yellow, HIGH); // Rua B
  delay(2000); // Aguardar 2 segundos
  
  digitalWrite(Yellow, LOW); //Rua B
  digitalWrite(Vermelho, LOW); // Rua A
  digitalWrite(Red, HIGH); // Rua B
  digitalWrite(Verde, HIGH); // Rua A
  delay(3000); // Aguardar 3 segundos
  
  digitalWrite(Verde, LOW); // Rua A
  digitalWrite(Green, LOW); // Rua A
  digitalWrite(Amarelo, HIGH); // Rua A
  delay(2000); // Aguardar 2 segundos
  
  digitalWrite(Amarelo, LOW); //Rua A
  digitalWrite(Vermelho, HIGH); // Rua A
  digitalWrite(Red, LOW); // Rua B
  digitalWrite(Green, HIGH); // Rua B
}

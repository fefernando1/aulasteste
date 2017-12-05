//Criando as variáveis
//int = integer, numeros inteiros
//Dois iguais, comparação, um igual adicionando valor

int pinoledvermelho = 12;
int pinoledplaca = 13;
int pinoledvermelho2 = 11;

// Setup é a função/trecho de código que é executado uma única vez ao gravar o código no arduino
void setup() {

// put your setup code here, to run once:
// Função que configura a porta sendo INPUT ou OUTPUT
  
  pinMode(pinoledvermelho, OUTPUT);
  pinMode(pinoledplaca, OUTPUT);
  pinMode(pinoledvermelho2, OUTPUT);
  digitalWrite(pinoledvermelho2, HIGH);
}

void loop() {
// put your main code here, to run repeatedly:

//Estrutura de repetição que funciona no momento em que o codigo for gravado no arduino logo após a execução do setup

digitalWrite(pinoledvermelho, HIGH);
digitalWrite(pinoledplaca, HIGH);
delay(300);
digitalWrite(pinoledvermelho, LOW);
digitalWrite(pinoledplaca, LOW);
delay(300);
}

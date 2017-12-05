//Criando as variáveis
//int = integer, numeros inteiros
//Dois iguais, comparação, um igual adicionando valor

int pinoledvermelho = 12;
int pinoledplaca = 13;
int pinoledvermelho2 = 11;
const int botao = 2;
int estadobotao = 0;
int ultimoestadobotao = pinoledvermelho;

// Setup é a função/trecho de código que é executado uma única vez ao gravar o código no arduino
void setup() {

  // put your setup code here, to run once:
  // Função que configura a porta sendo INPUT ou OUTPUT
  Serial.begin(9600);
  pinMode(botao, INPUT);
  pinMode(pinoledvermelho, OUTPUT);
  pinMode(pinoledplaca, OUTPUT);
  pinMode(pinoledvermelho2, OUTPUT);
  digitalWrite(pinoledvermelho, LOW);
  digitalWrite(pinoledplaca, LOW);
  digitalWrite(pinoledvermelho2, LOW);
  digitalWrite(botao, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  estadobotao = digitalRead(botao);
  if ( estadobotao == LOW && ultimoestadobotao == pinoledvermelho) {
    //if (ultimoestadobotao == pinoledvermelho) {
      //Estrutura de repetição que funciona no momento em que o codigo for gravado no arduino logo após a execução do setup
      digitalWrite(pinoledvermelho, HIGH);
      digitalWrite(pinoledplaca, HIGH);
      digitalWrite(pinoledvermelho2, HIGH);
      ultimoestadobotao = pinoledvermelho2;
    }
    else if (estadobotao == LOW && ultimoestadobotao == pinoledvermelho2) {
      digitalWrite(pinoledvermelho, LOW);
      digitalWrite(pinoledplaca, LOW);
      digitalWrite(pinoledvermelho2, LOW);
      ultimoestadobotao = pinoledvermelho;
    }
    delay(1000);
  }

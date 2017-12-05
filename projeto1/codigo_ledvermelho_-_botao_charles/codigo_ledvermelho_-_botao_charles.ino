//Criando as variáveis
//int = integer, numeros inteiros
//Dois iguais, comparação, um igual adicionando valor

int pinoledvermelho = 12;
int pinoledplaca = 13;
int pinoledvermelho2 = 11;
const int botao = 2;
int estadobotao = LOW;
int ultimoestadobotao = LOW;
int ultimoEstadoLeds = LOW;

// Setup é a função/trecho de código que é executado uma única vez ao gravar o código no arduino
void setup() {

  // put your setup code here, to run once:
  // Função que configura a porta sendo INPUT ou OUTPUT
  Serial.begin(9600);
  pinMode(botao, INPUT);
  pinMode(pinoledvermelho, OUTPUT);
  pinMode(pinoledplaca, OUTPUT);
  pinMode(pinoledvermelho2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  estadobotao = digitalRead(botao);
  // verificar pela serial qual é o estado do botão quando passa no loop e o ultimo estado do botao também
  Serial.println(estadobotao);
  Serial.println(ultimoestadobotao);

  // Verifica e compara se o estado atual do botão é diferente do último estado recebido
  if (estadobotao != ultimoestadobotao) {

    // Verifica se o estado atual é HIGH
    if (estadobotao == HIGH) {

      // Verifica o último estado dos leds e alterna para HIGH ou LOW
      if (ultimoEstadoLeds == HIGH) {
        digitalWrite(pinoledvermelho, LOW);
        digitalWrite(pinoledplaca, LOW);
        digitalWrite(pinoledvermelho2, LOW);
        ultimoEstadoLeds = LOW;
      } else {
        digitalWrite(pinoledvermelho, HIGH);
        digitalWrite(pinoledplaca, HIGH);
        digitalWrite(pinoledvermelho2, HIGH);
        ultimoEstadoLeds = HIGH;
      }
    }

    // Atualiza o ultimo estado do botao
    ultimoestadobotao = estadobotao;
  }
}

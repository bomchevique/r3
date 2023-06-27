int ENA = 9;
int IN1 = 4;
int IN2 = 5;

int ENB = 10;
int IN3 = 6;
int IN4 = 7;

int VELA = 80;
int VELB = 80; 

int SE1 = A1;
int SD1 = A2;

int ESTADO = true;

int POT = A0;

void setup() 
{
  pinMode(POT, INPUT);
  
  pinMode(SE1, INPUT);
  pinMode(SD1, INPUT);
  
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  
  pinMode(ENB, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  Serial.begin(9600);
}

void Potenciometro() 
{

  int valor = analogRead(POT);

  VELA = map(valor, 0, 1023, 50, 150);
  
  VELB = map(valor, 0, 1023, 50, 150);

  Serial.println(VELA);
  
  Serial.println(VELB);
  
}

void loop() 
{
  Potenciometro();
  if (ESTADO) {
    Zona();  
  }
  else {
    SegueLinha();
  }
}

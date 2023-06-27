int TRIG = 3;
int ECHO = 2;

float Ultrassonico() 
{
  digitalWrite(TRIG, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  int duracao = pulseIn(ECHO, HIGH);
  float distancia = (duracao * 0.034) / 2;
  return distancia;
}

void DesviarObstaculo() 
{
  MotoresDireita();
  delay(500);

  MotoresFrente();
  delay(1000);

  MotoresEsquerda();
  delay(500);

  MotoresFrente();
  delay(1000);
}

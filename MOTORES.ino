void MotoresFrente() 
{
   analogWrite(ENA, VELA);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2,  LOW);

   analogWrite(ENB, VELB);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4,  LOW);
}

void MotoresTras() 
{
   analogWrite(ENA, VELA);
  digitalWrite(IN1,  LOW);
  digitalWrite(IN2, HIGH);

   analogWrite(ENB, VELB);
  digitalWrite(IN3,  LOW);
  digitalWrite(IN4, HIGH);
}

void MotoresDireita() 
{
   analogWrite(ENA, VELA);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2,  LOW);

   analogWrite(ENB, VELB);
  digitalWrite(IN3,  LOW);
  digitalWrite(IN4,  LOW);
}

void MotoresEsquerda() 
{
   analogWrite(ENA, VELA);
  digitalWrite(IN1,  LOW);
  digitalWrite(IN2,  LOW);

   analogWrite(ENB, VELB);
  digitalWrite(IN3, HIGH);
  digitalWrite(IN4,  LOW);
}

void MotoresParado() 
{
   analogWrite(ENA, VELA);
  digitalWrite(IN1,  LOW);
  digitalWrite(IN2,  LOW);

   analogWrite(ENB, VELB);
  digitalWrite(IN3,  LOW);
  digitalWrite(IN4,  LOW);
}

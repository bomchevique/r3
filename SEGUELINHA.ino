void SegueLinha() 
{
  int MEDIA = 429;
  
  int VALORSE1 = analogRead(SE1);
  int VALORSD1 = analogRead(SD1);

  Serial.println("SENSOR ESQUERDA: " + String(VALORSE1)); 
  Serial.println("SENSOR DIREITA: " + String(VALORSD1));   

  if (VALORSE1 < MEDIA && VALORSD1 < MEDIA) 
  {
    MotoresFrente();
  }
  
  if (VALORSE1 > MEDIA && VALORSD1 < MEDIA)
  {
    MotoresDireita();
  }

  if (VALORSE1 < MEDIA && VALORSD1 > MEDIA)
  {
    MotoresEsquerda();
  }

  // ENTRAR NA ZONA
  if (VALORSE1 > MEDIA && VALORSD1 > MEDIA) {
    ESTADO = true;
  }
}

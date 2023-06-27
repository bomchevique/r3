void Zona() 
{
  int MEDIA = 540;

  int VALORSE1 = analogRead(SE1);
  int VALORSD1 = analogRead(SD1);

  Serial.println("SENSOR ESQUERDA: " + String(VALORSE1)); 
  Serial.println("SENSOR DIREITA: " + String(VALORSD1));   
  
  if (VALORSE1 > MEDIA || VALORSD1 > MEDIA) 
  {
    MotoresTras();
    delay(750);
    MotoresDireita();
    delay(500); 
  }
   else if (Ultrassonico() < 15) {
    MotoresParar();
  }
  else 
  {
    MotoresFrente();
  }
}

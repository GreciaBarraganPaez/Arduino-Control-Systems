int tiempo =0;
float distancia = 0;

void setup()
{
  Serial.begin(9600); // Standard serial monitor baud rate (corrected typo)
  pinMode(2, OUTPUT); //pin trigger
  pinMode(A5, INPUT); //pin echo
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
}

void loop()
{
  //enviar onda de sonido
  digitalWrite(2, LOW);
  delayMicroseconds(20);
  digitalWrite(2, HIGH);
  delayMicroseconds(10);
  digitalWrite(2, LOW);

  //iniciar cronometro
  tiempo = pulseIn(A5, HIGH);

  //velocidad=distancia/tiempo
  //distancia =velocidad * tiempo
  distancia = 0.01715 *tiempo;

  if(distancia < 100)
  {
    digitalWrite(4,HIGH);
    digitalWrite(5,HIGH);
      delay(distancia*10);
    digitalWrite(4,LOW);
    digitalWrite(5,LOW);
      delay(distancia*10);
  }
  //imprimir distancia en monitor serial
  Serial.println(distancia);
}

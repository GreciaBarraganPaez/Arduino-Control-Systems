//Importamo libreria
#include<Servo.h>

//variables globales
byte pinPIR = 3;
byte pinServo = 2;
Servo miServo;
bool estadoPIR;

void setup()
{
  //vincular(pin) al servo
  miServo.attach(pinServo);
  pinMode(pinPIR, INPUT);
  Serial.begin(9600);
}

void loop()
{
  estadoPIR = digitalRead(pinPIR);

  if (estadoPIR == 1)//Si detecta movimiento(estadoPIR=1) se mueve el servo 60 grados
    {
      miServo.write(60);
    }
  else //No detecta movimiento debe moverse 120 grados
    {
       miServo.write(120);
    }

  Serial.println(estadoPIR);
}

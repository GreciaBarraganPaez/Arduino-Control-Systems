/*
TAREA: Controlar tres LEDs y un servo usando teclado matricial de 4x4.
- Teclas 1, 2 y 3: LEDs rojo, verde y azul.
- Teclas 4, 5 y 6: servomotor a 10, 90 y 170 grados.
*/

#include <Keypad.h>
#include <Servo.h>

Servo miServo;

//atributo const = constante
const byte filas = 4;
const byte columnas = 4;

// Matrices, Matrix, array
char Keys[filas][columnas] = {
  {'1', '2', '3', 'A'},
  {'4', '5', '6', 'B'},
  {'7', '8', '9', 'C'},
  {'*', '0', '#', 'D'}
};

byte pinsFilas[filas] = {11, 10, 9, 8};
byte pinsColumnas[columnas] = {A0, A1, A2, A3};

//matriz, pinsFilas, pinsColumnas, #fila, #columnas
Keypad teclado = Keypad(makeKeymap(Keys), pinsFilas, pinsColumnas, filas, columnas);

char tecla;

byte R = 2;
byte G = 12;
byte B = 3;

void setup()
{
  Serial.begin(9600);  
  pinMode(R, OUTPUT);
  pinMode(G, OUTPUT);
  pinMode(B, OUTPUT);
  miServo.attach(4);
}

void loop()
{
  tecla = teclado.getKey();

  if(tecla){
    Serial.println(tecla);

    switch(tecla){
      case '1':
      digitalWrite(R, HIGH);
      digitalWrite(G, LOW);
      digitalWrite(B, LOW);
      break;

      case '2':
      digitalWrite(R, LOW);
      digitalWrite(G, HIGH);
      digitalWrite(B, LOW);
      break;

      case '3':
      digitalWrite(R, LOW);
      digitalWrite(G, LOW);
      digitalWrite(B, HIGH);
      break;

      case '4':
      miServo.write(10);
      break;

      case '5':
      miServo.write(90);
      break;

      case '6':
      miServo.write(170);
      break;

      default:
      digitalWrite(R, LOW);
      digitalWrite(G, LOW);
      digitalWrite(B, LOW);
      break;
    }
  }
}

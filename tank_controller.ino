#include <SoftwareSerial.h>
#include "Tanque.h"

SoftwareSerial mySerial(4, 5); // RX, TX

char ordenRecibida;
Tanque tanque; // = new Tanque();
int velocidad = 10;

void setup()  
{


  tanque.setMotorIzquierdo(11, 12, 10); //8, 7, 9);
  tanque.setMotorDerecho(8, 7, 9); //11, 12, 10);

  // Open serial communications and wait for port to open:
  Serial.begin(9600);
  Serial.println("receptor bluetooth");

  // set the data rate for the SoftwareSerial port
  mySerial.begin(9600);
}

void loop() // run over and over
{
  if (mySerial.available()){
    ordenRecibida = mySerial.read();
    Serial.println(ordenRecibida);
  }

  switch(ordenRecibida){
  case 'F':
    tanque.avance(velocidad);
    break;
  case 'B': //atras
    tanque.retroceso(velocidad);
    break;
  case 'L':  //izq
   tanque.giroIzquierda(velocidad);
    break;
  case 'R':  //dcha
  tanque.giroDerecha(velocidad);
    break;
  case 'S':  //stop
    tanque.parada();
    break;
  case 'G':  //stop
  tanque.adelanteIzquierda(velocidad);
    break;
  case 'I':  //stop
  tanque.adelanteDerecha(velocidad);
    break;
  case 'H':  //stop
  tanque.atrasIzquierda(velocidad);
    break;
  case 'J':  //stop
  tanque.atrasDerecha(velocidad);
    break;
    case '0':
    velocidad = 0;
    break;
    case '1':
    velocidad = 10;
    break;
    case '2':
    velocidad = 20;
    break;
    case '3':
    velocidad = 30;
    break;
    case '4':
    velocidad = 40;
    break;
    case '5':
    velocidad = 50;
    break;
    case '6':
    velocidad = 60;
    break;
    case '7':
    velocidad = 70;
    break;
    case '8':
    velocidad = 80;
    break;
    case '9':
    velocidad = 90;
    break;
    case 'q':
    velocidad = 100;
    break;
  default:
    break;
  }
}
    //TODO
    //luces delante ON   W
    //luces delante OFF  w
    //luces detras ON    U
    //luces detras ON    u

void lucesDelanterasOn(){
}

void lucesDelanterasOff(){
}

void lucesTraserasOn(){
}

void lucesTraserasOff(){
}




#ifndef Tanque_H
#define Tanque_H
#include "Motor.h"

class Tanque {
private:
  Motor motorIzquierdo;
  Motor motorDerecho;

public:
  Tanque();
  Tanque(int pinAvanceMIz, int pinRetrocesoMIz, int pinVelocidadMIz, int pinAvanceMDer, int pinRetrocesoMDer, int pinVelocidadMDer );

  void setMotorIzquierdo(int pinAvance, int pinRetroceso, int pinVelocidad);
  void setMotorDerecho(int pinAvance, int pinRetroceso, int pinVelocidad);

  void avance(int velocidad);
  void retroceso(int velocidad);
  void giroIzquierda(int velocidad);
  void giroDerecha(int velocidad);

  void adelanteIzquierda(int velocidad);
  void atrasIzquierda(int velocidad);
  void adelanteDerecha(int velocidad);
  void atrasDerecha(int velocidad);

  void parada();
};
#endif





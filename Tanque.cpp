#include <Arduino.h>
#include "Tanque.h"
#include "Motor.h"

//
// Constructor
//
Tanque::Tanque(int pinAvanceM1, int pinRetrocesoM1, int pinVelocidadM1, int pinAvanceM2, int pinRetrocesoM2, int pinVelocidadM2){
  motorIzquierdo.setMotor(pinAvanceM1, pinRetrocesoM1, pinVelocidadM1);
  motorDerecho.setMotor(pinAvanceM2, pinRetrocesoM2, pinVelocidadM2);
}

Tanque::Tanque(){
}

void Tanque::setMotorIzquierdo(int pinAvance, int pinRetroceso, int pinVelocidad){
  motorIzquierdo.setMotor(pinAvance, pinRetroceso, pinVelocidad);
}

void Tanque::setMotorDerecho(int pinAvance, int pinRetroceso, int pinVelocidad){
  motorDerecho.setMotor(pinAvance, pinRetroceso, pinVelocidad);
}

void Tanque::avance(int velocidad){
  motorIzquierdo.avance(velocidad);
  motorDerecho.avance(velocidad);
}

void Tanque::retroceso(int velocidad){
  motorIzquierdo.retroceso(velocidad);
  motorDerecho.retroceso(velocidad);  
}

void Tanque::giroIzquierda(int velocidad){
  motorIzquierdo.paro();
  motorDerecho.avance(velocidad);
}

void Tanque::giroDerecha(int velocidad){
  motorIzquierdo.avance(velocidad);
  motorDerecho.paro();
}

void Tanque::adelanteIzquierda(int velocidad){
  motorIzquierdo.avance(velocidad/2);
  motorDerecho.avance(velocidad);
}

void Tanque::atrasIzquierda(int velocidad){
  motorIzquierdo.retroceso(velocidad/2);
  motorDerecho.retroceso(velocidad);
}

void Tanque::adelanteDerecha(int velocidad){
  motorIzquierdo.avance(velocidad);
  motorDerecho.avance(velocidad/2);
}

void Tanque::atrasDerecha(int velocidad){
  motorIzquierdo.retroceso(velocidad);
  motorDerecho.retroceso(velocidad/2);
}

void Tanque::parada(){
  motorIzquierdo.paro();
  motorDerecho.paro();
}


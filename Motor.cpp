#include <Arduino.h>
#include "Motor.h"


//
// Constructor
//

Motor::Motor(){
}

Motor::Motor(int tmpPinAvance, int tmpPinRetroceso, int tmpPinVelocidad){
  pinAvance = tmpPinAvance;
  pinRetroceso = tmpPinRetroceso;
  pinVelocidad = tmpPinVelocidad;
  pinMode(pinAvance, OUTPUT);
  pinMode(pinRetroceso, OUTPUT);   
  pinMode(pinVelocidad, OUTPUT);
  digitalWrite(pinVelocidad, HIGH);
};


//setters
void Motor::setMotor(int tmpPinAvance, int tmpPinRetroceso, int tmpPinVelocidad){
  pinAvance = tmpPinAvance;
  pinRetroceso = tmpPinRetroceso;
  pinVelocidad = tmpPinVelocidad;
  pinMode(pinAvance, OUTPUT);   
  pinMode(pinRetroceso, OUTPUT);   
  pinMode(pinVelocidad, OUTPUT); 
  digitalWrite(pinVelocidad, HIGH);
}


void Motor::avance(int velocidad){
  digitalWrite(pinRetroceso, LOW);
  digitalWrite(pinAvance, HIGH);
  ajustarVelocidad(velocidad);
}

void Motor::retroceso(int velocidad){
  digitalWrite(pinAvance, LOW);
  digitalWrite(pinRetroceso, HIGH);
  ajustarVelocidad(velocidad);
}

void Motor::paro(){
  digitalWrite(pinVelocidad, 0);
  digitalWrite(pinAvance, LOW);
  digitalWrite(pinRetroceso, LOW);
}

void Motor::ajustarVelocidad(int velocidad){
  int speedpin = map(velocidad, 0, 100, 800, 1023);
  analogWrite (pinVelocidad, speedpin);
  Serial.println(speedpin);
  delay(50);
}



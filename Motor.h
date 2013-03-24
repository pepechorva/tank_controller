#ifndef Motor_h
#define Motor_h

class Motor{

private:

  int pinAvance;
  int pinRetroceso;
  int pinVelocidad;

  void ajustarVelocidad(int velocidad);

public:

  Motor();
  Motor(int pinAvance, int pinRetroceso, int pinVelocidad);

  //setters
  void setMotor(int pinAvance, int pinRetroceso, int pinVelocidad);

  void avance(int velocidad);
  void retroceso(int velocidad);
  void paro();
};
#endif




#ifndef MOTORCC_H
#define MOTORCC_H

#include<Arduino.h>
#include<stdint.h>

class MotorCC{
  private:
    unsigned short int velocidadePadrao;
    unsigned short int pinoA, pinoB, pinoEN;
  public:
    MotorCC(unsigned short int _pinoA, unsigned short int _pinoB, unsigned short int _pinoEN);
    MotorCC(unsigned short int _pinoA, unsigned short int _pinoB);
    void girarHorario();
    void girarHorario(unsigned short int velocidade);
    void girarAntiHorario();
    void girarAntiHorario(unsigned short int velocidade);
};

#endif
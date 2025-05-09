#include "MotorCC.h"

MotorCC::MotorCC(unsigned short int _pinoA, unsigned short int _pinoB, unsigned short int _pinoEN){
  pinoA = _pinoA;
  pinoB = _pinoB;
  pinoEN = _pinoEN;
  velocidadePadrao = 125;

  pinMode(pinoA, OUTPUT);
  pinMode(pinoB, OUTPUT);
  pinMode(pinoEN, OUTPUT);
}

MotorCC::MotorCC(unsigned short int _pinoA, unsigned short int _pinoB){
  pinoA = _pinoA;
  pinoB = _pinoB;
  pinoEN = 0;
  velocidadePadrao = 125;

  pinMode(pinoA, OUTPUT);
  pinMode(pinoB, OUTPUT);
}

void MotorCC::girarHorario(){
  if(pinoEN){
    analogWrite(pinoEN, velocidadePadrao);
    digitalWrite(pinoA, LOW);
    digitalWrite(pinoB, HIGH);
  }else{
    digitalWrite(pinoA, HIGH);
    analogWrite(pinoB,velocidadePadrao);
  }
}

void MotorCC::girarHorario(unsigned short int velocidade){
  if(pinoEN){
    analogWrite(pinoEN, velocidade);
    digitalWrite(pinoA, LOW);
    digitalWrite(pinoB, HIGH);
  }else{
    digitalWrite(pinoA, HIGH);
    analogWrite(pinoB,velocidade);
  }
}

void MotorCC::girarAntiHorario(){
  if(pinoEN){
    analogWrite(pinoEN, velocidadePadrao);
    digitalWrite(pinoA, HIGH);
    digitalWrite(pinoB, LOW);
  }else{
    digitalWrite(pinoA, HIGH);
    analogWrite(pinoB,255-velocidadePadrao);
  }
}

void MotorCC::girarAntiHorario(unsigned short int velocidade){
  if(pinoEN){
    analogWrite(pinoEN, velocidade);
    digitalWrite(pinoA, HIGH);
    digitalWrite(pinoB, LOW);
  }else{
    digitalWrite(pinoA, HIGH);
    analogWrite(pinoB,255-velocidade);
  }
}
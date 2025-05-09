#include "SensorInfravermelho.h"

SensorInfravermelho::SensorInfravermelho(unsigned short int _pinOUT){
  pinOUT = _pinOUT;
  pinMode(_pinOUT,INPUT);
}

bool SensorInfravermelho::isReflect(){
  return digitalRead(pinOUT);
}
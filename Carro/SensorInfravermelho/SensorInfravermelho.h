#ifndef SENSORINFRAVERMELHO_H
#define SENSORINFRAVERMELHO_H

#include <Arduino.h>
#include <stdint.h>

class SensorInfravermelho {
  private:
    unsigned short int pinOUT;
  public:
    SensorInfravermelho();
    SensorInfravermelho(unsigned short int _pinOUT);
    bool isReflect();
};

#endif
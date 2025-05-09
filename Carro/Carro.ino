#include "MotorCC.h"
#include "SensorInfravermelho.h"

MotorCC motorA(4,5,3);
MotorCC motorB(9,10,11);

SensorInfravermelho sensorA(2);
SensorInfravermelho sensorB(12);

void setup() {
    motorA.girarAntiHorario(0);
    motorB.girarAntiHorario(0);
}

void loop() {
  if(sensorA.isReflect() && !sensorB.isReflect()){
    motorA.girarHorario(100);
    motorB.girarAntiHorario(100);
      
  }else if(!sensorA.isReflect() && sensorB.isReflect()){
    motorA.girarAntiHorario(100);
    motorB.girarHorario(100);
      
  }else{
    motorA.girarHorario(100);
    motorB.girarHorario(100);
  }
}

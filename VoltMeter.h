//
// Created by alvaro on 26/07/15.
//

#ifndef PRUEBA_PLAT_VOLTMETER_H
#define PRUEBA_PLAT_VOLTMETER_H
#include "Arduino.h"

class VoltMeter {
private:
    int _readPin;
    float _r1;
    float _r2;
    float _referenceVoltage;
public:
    VoltMeter(int readPin, float r1, float r2, float referenceVoltage);
    float getVoltage();
};


#endif //PRUEBA_PLAT_VOLTMETER_H

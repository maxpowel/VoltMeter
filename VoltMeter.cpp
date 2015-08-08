//
// Created by alvaro on 26/07/15.
//

#include "VoltMeter.h"

float VoltMeter::getVoltage() {
    float v = (analogRead(_readPin) * _referenceVoltage) / 1024.0;
    float v2 = v / (_r2 / (_r1 + _r2));
    return v2;
}

VoltMeter::VoltMeter(int readPin, float r1, float r2, float referenceVoltage){
    _readPin = readPin;
    _r1 = r1;
    _r2 = r2;
    _referenceVoltage = referenceVoltage;
}
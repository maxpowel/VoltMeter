//
// Created by alvaro on 26/07/15.
//

#include "VoltMeter.h"

float VoltMeter::getVoltage() {
    float vout = (analogRead(_readPin) * _referenceVoltage) / 1024.0;
    float vin = vout / (_r2 / (_r1 + _r2));
    return vin;
}

VoltMeter::VoltMeter(int readPin, float r1, float r2, float referenceVoltage){
    _readPin = readPin;
    _r1 = r1;
    _r2 = r2;
    _referenceVoltage = referenceVoltage;
}

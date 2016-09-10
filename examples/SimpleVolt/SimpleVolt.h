#include <VoltMeter.h>

#define INPUT_PIN A0
#define R1 15000
#define R2 10000
#define REFERENCE 4.8
VoltMeter vm(INPUT_PIN, R1, R2, REFERENCE);

void setup(){
  Serial.begin(115200);
}

void loop() {
  Serial.println(vm.getVoltage());
}

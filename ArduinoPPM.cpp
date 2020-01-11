#include "Arduino.h"
#include "ArduinoPPM.h"

ArduinoPPM::ArduinoPPM(int count, int pin){
    pinMode(pin, OUTPUT);
    _pin = pin;
    _count = count;
}
void ArduinoPPM::send(int values[_count]){
    for(int i=0;i<_count;i++){
        int value=values[i];
        digitalWrite(_pin, LOW);
        delayMicroseconds(400);
        digitalWrite(_pin, HIGH);
        delayMicroseconds(value);
    }
    delayMicroseconds(12100);
}
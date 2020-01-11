#include "Arduino.h"
#include "ArduinoPPM.h"

ArduinoPPM::ArduinoPPM(int pin){
    pinMode(pin, OUTPUT);
    _pin = pin;
}
void ArduinoPPM::send(int values[]){
    for(int i=0;i<values.length;i++){
        int value=values[i];
        digitalWrite(_pin, LOW);
        delayMicroseconds(400);
        digitalWrite(_pin, HIGH);
        delayMicroseconds(value);
    }
    delayMicroseconds(12100);
}
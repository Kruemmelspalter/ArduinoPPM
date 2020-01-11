#include "Arduino.h"
#include "ArduinoPPM.h"

ArduinoPPM::ArduinoPPM(int pin, bool debug){
    pinMode(pin, OUTPUT);
    _pin = pin;
    _debug=debug;
}
void ArduinoPPM::send(int values[]){
    for(int i=0;i<sizeof(values);i++){
        int value=values[i];
        digitalWrite(_pin, LOW);
        if(_debug){
            Serial.print(0);
        }
        delayMicroseconds(400);
        digitalWrite(_pin, HIGH);
        if(_debug){
            Serial.print(1);
        }
        delayMicroseconds(value);
    }
    if(_debug){
        Serial.print("Wait");
    }
    delayMicroseconds(12100);
}
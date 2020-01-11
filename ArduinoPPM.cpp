#include "Arduino.h"
#include "ArduinoPPM.h"

ArduinoPPM::ArduinoPPM(int pin){
    pinMode(pin, OUTPUT);
    _pin = pin;
}
void ArduinoPPM::send(int values[]){
    for(int i=0;i<sizeof(values);i++){
        int value=values[i];
        digitalWrite(_pin, LOW);
        #ifdef debug
            Serial.out.println(0);
        #endif
        delayMicroseconds(400);
        digitalWrite(_pin, HIGH);
        #ifdef debug
            Serial.out.println(1);
        #endif
        delayMicroseconds(value);
    }
    #ifdef debug
        Serial.out.println("Wait");
    #endif
    delayMicroseconds(12100);
}
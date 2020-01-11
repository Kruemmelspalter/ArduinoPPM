#ifndef ArduinoPPM_h
#define ArduinoPPM_h

#include "Arduino.h"

class ArduinoPPM(int count, int pin){
    public:
    ArduinoPPM(int count);
    void send(int values[count]);
    private:
    int _pin;
    int _count;
};

#endif
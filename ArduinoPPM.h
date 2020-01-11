#ifndef ArduinoPPM_h
#define ArduinoPPM_h

#include "Arduino.h"

class ArduinoPPM{
    public:
    ArduinoPPM(int pin);
    void send(int values[]);
    private:
    int _pin;
    int _bool;
};

#endif
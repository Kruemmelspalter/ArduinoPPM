#ifndef ArduinoPPM_h
#define ArduinoPPM_h

#include "Arduino.h"

class ArduinoPPM{
    public:
    ArduinoPPM(int count, int pin);
    void send(int values[count]);
    private:
    int _pin;
    int _count;
};

#endif
#ifndef ArduinoPPM_h
#define ArduinoPPM_h

#include "Arduino.h"

class ArduinoPPM{
    public:
    ArduinoPPM(int pin, bool debug);
    void send(int values[]);
    private:
    int _pin;
    bool _debug;
};

#endif
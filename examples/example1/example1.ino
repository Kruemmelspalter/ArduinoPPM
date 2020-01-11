#include <ArduinoPPM.h>

ArduinoPPM ppm(6,13);

void setup() {
  
}

void loop() {
  ppm.send({1.1,1.1,1.6,1.1,1.1,1.1,1.1});
}

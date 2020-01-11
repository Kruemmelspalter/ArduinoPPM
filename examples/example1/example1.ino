#include <ArduinoPPM.h>

ArduinoPPM ppm(13);

void setup() {
  
}

void loop() {
  int values[]={1100,1100,1600,1100,1100,1100,1100};
  ppm.send(values);
}

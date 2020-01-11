# ArduinoPPM
 A library for Arduino to send PPM

 Instantiation: `c++ ArduinoPPM ppm(/*values*/,/*pin*/);`

 Example:
 ```c++
 void setup(){
     ArduinoPPM ppm(6,13); //A PPM on pin 13 with 6 values
 }
 void loop(){
     ppm.send({0,0,0,0,0,0}); //send the values 0, 0, 0, 0, 0, 0
 }
 ```
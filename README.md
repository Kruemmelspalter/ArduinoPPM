# ArduinoPPM
 A library for Arduino to send PPM

 Instantiation: 
 ```c++
 ArduinoPPM ppm(/*values*/,/*pin*/);
 ```

 Example:
 ```c++
 void setup(){
     ArduinoPPM ppm(6,13); //A PPM on pin 13 with 6 values
 }
 void loop(){
    int values={1100,1100,1600,1100,1100,1100};
    ppm.send(values); // send mid, mid, high, mid, mid, mid 
}
 ```

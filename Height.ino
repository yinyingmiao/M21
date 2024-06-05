#include <Servo.h>

Servo SS1;
Servo SS2;

void setup() {
  //attach the servo motors 
  SS1.attach (14);
  SS2.attach (16);

  //set the initial status, stop status 
  SS1.write (0); 
  SS2.write (0); 

  //give the first random delay
}

void loop() {

  SS1.write (180);
  delay (3000);
  SS1.write (0);

  SS2.write (180);
  delay (3000);
  SS2.write (0);

  delay (30000);

}

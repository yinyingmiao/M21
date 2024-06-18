#include <Servo.h>

Servo Servo1;
Servo Servo2; 

unsigned long currentTime; 
unsigned long delayTime = 10000; //1.5 min
unsigned long previousTime;


void setup() {

  Serial.begin(115200);

  Servo1.attach (14);
  Servo2.attach (16);

  Servo1.write (0); 
  Servo2.write (0); 

  delay (1000);

}


void loop() {

  currentTime = millis();

  if (currentTime > previousTime + delayTime) {
    Servo1.write (180);
    delay (1000);
    Servo2.write (180);

    delay (10000);


    Servo1.write (0);
    delay (1000);
    Servo2.write (0);
    delay (1000);

    previousTime = currentTime;

  }
}

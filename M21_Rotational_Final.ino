#include <Servo.h>

Servo Motor1;
Servo Motor2;
Servo Motor3;

const int motorPin [] = {15, 13, 4};

long currentTime;
long delayTime = 30000;
long previousTime; 

//long triggerMovementTime = 0;
//
//long minMotorTime = 2000;
//
//long maxMotorTime = 4000;
//
//long minDelayTime = 1000;
//
//long maxDelayTime = 3000;

void setup() {

  Serial.begin(115200);  

  Motor1.attach (15);
  Motor2.attach (13);
  Motor3.attach (4);    
  Motor1.writeMicroseconds (1500);
  Motor2.writeMicroseconds (1500);
  Motor3.writeMicroseconds (1500);

  delay (3000); 


}

void loop() {
  currentTime = millis();

  if (currentTime > previousTime + delayTime) { 

    Motor1.writeMicroseconds (1700);
    delay(1000);
    Motor2.writeMicroseconds (1700);
    delay(1000);
    Motor3.writeMicroseconds (1700);
    delay(5000);

    Motor1.writeMicroseconds (1500);
    Motor2.writeMicroseconds (1500);
    Motor3.writeMicroseconds (1500);
    delay(2000);
    
    Motor1.writeMicroseconds (1300);
    delay(1000);
    Motor2.writeMicroseconds (1300);
    delay(1000);
    Motor3.writeMicroseconds (1300);
    delay(5000);    

    Motor1.writeMicroseconds (1500);
    Motor2.writeMicroseconds (1500);
    Motor3.writeMicroseconds (1500);
    delay(2000);

    previousTime = currentTime;
  }
} 
#include <Servo.h>

Servo Motor1;
Servo Motor2;
Servo Motor3;

const int motorPin [] = {12, 14, 16};

unsigned long currentTime;
unsigned long delayTime = 30000;
unsigned long previousTime; 

void setup() {

  Serial.begin(115200);  

  Motor1.attach (12);
  Motor2.attach (14);
  Motor3.attach (16);    
  Motor1.writeMicroseconds (1500);
  Motor2.writeMicroseconds (1500);
  Motor3.writeMicroseconds (1500);

  delay (3000); 


}

void loop() {
  currentTime = millis();

  if (currentTime > previousTime + delayTime) { 

    Motor1.writeMicroseconds (1700);
    Motor2.writeMicroseconds (1700);
    Motor3.writeMicroseconds (1700);
    delay(3000);

    Motor1.writeMicroseconds (1500);
    Motor2.writeMicroseconds (1500);
    Motor3.writeMicroseconds (1500);
    delay(10000);
    
    Motor1.writeMicroseconds (1300);
    Motor2.writeMicroseconds (1300);
    Motor3.writeMicroseconds (1300);
    delay(3000);    

    Motor1.writeMicroseconds (1500);
    Motor2.writeMicroseconds (1500);
    Motor3.writeMicroseconds (1500);

    previousTime = currentTime;
  }
} 
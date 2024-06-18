#include <Servo.h>

// Servo Motor1;
// Servo Motor2; 
// Servo Motor3;

unsigned long currentTime;
unsigned long delayTime = 30000;
unsigned long previousTime; 

// int pin = 16;
// int pin1 = 0;

//const int motorPin[] = {2,12,13,14,15,16};

void setup() {

  Serial.begin(115200);

  // pinMode(pin, OUTPUT);
  // pinMode(pin1, OUTPUT);  

  // digitalWrite(pin, LOW);
  // digitalWrite(pin1, LOW);

  Motor1.attach (13);
  Motor2.attach (12);
  Motor3.attach (14);
  Motor1.writeMicroseconds (1500);
  Motor2.writeMicroseconds (1500);
  Motor3.writeMicroseconds (1500);  

  // digitalWrite(4, LOW);
  // digitalWrite(0, LOW);
  // digitalWrite(2, LOW);
  // digitalWrite(15, LOW);  

  delay(1000);

}

void loop() {

  Motor1.writeMicroseconds (1300);
  Motor2.writeMicroseconds (1300);
  Motor3.writeMicroseconds (1300);    

  delay (2000);

  Motor1.writeMicroseconds (1500);
  Motor2.writeMicroseconds (1500);
  Motor3.writeMicroseconds (1500);  

  delay (2000);

  Motor1.writeMicroseconds (1800);
  Motor2.writeMicroseconds (1800);
  Motor3.writeMicroseconds (1800);  

  Motor1.writeMicroseconds (1500);
  Motor2.writeMicroseconds (1500);
  Motor3.writeMicroseconds (1500);  

  delay (2000);

}

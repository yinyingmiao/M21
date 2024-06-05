
// code for servo with 180 degrees, to be used for string vibration. 

#include <Servo.h> 

// Declare the Servo pin 
// int servoA = 2; 
// int servoB = 0;
// int servoC = 4;

const int motorPin [] = {15, 13, 4};

int servopin = 7;

int CmotorAngleA = 0; // current motor A angle
int PmotorAngleA = 0; // previous motor A angle 

int CmotorAngleB = 0; // current motor A angle
int PmotorAngleB = 0; // previous motor A angle 

int CmotorAngleC = 0; // current motor A angle
int PmotorAngleC = 0; // previous motor A angle 

bool AMotorForward = true;
bool AMotorBackward = false;

bool BMotorForward = true;
bool BMotorBackward = false;

bool CMotorForward = true;
bool CMotorBackward = false;

// Create a servo object 
Servo ServoA;
Servo ServoB;
Servo ServoC; 

unsigned long LastTrigger = 0;
unsigned long Delay = 3000; // half a minute


void setup() { 
   // We need to attach the servo to the used pin number 

   Serial.begin(9600);

   ServoA.attach(motorPin[0]); 
   ServoB.attach(motorPin[1]);
   ServoC.attach(motorPin[2]);

   ServoA.write(0);
   ServoB.write(0);
   ServoC.write(0);

}
void loop(){ 
   // 0 degrees -- initial starting point 

   long currentTime = millis ();

   if (millis() > (LastTrigger + Delay)) {


    //how can do also for Motor B and C.
     if (CmotorAngleA == PmotorAngleA && AMotorForward == true) {

      if (CmotorAngleA < 180) {
        CmotorAngleA = PmotorAngleA + 30;
        ServoA.write (CmotorAngleA);
        PmotorAngleA = CmotorAngleA; 
        AMotorForward = true;     
        delay (300);
      }

      if (CmotorAngleA = 180) {
        AMotorForward = false;
        AMotorBackward = true;
      }
     }
     if (CmotorAngleA == PmotorAngleA && AMotorBackward) {

      if (CmotorAngleA > 0) {
        CmotorAngleA = PmotorAngleA - 30;
        ServoA.write (CmotorAngleA);
        PmotorAngleA = CmotorAngleA; 
        AMotorBackward = true;     
        delay (300);
      }

      if (CmotorAngleA = 0) {
        AMotorForward = true;
        AMotorBackward = false;
      }
     } 

     if (CmotorAngleB == PmotorAngleB && BMotorForward == true) {

      if (CmotorAngleB < 180) {
        CmotorAngleB = PmotorAngleB + 30;
        ServoA.write (CmotorAngleB);
        PmotorAngleB = CmotorAngleB; 
        BMotorForward = true;     
        delay (300);
      }

      if (CmotorAngleB = 180) {
        BMotorForward = false;
        BMotorBackward = true;
      }
     }

     if (CmotorAngleB == PmotorAngleB && BMotorBackward) {

      if (CmotorAngleB > 0) {
        CmotorAngleB = PmotorAngleB - 30;
        ServoA.write (CmotorAngleB);
        PmotorAngleB = CmotorAngleB; 
        BMotorBackward = true;     
        delay (300);
      }

      if (CmotorAngleB = 0) {
        BMotorForward = true;
        BMotorBackward = false;
      }
     } 

     if (CmotorAngleB == PmotorAngleB && BMotorForward == true) {

      if (CmotorAngleB < 180) {
        CmotorAngleB = PmotorAngleB + 30;
        ServoA.write (CmotorAngleB);
        PmotorAngleB = CmotorAngleB; 
        BMotorForward = true;     
        delay (300);
      }

      if (CmotorAngleB = 180) {
        BMotorForward = false;
        BMotorBackward = true;
      }
     }

     if (CmotorAngleB == PmotorAngleB && BMotorBackward) {

      if (CmotorAngleB > 0) {
        CmotorAngleB = PmotorAngleB - 30;
        ServoA.write (CmotorAngleB);
        PmotorAngleB = CmotorAngleB; 
        BMotorBackward = true;     
        delay (300);
      }

      if (CmotorAngleB = 0) {
        BMotorForward = true;
        BMotorBackward = false;
      }
     } 
     if (CmotorAngleC == PmotorAngleC && CMotorForward == true) {

      if (CmotorAngleC < 180) {
        CmotorAngleC = PmotorAngleC + 30;
        ServoA.write (CmotorAngleC);
        PmotorAngleC = CmotorAngleC; 
        AMotorForward = true;     
        delay (300);
      }

      if (CmotorAngleC = 180) {
        CMotorForward = false;
        CMotorBackward = true;
      }

     if (CmotorAngleC == PmotorAngleC && CMotorBackward) {

      if (CmotorAngleC > 0) {
        CmotorAngleC = PmotorAngleC - 30;
        ServoA.write (CmotorAngleC);
        PmotorAngleC = CmotorAngleC; 
        CMotorBackward = true;     
        delay (300);
      }

      if (CmotorAngleC = 0) {
        CMotorForward = true;
        CMotorBackward = false;
      }
     }} 
  }
} 

// KidoLighting - The Servo's Circuit
// MDes in Digital Future, OCAD University
// Emotive Objects Project - Creation & Computation Course, Nick Pucket
// Mona Safari, Victoria Gottardi, Firaas Khan

#include <Servo.h>

Servo cntServo1;
int spin1 = 2; 

int lightValue1;
int sensorPin1 = A0;
void setup() {

  cntServo1.attach(spin1);
  Serial.begin(9600);

}

void loop()
 {
lightValue1 = analogRead(sensorPin1);
Serial.println(lightValue1);

if(lightValue1<500){
  cntServo1.write(110);
  
}
  else {

    cntServo1.write(90);
   // Serial.println(lightValue1);
  }
 // cntServo1.write(85);
}
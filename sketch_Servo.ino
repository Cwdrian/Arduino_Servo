#include <Servo.h>

Servo myServo;

int servoDelay=1000;
int servoMax=180;
int servoMin=0;

void setup() {
  myServo.attach(9);

}

void loop() {
  myServo.write(servoMax);
  delay(servoDelay);

  myServo.write(servoMin);
  delay(servoDelay);

}

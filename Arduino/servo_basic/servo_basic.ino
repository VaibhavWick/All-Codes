#include <Servo.h>

int servoPin=9;
int angle=110;

Servo myServo;

void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);

     myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
myServo.write(angle);
}

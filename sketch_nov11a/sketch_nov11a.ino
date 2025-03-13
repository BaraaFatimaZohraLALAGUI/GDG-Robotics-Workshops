#include <Servo.h>
int servopin = 11;
int serpos = 90;
Servo myservo;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(96000);

  myservo.attach(servopin);
}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(serpos);
}

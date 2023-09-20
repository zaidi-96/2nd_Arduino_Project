#include <Servo.h>

int servopin = 3;
int servodelay = 1000;
Servo myservo;
void setup() {
  // put your setup code here, to run once:
  myservo.attach(servopin);

}

void loop() {
  // put your main code here, to run repeatedly:
  myservo.write(0);
  delay(servodelay);
  myservo.write(90);
  delay(servodelay);
  myservo.write(180);
  delay(servodelay);
  myservo.write(60);
  delay(servodelay);
  myservo.write(45);
  delay(servodelay);

}

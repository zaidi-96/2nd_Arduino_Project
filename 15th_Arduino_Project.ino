#include<Servo.h>
int pot = A0;
int servopin = 6;
int val;
Servo myservo;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(servopin);
  pinMode(A0, INPUT);
  pinMode(6, OUTPUT);


}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(pot);
  Serial.print("Analog Values Are:");
  Serial.println(val);
  val = (180./1023.)*val;
  Serial.print("Servo Values Are:");
  Serial.println(val);
  myservo.write(val);
  delay(1000);


}

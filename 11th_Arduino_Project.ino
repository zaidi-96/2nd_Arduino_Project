int pot= A0;
int ledpin = 9;
int val;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pot, INPUT);
  pinMode(ledpin, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(pot);
  Serial.print("Analog values are given as:");
  Serial.println(val);
  val = (255./1023.)*val;
  Serial.print("PWM values are given as:");
  Serial.println(val);
  analogWrite(ledpin, val);
  delay(1000);


}

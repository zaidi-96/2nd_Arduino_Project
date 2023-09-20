
int ledpin = 11;
int ourdelay= 1000;
void setup() {
  pinMode(ledpin, OUTPUT);

}

void loop() {
  digitalWrite(ledpin, HIGH);
  delay(ourdelay);
  digitalWrite(ledpin, LOW);
  delay(ourdelay);

}

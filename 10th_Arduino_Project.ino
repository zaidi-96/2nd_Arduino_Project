int pot = A0;
int val;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pot, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(pot);
  val = map(val,0,1023,0,5);
  Serial.println(val);
  delay(500);

}

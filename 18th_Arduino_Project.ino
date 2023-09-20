int buzzerpin = 12;
int irsensorpin = A0;
int irsensorvalue = 0;
void setup() {
  // put your setup code here, to run once:
  pinMode(buzzerpin, OUTPUT);
  pinMode(irsensorpin, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  irsensorvalue = analogRead(irsensorpin);
  Serial.print("Sensor value:");
  if(irsensorvalue < 30){
    digitalWrite(buzzerpin, HIGH);
    Serial.println(irsensorvalue);
  }
  else{
    digitalWrite(buzzerpin, LOW);
    Serial.println(irsensorvalue);
  }
  delay(500);

}

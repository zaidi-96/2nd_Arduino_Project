#define trigpin 12
#define echopin 11
#define greenled 13
#define blueled 10
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(trigpin, OUTPUT);
  pinMode (echopin, INPUT);
  pinMode(greenled, OUTPUT);
  pinMode(blueled, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  long duration;
  long distance;
  digitalWrite(trigpin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigpin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigpin, LOW);
  duration = pulseIn(echopin, HIGH);
  distance = (duration/2)/29.1;
  if(distance<8){
    digitalWrite(greenled, HIGH);
    digitalWrite(blueled, LOW);

  }
  else{
    digitalWrite(greenled, LOW);
    digitalWrite(blueled, HIGH);

  }
  if(distance>=200 || distance<0){
    Serial.print("Out of Range");
  }
  else{
    Serial.print("Distance:");
    Serial.println(" cm");

  }
  delay(500);


}

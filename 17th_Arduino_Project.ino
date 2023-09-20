#define soilmoisturepin A0
int moisture;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  moisture = analogRead(A0);
  moisture = (100./1023.)*moisture;
  Serial.print("Moisture of Soil in percentage:");
  Serial.println(moisture);
  delay(500);

}

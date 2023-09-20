int x;
int y;
int val;
int vrxpin = A0;
int vrypin = A1;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  x = analogRead(A0);
  Serial.print("Values along x-axis are:");
  Serial.println(x);
  y = analogRead(A1);
  Serial.print("Values along y-axis are:");
  Serial.println(y);
  delay(500);
  

}

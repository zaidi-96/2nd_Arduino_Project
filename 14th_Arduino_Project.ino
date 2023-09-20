#define red 13
#define green 12
#define blue 11
int val;
int pot = A0;
void setup() {
  // put your setup code here, to run once:
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(A0, INPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(pot);
  Serial.print("Analog Values are:");
  Serial.println(val);
  val = (255./1023.)*val;
  Serial.print("PWM values are:");
  Serial.println(val);
if(val>=0 && val<=50)
 { digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, LOW);
  delay(1000);}
 else if(val>=0 && val<=50)
 {digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  delay(1000);}
 else if(val>=50 && val<=100)
 {digitalWrite(red, LOW);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  delay(1000);}
 else if(val>=100 && val<=150)
 {digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, LOW);
  delay(1000);}
  else if(val>=150 && val<=200)
 {digitalWrite(red, HIGH);
  digitalWrite(green, LOW);
  digitalWrite(blue, HIGH);
  delay(1000);}
 else if(val>=200 && val<=250)
 {digitalWrite(red, HIGH);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  delay(1000);
 }
  else(val>=250 && val<=255)
 {digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  digitalWrite(blue, HIGH);
  delay(1000);
 }
}

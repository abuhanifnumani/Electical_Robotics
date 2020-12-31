void setup() {
  Serial.begin(9600);
}

void loop() {
  int s1 = analogRead(A0);
  int s2 = analogRead(A1);
  int s3 = analogRead(A2);
  int s4 = analogRead(A3);
  int s5 = analogRead(A4);
  int s6 = analogRead(A5);
  Serial.print(s1);
  Serial.print(" ");
  Serial.print(s2);
  Serial.print(" ");
  Serial.print(s3);
  Serial.print(" ");
  Serial.println(s4);
//  Serial.print(" ");
//  Serial.print(s5);
//  Serial.print(" ");
//  Serial.println(s6);
}


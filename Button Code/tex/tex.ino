int a = A5;
int b = A4;
void setup() {
  // put your setup code here, to run once:
  pinMode(a, INPUT);
  delay(200);
  pinMode(b, INPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  int v1 = digitalRead(a);
  delay(200);
  int v2 = digitalRead(b);
  Serial.println(v1);
  delay(200);
  Serial.println(v2);
  delay(200);
}


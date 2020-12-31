int ena = 2,enb=3;

int in1 = 4;
int in2 = 5;
int in3 = 6;
int in4 = 7;
void setup() {
  pinMode(ena, OUTPUT);
  pinMode(in1, OUTPUT);
  pinMode(in2, OUTPUT);

  pinMode(enb, OUTPUT);
  pinMode(in3, OUTPUT);
  pinMode(in4, OUTPUT);
}

void loop() {
  digitalWrite(ina, 1);
  digitalWrite(inb, 0);
  analogWrite(ena, 150);

  digitalWrite(inc, 1);
  digitalWrite(ind, 0);
  analogWrite(enb, 255);
}

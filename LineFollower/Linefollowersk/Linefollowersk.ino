int c;
int ena = 2, enb = 3, ina = 4, inb = 5, inc = 6, ind = 7;
int s1_check, s2_check, s3_check, s4_check, s5_check, s6_check, avg = 300;
long duration, distance;
#define trigPin 11
#define echoPin 12
void setup() {
  Serial.begin(9600);
  pinMode(ena, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(ina, OUTPUT);
  pinMode(inb, OUTPUT);
  pinMode(inc, OUTPUT);
  pinMode(ind, OUTPUT);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  run(0, 0);
}

void loop() {
  sonar();
  if (c == 1) run(0, 0);
  sensor_read();
  if (s1_check == 0 && s2_check == 0 && s3_check == 1 && s4_check == 1 && s5_check == 0 && s6_check == 0) {
    if (c == 1) run(0, 0);
    else run(250, 250);
    c = 0;
  }


  else if (s1_check == 0 && s2_check == 0 && s3_check == 1 && s4_check == 0 && s5_check == 0 && s6_check == 0) {

    run(100, 250);
  }

  else if (s1_check == 0 && s2_check == 1 && s3_check == 1 && s4_check == 0 && s5_check == 0 && s6_check == 0) {

    run(50, 250);
  }
  else if (s1_check == 0 && s2_check == 1 && s3_check == 0 && s4_check == 0 && s5_check == 0 && s6_check == 0) {

    run(-100, 250);
  }
  else if (s1_check == 1 && s2_check == 1 && s3_check == 0 && s4_check == 0 && s5_check == 0 && s6_check == 0) {

    run(-150, 250);
  }
  else if (s1_check == 1 && s2_check == 0 && s3_check == 0 && s4_check == 0 && s5_check == 0 && s6_check == 0) {

    run(-200, 250);
  }

  else if (s1_check == 0 && s2_check == 0 && s3_check == 0 && s4_check == 1 && s5_check == 0 && s6_check == 0) {

    run(250, 100);
  }
  else if (s1_check == 0 && s2_check == 0 && s3_check == 0 && s4_check == 1 && s5_check == 1 && s6_check == 0)
    run(250, 50);

  else if (s1_check == 0 && s2_check == 0 && s3_check == 0 && s4_check == 0 && s5_check == 1 && s6_check == 0)

    run(250, -100);

  else if (s1_check == 0 && s2_check == 0 && s3_check == 0 && s4_check == 0 && s5_check == 1 && s6_check == 1) {

    run(250, -150);
  }
  else if (s1_check == 0 && s2_check == 0 && s3_check == 0 && s4_check == 0 && s5_check == 0 && s6_check == 1) {

    run(250, -200);
  }


  else if (s1_check == 1 && s2_check == 1 && s3_check == 1 && s4_check == 1 && s5_check == 1 && s6_check == 1)
  {

    run(150, 150);

  }
  else if (s1_check == 1 && s2_check == 1 && s3_check == 1 && s4_check == 1 && s5_check == 0 && s6_check == 0)
  {
    run(250, 250);
    delay(30);
    sensor_read();
    if (s1_check == 1 && s2_check == 1 && s3_check == 1 && s4_check == 1 && s5_check == 1 && s6_check == 1)
    {
      run(250, 250);
    }
    else
    {
      sensor_read();
      while (s3_check == 1 || s4_check == 1)
      {
        run(150, 150);
        sensor_read();
      }
      sensor_read();
      while (s3_check != 1)
      {
        run(-200, 230);
        sensor_read();
      }
    }
  }

  else if (s1_check == 1 && s2_check == 1 && s3_check == 1 && s4_check == 0 && s5_check == 0 && s6_check == 0)
  {
    if (c == 1) run(0, 0);
    run(250, 250);
    delay(30);
    sensor_read();
    if (s1_check == 1 && s2_check == 1 && s3_check == 1 && s4_check == 1 && s5_check == 1 && s6_check == 1)
    {
      run(250, 250);
    }
    else
    {
      sensor_read();
      while (s3_check == 1 || s4_check == 1)
      {
        run(150, 150);
        sensor_read();
      }
      sensor_read();
      while (s3_check != 1)
      {
        run(-200, 230);
        sensor_read();
      }
    }
  }


  else if (s1_check == 0 && s2_check == 0 && s3_check == 1 && s4_check == 1 && s5_check == 1 && s6_check == 1)
  {
    if (c == 1) run(0, 0);
    run(250, 250);
    delay(30);
    sensor_read();
    if (s1_check == 1 && s2_check == 1 && s3_check == 1 && s4_check == 1 && s5_check == 1 && s6_check == 1)
    {
      run(250, 250);
    }
    else
    {

      sensor_read();
      while (s3_check == 1 || s4_check == 1)
      {
        run(150, 150);
        sensor_read();
      }
      sensor_read();
      while (s4_check != 1)
      {
        run(230, -200);
        sensor_read();
      }
    }
  }

  else if (s1_check == 0 && s2_check == 0 && s3_check == 0 && s4_check == 1 && s5_check == 1 && s6_check == 1)
  {
    if (c == 1) run(0, 0);
    run(250, 250);
    delay(30);
    sensor_read();
    if (s1_check == 1 && s2_check == 1 && s3_check == 1 && s4_check == 1 && s5_check == 1 && s6_check == 1)
    {
      run(250, 250);
    }
    else
    {
      sensor_read();
      while (s3_check == 1 || s4_check == 1)
      {
        run(150, 150);
        sensor_read();
      }
      sensor_read();
      while (s4_check != 1)
      {
        run(230, -200);
        sensor_read();
      }
    }
  }


}


void sonar() {
  digitalWrite(trigPin, LOW);  // Added this line
  delayMicroseconds(2); // Added this line
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10); // Added this line
  digitalWrite(trigPin, LOW);
  duration = pulseIn(echoPin, HIGH);
  distance = duration * 0.034 / 2;
  Serial.println(distance);
  if (distance > 8) {
    c = 0;
    run(250, 250);
    delayMicroseconds(200);

  }
  if (distance <= 8) { // This is where the LED On/Off happens
    c = 1;
    run(0, 0);
    digitalWrite(13,1);
  }
}




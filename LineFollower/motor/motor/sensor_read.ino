

void sensor_read()
{

  int s1 = analogRead(A0);
  if (s1 >= avg)
  {
    s1_check = 1;
  }
  else
  {
    s1_check = 0;
  }
  int s2 = analogRead(A1);
  if (s2 >= avg)
  {
    s2_check = 1;
  }
  else
  {
    s2_check = 0;
  }
  int s3 = analogRead(A2);
  if (s3 >= avg)
  {
    s3_check = 1;
  }
  else
  {
    s3_check = 0;
  }
  int s4 = analogRead(A3);
  if (s4 >= avg)
  {
    s4_check = 1;
  }
  else
  {
    s4_check = 0;
  }
  int s5 = analogRead(A4);
  if (s5 >= avg)
  {
    s5_check = 1;
  }
  else
  {
    s5_check = 0;
  }
  int s6 = analogRead(A5);
  if (s6 >= avg)
  {
    s6_check = 1;
  }
  else
  {
    s6_check = 0;
  }

}

void test()
{
   sensor_read();
    Serial.print(s1_check);
   Serial.print(" ");
   Serial.print(s2_check);
   Serial.print(" ");
   Serial.print(s3_check);
   Serial.print(" ");
   Serial.print(s4_check);
   Serial.print(" ");
   Serial.print(s5_check);
   Serial.print(" ");
   Serial.println(s6_check);

}

void test_value()
{
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
   Serial.print(s4);
   Serial.print(" ");
   Serial.print(s5);
   Serial.print(" ");
   Serial.println(s6);

  
}


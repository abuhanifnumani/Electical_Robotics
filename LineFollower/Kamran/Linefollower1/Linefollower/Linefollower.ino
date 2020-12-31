
int ena = 8, ina = 9, inb = 10;
int enb = 11, inc = 12, ind = 13;
int s1_check, s2_check, s3_check, s4_check, s5_check, s6_check, avg = 300;

void setup() {
  Serial.begin(9600);
  pinMode(ena, OUTPUT);
  pinMode(enb, OUTPUT);
  pinMode(ina, OUTPUT);
  pinMode(inb, OUTPUT);
  pinMode(inc, OUTPUT);
  pinMode(ind, OUTPUT);
  run(0, 0);
}

void loop() {
  sensor_read();
  //test();
  //test_value();
  /*****************************************straight line & lift S******************************************/

  if (s1_check == 0 && s2_check == 0 && s3_check == 1 && s4_check == 1 && s5_check == 0 && s6_check == 0)
    run(250, 250);
  else if (s1_check == 0 && s2_check == 0 && s3_check == 1 && s4_check == 0 && s5_check == 0 && s6_check == 0)
    run(180, 250);
  else if (s1_check == 0 && s2_check == 1 && s3_check == 1 && s4_check == 0 && s5_check == 0 && s6_check == 0)
    run(200, 250);
  else if (s1_check == 0 && s2_check == 1 && s3_check == 0 && s4_check == 0 && s5_check == 0 && s6_check == 0)
    run(0, 250);
  else if (s1_check == 1 && s2_check == 1 && s3_check == 0 && s4_check == 0 && s5_check == 0 && s6_check == 0)
    run(-180, 250);
  else if (s1_check == 1 && s2_check == 0 && s3_check == 0 && s4_check == 0 && s5_check == 0 && s6_check == 0)
    run(-200, 250);

  /**************************Right S*********************************************/
  else if (s1_check == 0 && s2_check == 0 && s3_check == 0 && s4_check == 1 && s5_check == 0 && s6_check == 0)
    run(250, 180);
  else if (s1_check == 0 && s2_check == 0 && s3_check == 0 && s4_check == 1 && s5_check == 1 && s6_check == 0)
    run(250, 200);
  else if (s1_check == 0 && s2_check == 0 && s3_check == 0 && s4_check == 0 && s5_check == 1 && s6_check == 0)
    run(250, 0);
  else if (s1_check == 0 && s2_check == 0 && s3_check == 0 && s4_check == 0 && s5_check == 1 && s6_check == 1)
    run(250, -180);
  else if (s1_check == 0 && s2_check == 0 && s3_check == 0 && s4_check == 0 && s5_check == 0 && s6_check == 1)
    run(250, -200);

  /************************************************left L***************************************************/
  else if (s1_check == 1 && s2_check == 1 && s3_check == 1 && s4_check == 1 && s5_check == 0 && s6_check == 0)
  {
    sensor_read();
    while (s3_check == 1)
    {
      run(250, 250);
      sensor_read();
    }
    sensor_read();
    while (s3_check != 1)
    {
      run(-180, 250);
      sensor_read();
    }
  }
  else if (s1_check == 1 && s2_check == 1 && s3_check == 1 && s4_check == 1 && s5_check == 1 && s6_check == 0)
  {
    sensor_read();
    while (s3_check == 1)
    {
      run(250, 250);
      sensor_read();
    }
    sensor_read();
    while (s3_check != 1)
    {
      run(-180, 250);
      sensor_read();
    }
  }

  else if (s1_check == 1 && s2_check == 1 && s3_check == 1 && s4_check == 0 && s5_check == 0 && s6_check == 0)
  {
    sensor_read();
    while (s3_check == 1)
    {
      run(250, 250);
      sensor_read();
    }
    sensor_read();
    while (s3_check != 1)
    {
      run(-180, 250);
      sensor_read();
    }
  }

  /***************************************Right L*********************************************/

  else if (s1_check == 0 && s2_check == 0 && s3_check == 1 && s4_check == 1 && s5_check == 1 && s6_check == 1)
  {
    sensor_read();
    while (s4_check == 1)
    {
      run(250, 250);
      sensor_read();
    }
    sensor_read();
    while (s4_check != 1)
    {
      run(250, -180);
      sensor_read();
    }
  }
  else if (s1_check == 0 && s2_check == 0 && s3_check == 0 && s4_check == 1 && s5_check == 1 && s6_check == 1)
  {
    sensor_read();
    while (s4_check == 1)
    {
      run(250, 250);
      sensor_read();
    }
    sensor_read();
    while (s4_check != 1)
    {
      run(250, -180);
      sensor_read();
    }
  }
  else if (s1_check == 0 && s2_check == 1 && s3_check == 1 && s4_check == 1 && s5_check == 1 && s6_check == 1)
  {
    sensor_read();
    while (s4_check == 1)
    {
      run(250, 250);
      sensor_read();
    }
    sensor_read();
    while (s4_check != 1)
    {
      run(250, -180);
      sensor_read();
    }
  }

}

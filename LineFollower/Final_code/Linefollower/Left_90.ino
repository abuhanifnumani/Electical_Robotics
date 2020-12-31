void Left_90() {
 
  if (data = 0b111100)
  {
    sensor_read();
    while (data == 0b001000)
    {
      runs(250, 250);
      sensor_read();
    }
    sensor_read();
    while (data != 0b001000)
    {
      runs(-200, 250);
      sensor_read();
    }
  }

  else if (data = 0b111110)
  {
    sensor_read();
    while (data == 0b001000)
    {
      runs(250, 250);
      sensor_read();
    }
    sensor_read();
    while (data != 0b001000)
    {
      runs(-200, 250);
      sensor_read();
    }
  }

  else if (data = 0b111000)
  {
    sensor_read();
    while (data == 0b001000)
    {
      runs(250, 250);
      sensor_read();
    }
    sensor_read();
    while (data != 0b001000)
    {
      runs(-200, 250);
      sensor_read();
    }
  }
}


void Right_90() {
 
  if (data = 0b001111)
  {
    sensor_read();
    while (data == 0b000100)
    {
      runs(250, 250);
      sensor_read();
    }
    sensor_read();
    while (data != 0b000100)
    {
      runs(-200, 250);
      sensor_read();
    }
  }

  else if (data = 0b011111)
  {
    sensor_read();
    while (data == 0b000100)
    {
      runs(250, 250);
      sensor_read();
    }
    sensor_read();
    while (data != 0b000100)
    {
      runs(-200, 250);
      sensor_read();
    }
  }

 else if (data = 0b000111)
  {
    sensor_read();
    while (data == 0b000100)
    {
      runs(250, 250);
      sensor_read();
    }
    sensor_read();
    while (data != 0b000100)
    {
      runs(-200, 250);
      sensor_read();
    }
  }
}


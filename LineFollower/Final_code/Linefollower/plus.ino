void plus()
{
 
  if (data == 0b111111) {
    delay(100);
    sensor_read();
    if (data == 0b001100) {
      runs(250, 250);
      sensor_read();
    } else if (data == 0b111111) {
      runs(0, 0);
      sensor_read();
    }
  }
}


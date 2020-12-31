void white_color()
{
 
  if (data == 0b000000) {
    delay(100);
    sensor_read();
    if (data == 0b001100) {
      runs(250, 250);
      sensor_read();
    }
    else if (data == 0b001000) {
      runs(250, 240);
      sensor_read();
    }
    else if (data == 0b000100) {
      runs(240, 250);
      sensor_read();
    }
  }
}

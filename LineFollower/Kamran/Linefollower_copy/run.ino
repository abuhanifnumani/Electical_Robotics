void runs(int left, int right)
{
  if (left < 0)
  {
    digitalWrite(inb, HIGH);
    digitalWrite(ina, LOW);
    left = left * -1;
  }
  else
  {
    digitalWrite(inb, LOW);
    digitalWrite(ina, HIGH);
  }
  if (right < 0)
  {
    digitalWrite(inc, LOW);
    digitalWrite(ind, HIGH);
    right = right * -1;
  }
  else
  {
    digitalWrite(inc, HIGH);
    digitalWrite(ind, LOW);
  }
  analogWrite(ena, left);
  analogWrite(enb, right);
}




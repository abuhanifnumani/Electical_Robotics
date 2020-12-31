void sonar()
{
    digitalWrite(fro_tri,LOW);
    delayMicroseconds(2);
    digitalWrite(fro_tri,HIGH);
    delayMicroseconds(2);
    digitalWrite(fro_tri,LOW);
    
    int duration_fro = pulseIn(fro_ec,HIGH);
    
    digitalWrite(lef_tri,LOW);
    delayMicroseconds(2);
    digitalWrite(lef_tri,HIGH);
    delayMicroseconds(2);
    digitalWrite(lef_tri,LOW);
    
    int duration_lef = pulseIn(lef_ec,HIGH);

    left = microsecondsToInches(duration_lef);
    front = microsecondsToInches(duration_fro);
}

int microsecondsToInches(int microseconds)
{
  return microseconds / 74 / 2;
}

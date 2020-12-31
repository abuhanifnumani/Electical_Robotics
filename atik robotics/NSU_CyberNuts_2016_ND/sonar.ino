void sonar()
{
    digitalWrite(fro_tri,LOW);
    delayMicroseconds(2);
    digitalWrite(fro_tri,HIGH);
    delayMicroseconds(5);
    digitalWrite(fro_tri,LOW);
    
    int duration_fro = pulseIn(fro_ec,HIGH);
    front = microsecondsToInches(duration_fro);
    
    digitalWrite(lef_tri,LOW);
    delayMicroseconds(2);
    digitalWrite(lef_tri,HIGH);
    delayMicroseconds(5);
    digitalWrite(lef_tri,LOW);
    
    int duration_lef = pulseIn(lef_ec,HIGH);
    left = microsecondsToInches(duration_lef);
    
}

int microsecondsToInches(int microseconds)
{
  return microseconds / 74 / 2;
}

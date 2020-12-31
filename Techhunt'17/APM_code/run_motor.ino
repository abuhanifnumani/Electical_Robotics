void run_motor(int left,int right)
{
  if(left>=0)
  {
    digitalWrite(in3,LOW);
    digitalWrite(in4,HIGH);
  }
  else
  {
    digitalWrite(in3,HIGH);
    digitalWrite(in4,LOW);
    left*=-1;
  }

  if(right>=0)
  {
    digitalWrite(in1,LOW);
    digitalWrite(in2,HIGH);    
  }
  else
  {
    digitalWrite(in1,HIGH);
    digitalWrite(in2,LOW);
    right*=-1;
  }
  analogWrite(enb,left);
  analogWrite(ena,right);
}


int move(int left,int right)
{
  if(left>0)
  {
    digitalWrite(l1,0);
    digitalWrite(l2,1);
  }
  else
  {
    digitalWrite(l1,1);
    digitalWrite(l2,0);
    left=-left;  
  }

  if(right>0)
  {
    digitalWrite(r1,0);
    digitalWrite(r2,1);
  }
  else
  {
    digitalWrite(r1,1);
    digitalWrite(r2,0);
    right=-right;
  }
  
  analogWrite(enl,left);
  analogWrite(enr,right);
}


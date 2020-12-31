void move(int right, int left) 
   {

        //left=left/2;
        //right=right/2;

       if (right<0) 
       {      
          digitalWrite(ina1,LOW);
          digitalWrite(ina2,HIGH);
          right=-right;
        }
        else 
        {
          digitalWrite(ina2,LOW);
          digitalWrite(ina1,HIGH);  
        }
        if(left<0) 
        {
          digitalWrite(inb1,HIGH);
          digitalWrite(inb2,LOW);
          left=-left;
        }
        else 
        {
            digitalWrite(inb2,HIGH);
            digitalWrite(inb1,LOW);   
        }
        analogWrite(enb,left);
        analogWrite(ena,right);
  }

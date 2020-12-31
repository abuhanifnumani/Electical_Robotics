void calibration()
{
    move(200,200);
    delay(50);
    c1=analogRead(13);
    c2=analogRead(12);
    c3=analogRead(11);
    c4=analogRead(10);
    c5=analogRead(9);
    c6=analogRead(8);
    delay(50);
    t1=analogRead(13);
    t2=analogRead(12);
    t3=analogRead(11);
    t4=analogRead(10);
    t5=analogRead(9);
    t6=analogRead(8);

    dif1=t1-c1;
    if(dif1<0)
      dif1=-dif1;

    dif2=t2-c2;
    if(dif2<0)
      dif2=-dif2;

    dif3=t3-c3;
    if(dif3<0)
      dif3=-dif3;

    dif4=t4-c4;
    if(dif4<0)
      dif4=-dif4;
     
    dif5=t5-c5;
    if(dif5<0)
      dif5=-dif5;

    dif6=t6-c6;
    if(dif6<0)
      dif6=-dif6;
    
     while(true)
     {
          t1=analogRead(13);
          t2=analogRead(12);
          t3=analogRead(11);
          t4=analogRead(10);
          t5=analogRead(9);
          t6=analogRead(8);
      
          dif1=t1-c1;
          if(dif1<0)
            dif1=-dif1;
      
          dif2=t2-c2;
          if(dif2<0)
            dif2=-dif2;
      
          dif3=t3-c3;
          if(dif3<0)
            dif3=-dif3;
      
          dif4=t4-c4;
          if(dif4<0)
            dif4=-dif4;
           
          dif5=t5-c5;
          if(dif5<0)
            dif5=-dif5;
      
          dif6=t6-c6;
          if(dif6<0)
            dif6=-dif6;
          if(dif1>=dif_const && dif2>=dif_const && dif3>=dif_const && dif4>=dif_const && dif5>=dif_const && dif6>=dif_const)
          {
              sen1=(t1+c1)/2;
              sen2=(t2+c2)/2;
              sen3=(t3+c3)/2;
              sen4=(t4+c4)/2;
              sen5=(t5+c5)/2;
              sen6=(t6+c6)/2;
              break;        
          }
          else
            move(200,200);
     }
     
     
     if(c1<sen1)
        surface=0;    // white surface
     else
        surface=1;    // black surface
        
     move(0,0);
}


void sensor_read()
{
    cs1=analogRead(13);
    cs2=analogRead(12);
    cs3=analogRead(11);
    cs4=analogRead(10);
    cs5=analogRead(9);
    cs6=analogRead(8);

    if(surface==0)   // white surface & black line
    {
        if(cs1>sen1)
        {
          s_ch1=1;
          digitalWrite(l1,1);
        }
        else
        {
          s_ch1=0;
          digitalWrite(l1,0);
        }

        if(cs2>sen2)
        {
          s_ch2=1;
          digitalWrite(l2,1);
        }
        else
        {
          s_ch2=0;
          digitalWrite(l2,0);
        }

        if(cs3>sen3)
        {
          s_ch3=1;
          digitalWrite(l3,1);
        }
        else
        {
          s_ch3=0;
          digitalWrite(l3,0);
        }

        if(cs4>sen4)
        {
          s_ch4=1;
          digitalWrite(l4,1);
        }
        else
        {
          s_ch4=0;
          digitalWrite(l4,0);
        }

        if(cs5>sen5)
        {
          s_ch5=1;
          digitalWrite(l5,1);
        }
        else
        {
          s_ch5=0;
          digitalWrite(l5,0);
        }

        if(cs6>sen6)
        {
          s_ch6=1;
          digitalWrite(l6,1);
        }
        else
        {
          s_ch6=0;
          digitalWrite(l6,0);
        }
        
    }
    else     // black surface & white line
    {
      
        if(cs1<sen1)
        {
          s_ch1=1;
          digitalWrite(l1,1);
        }
        else
        {
          s_ch1=0;
          digitalWrite(l1,0);
        }

        if(cs2<sen2)
        {
          s_ch2=1;
          digitalWrite(l2,1);
        }
        else
        {
          s_ch2=0;
          digitalWrite(l2,0);
        }

        if(cs3<sen3)
        {
          s_ch3=1;
          digitalWrite(l3,1);
        }
        else
        {
          s_ch3=0;
          digitalWrite(l3,0);
        }

        if(cs4<sen4)
        {
          s_ch4=1;
          digitalWrite(l4,1);
        }
        else
        {
          s_ch4=0;
          digitalWrite(l4,0);
        }

        if(cs5<sen5)
        {
          s_ch5=1;
          digitalWrite(l5,1);
        }
        else
        {
          s_ch5=0;
          digitalWrite(l5,0);
        }

        if(cs6<sen6)
        {
          s_ch6=1;
          digitalWrite(l6,1);
        }
        else
        {
          s_ch6=0;
          digitalWrite(l6,0);
        }
      
    }

  
}


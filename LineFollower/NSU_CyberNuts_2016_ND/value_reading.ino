void value_reading()
{
    cs1=analogRead(13);
    cs2=analogRead(12);
    cs3=analogRead(11);
    cs4=analogRead(10);
    cs5=analogRead(9);
    cs6=analogRead(8);

    if(surface==0)
    {
        if(cs1>sen1)
          digitalWrite(l1,1);
        else
          digitalWrite(l1,0);

        if(cs2>sen2)
          digitalWrite(l2,1);
        else
          digitalWrite(l2,0);

        if(cs3>sen3)
          digitalWrite(l3,1);
        else
          digitalWrite(l3,0);

        if(cs4>sen4)
          digitalWrite(l4,1);
        else
          digitalWrite(l4,0);

        if(cs5>sen5)
          digitalWrite(l5,1);
        else
          digitalWrite(l5,0);

        if(cs6>sen6)
          digitalWrite(l6,1);
        else
          digitalWrite(l6,0);
    }
    else
    {
      
        if(cs1<sen1)
          digitalWrite(l1,1);
        else
          digitalWrite(l1,0);

        if(cs2<sen2)
          digitalWrite(l2,1);
        else
          digitalWrite(l2,0);

        if(cs3<sen3)
          digitalWrite(l3,1);
        else
          digitalWrite(l3,0);

        if(cs4<sen4)
          digitalWrite(l4,1);
        else
          digitalWrite(l4,0);

        if(cs5<sen5)
          digitalWrite(l5,1);
        else
          digitalWrite(l5,0);

        if(cs6<sen6)
          digitalWrite(l6,1);
        else
          digitalWrite(l6,0);
      
    }
}


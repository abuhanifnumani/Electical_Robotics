void normal_direction()
{

  sensor_read();



  /************************************* Straight **************************************/
  if (s_ch3 == 1 && s_ch4 == 1 && s_ch1 == 0 && s_ch2 == 0 && s_ch5 == 0 && s_ch6 == 0) //straight
  {
    
    move(150, 150);
    while (s_ch3 == 1 && s_ch4 == 1 && s_ch1 == 0 && s_ch2 == 0 && s_ch5 == 0 && s_ch6 == 0)
    {
      sensor_read();
      if (s_ch3 == 1 && s_ch4 == 0)
        break;
      if (s_ch3 == 0 && s_ch4 == 1)
        break;
    }
    move(0, 0);
  }
  /************************************************************************************/












  /******************************************* Normal Right Turn *****************************************/
  else if (s_ch1 == 0 && s_ch2 == 0 && s_ch3 == 0 && s_ch4 == 1 &&  s_ch5 == 0 && s_ch6 == 0)
  {
    move(150,80);
    while (s_ch1 == 0 && s_ch2 == 0 && s_ch3 == 0 && s_ch4 == 1 &&  s_ch5 == 0 && s_ch6 == 0)
    {
      sensor_read();
      if (s_ch3 == 1)
        break;
    }
    move(0, 0);
  }


  else if (s_ch1 == 0 && s_ch2 == 0 && s_ch3 == 0 && s_ch4 == 1 &&  s_ch5 == 1 && s_ch6 == 0)
  {
    move(200,120);
    while (s_ch1 == 0 && s_ch2 == 0 && s_ch3 == 0 && s_ch4 == 1 &&  s_ch5 == 1 && s_ch6 == 0)
    {
      sensor_read();
      if (s_ch3 == 1)
        break;
    }
    move(0, 0);
  }
  else if (s_ch1 == 0 && s_ch2 == 0 && s_ch3 == 0 && s_ch4 == 0 &&  s_ch5 == 1 && s_ch6 == 0)
  {
    move(150, -50);
    while (1)
    {
      sensor_read();
      if (s_ch4 == 1)
        break;
    }

    move(-50, 80);
    delay(50);
    move(0, 0);
  }

  else if (s_ch1 == 0 && s_ch2 == 0 && s_ch3 == 0 && s_ch4 == 0 &&  s_ch5 == 1 && s_ch6 == 1)
  {
    move(150, -80);
    while (1)
    {
      sensor_read();
      if (s_ch6 == 0)
        break;
    }

    move(-50, 120);
    delay(20);
    move(0, 0);
  }

  else if (s_ch1 == 0 && s_ch2 == 0 && s_ch3 == 0 && s_ch4 == 0 &&  s_ch5 == 0 && s_ch6 == 1)
  {
    move(200, -80);
    while (1)
    {
      sensor_read();
      if (s_ch6 == 0)
        break;
    }

    move(-50, 80);
    delay(60);
    move(0, 0);
  }

  /**************************************************************************************/












  /*********************************** Normal Left Turn ***********************************/
  else if (s_ch1 == 0 && s_ch2 == 0 && s_ch3 == 1 && s_ch4 == 0 &&  s_ch5 == 0 && s_ch6 == 0)
  {
    move(120, 180);
    while (s_ch1 == 0 && s_ch2 == 0 && s_ch3 == 1 && s_ch4 == 0 &&  s_ch5 == 0 && s_ch6 == 0)
    {
      sensor_read();
      if (s_ch4 == 1)
        break;
    }
    move(0, 0);
  }

  else if (s_ch1 == 0 && s_ch2 == 1 && s_ch3 == 1 && s_ch4 == 0 &&  s_ch5 == 0 && s_ch6 == 0)
  {
    move(40, 150);
    while (s_ch1 == 0 && s_ch2 == 1 && s_ch3 == 1 && s_ch4 == 0 &&  s_ch5 == 0 && s_ch6 == 0)
    {
      sensor_read();
      if (s_ch4 == 1)
        break;
    }
    move(0, 0);
  }
  else if (s_ch1 == 0 && s_ch2 == 1 && s_ch3 == 0 && s_ch4 == 0 &&  s_ch5 == 0 && s_ch6 == 0)
  {
    move(-50,150);
    while (1)
    {
      sensor_read();
      if (s_ch3 == 1)
        break;
    }

    move(80, -50);
    delay(20);
    move(0, 0);
  }

  else if (s_ch1 == 1 && s_ch2 == 1 && s_ch3 == 0 && s_ch4 == 0 &&  s_ch5 == 0 && s_ch6 == 0)
  {
    move(-50, 220);
    while (1)
    {
      sensor_read();
      if (s_ch1 == 0)
        break;
    }
    move(80, -40);
    delay(30);
    move(0, 0);
  }


  else if (s_ch1 == 1 && s_ch2 == 0 && s_ch3 == 0 && s_ch4 == 0 &&  s_ch5 == 0 && s_ch6 == 0)
  {
    move(-80, 250);
    while (1)
    {
      sensor_read();
      if (s_ch1 == 0)
        break;
    }

    move(120, -50);
    delay(40);
    move(0, 0);
  }

  /***************************************T left turn****************************************/

  else if (s_ch1 == 0 && s_ch2 == 1 && s_ch3 == 1 && s_ch4 == 1 && s_ch5 == 0 && s_ch6 == 0)
  {
    move(120,120);
    delay(40);
    sensor_read();
    if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0){
    while (s_ch3 != 1)
    {
      move(-150, 150);
      sensor_read();
    }
    move(150, -150);
    delay(10);
    
    }
    move(0, 0);
  }
  else if (s_ch1 == 1 && s_ch2 == 1 && s_ch3 == 1 && s_ch4 == 1 && s_ch5 == 0 && s_ch6 == 0)
  {
    move(100,180);
    delay(40);
    sensor_read();
    if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0){
   
    while (s_ch3 != 1)
    {
      move(-180, 250);
      sensor_read();
    }
    move(150, -150);
    delay(10);
    }
    move(0, 0);
  }
  else if (s_ch1 == 1 && s_ch2 == 1 && s_ch3 == 1 && s_ch4 == 0 && s_ch5 == 0 && s_ch6 == 0)
  {
    move(120,180);
    delay(40);
    sensor_read();
    if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0){
   
    while (s_ch3 != 1)
    {
      move(-50, 150);
      sensor_read();
    }
    move(150, 50);
    delay(10);
    }
    move(0, 0);
  }
  else if (s_ch1 == 1 && s_ch2 == 1 && s_ch3 == 1 && s_ch4 == 1 && s_ch5 == 1 && s_ch6 == 0)
  {
    move(120,200);
    delay(40);
    sensor_read();
    if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0){
   
    while (s_ch3 != 1)
    {
      move(-150, 150);
      sensor_read();
    }
    move(150, -150);
    delay(10);
    }
    move(0, 0);
  }


  /******************************************T right Turn***********************************/



  else if (s_ch1 == 0 && s_ch2 == 0 && s_ch3 == 1 && s_ch4 == 1 && s_ch5 == 1 && s_ch6 == 0)
  {
     move(120,120);
    delay(40);
    sensor_read();
    if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0){
   
    while (s_ch3 != 1)
    {
      move(150, -150);
      sensor_read();
    }
    move(-150, 150);
    delay(10);
    }
    move(0, 0);
  }
  else if (s_ch1 == 0 && s_ch2 == 0 && s_ch3 == 1 && s_ch4 == 1 && s_ch5 == 1 && s_ch6 == 1)
  {
    move(120,80);
    delay(40);
    sensor_read();
    if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0){
   
    while (s_ch3 != 1)
    {
      move(250, -180);
      sensor_read();
    }
    move(-150, 150);
    delay(10);
    }
    move(0, 0);
  }
  else if (s_ch1 == 0 && s_ch2 == 0 && s_ch3 == 0 && s_ch4 == 1 && s_ch5 == 1 && s_ch6 == 1)
  {
    move(120,50);
    delay(40);
    sensor_read();
    if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0){
   
    while (s_ch3 != 1)
    {
      move(80, -120);
      sensor_read();
    }
    move(-150, 150);
    delay(10);
    }
    move(0, 0);
  }
  else if (s_ch1 == 0 && s_ch2 == 1 && s_ch3 == 1 && s_ch4 == 1 && s_ch5 == 1 && s_ch6 == 1)
  {
    move(120,120);
    delay(40);
    sensor_read();
    if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0){
   
    while (s_ch3 != 1)
    {
      move(180, -120);
      sensor_read();
    }
    move(-150, 150);
    delay(20);
    }
    move(0, 0);
  }
  else if (s_ch1 == 0 && s_ch2 == 0 && s_ch3 == 1 && s_ch4 == 1 &&  s_ch5 == 0 && s_ch6 == 1)
  {
     move(120,120);
    delay(40);
    sensor_read();
    if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0){
   
    while (s_ch1 == 0 && s_ch2 == 0 && s_ch3 == 1 && s_ch4 == 1 &&  s_ch5 == 0 && s_ch6 == 1)
    {
      move(250, 150);
      sensor_read();
      if (s_ch5 == 1)
        break;
    }
    delay(10);
    }
    move(0, 0);
  }




  /************************************************plse turn***********************************/
  else if (s_ch1 == 1 && s_ch2 == 1 && s_ch3 == 1 && s_ch4 == 1 &&  s_ch5 == 1 && s_ch6 == 1)
  {
    
    move(255, 255);
    delay(10);
    while (s_ch1 == 1 && s_ch2 == 1 && s_ch3 == 1 && s_ch4 == 1 &&  s_ch5 == 1 && s_ch6 == 1)
    {
      move(150, 150);
      sensor_read();
      if (s_ch2 == 1 || s_ch5 == 1)
        break;
    }
    delay(10);
    move(0,0);

  }

  /**************************************other********************************************/

 /* else if (s_ch1 == 0 && s_ch2 == 1 && s_ch3 == 1 && s_ch4 == 1 &&  s_ch5 == 1 && s_ch6 == 0)
  {
    move(-120, -120);
 }*/

  /****************************************************OTHER******************************************************************/

  else
  {
    while (s_ch1 == 0 && s_ch2 == 0 && s_ch3 == 0 && s_ch4 == 0 &&  s_ch5 == 0 && s_ch6 == 0)
    {
      move(-80, -80);
      delay(20);
      sensor_read();
      if (s_ch1 == 1 || s_ch2 == 1 || s_ch3 == 1 && s_ch4 == 1 ||  s_ch5 == 1 || s_ch6 == 1)
        break;
    }
    move(0, 0);
  }
}


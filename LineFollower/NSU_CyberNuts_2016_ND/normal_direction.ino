void normal_direction()
{
  
    delay(4);
    sensor_read();

    
    /************************************* Straight **************************************/
    if(s_ch3==1 && s_ch4==1 && s_ch1==0 && s_ch2==0 && s_ch5==0 && s_ch6==0)   //straight
    {
        //sensor_read();
        if(sp_l<=220 && sp_r<=220)
        {
          sp_l++;
          sp_r++;
        }
        move(sp_l,sp_r);
        while(s_ch3==1 && s_ch4==1 && s_ch1==0 && s_ch2==0 && s_ch5==0 && s_ch6==0)
        {
            sensor_read(); 
            if(s_ch3==1 && s_ch4==0)
              break;
            if(s_ch3==0 && s_ch4==1)
              break;
        }
        move(0,0);
    }  
    /************************************************************************************/





    






    /******************************************* Normal Right Turn *****************************************/
    else if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==1 &&  s_ch5==0 && s_ch6==0)
    {
        move(240,100);
        while(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==1 &&  s_ch5==0 && s_ch6==0)
        {
          sensor_read();
          if(s_ch3==1)
            break;
        }
        move(0,0);
    }
    
    
    else if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==1 &&  s_ch5==1 && s_ch6==0)
    {
        move(220,80);
        while(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==1 &&  s_ch5==1 && s_ch6==0)
        {
          sensor_read();
          if(s_ch5==0)
            break;
        }
        move(0,0);
    }
    else if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 &&  s_ch5==1 && s_ch6==0)
    {
        move(120,-30);
        while(1)
        {
          sensor_read();
          if(s_ch5==0)
            break;
        }
        
        move(-30,120);
        delay(20);
        move(0,0);
    }
    
    else if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 &&  s_ch5==1 && s_ch6==1)
    {
        move(120,-50);
        while(1)
        {
          sensor_read();
          if(s_ch6==0)
            break;
        }
        
        move(-50,120);
        delay(40);
        move(0,0);
    }
    
    else if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 &&  s_ch5==0 && s_ch6==1)
    {
        move(180,-50);
        while(1)
        {
          sensor_read();
          if(s_ch6==0)
            break;
        }
        
        move(-50,180);
        delay(60);
        move(0,0);
    }
    
    /**************************************************************************************/












    /*********************************** Normal Left Turn ***********************************/
    else if(s_ch1==0 && s_ch2==0 && s_ch3==1 && s_ch4==0 &&  s_ch5==0 && s_ch6==0)
    {
        move(100,240);
        while(s_ch1==0 && s_ch2==0 && s_ch3==1 && s_ch4==0 &&  s_ch5==0 && s_ch6==0)
        {
          sensor_read();
          if(s_ch4==1)
            break;
        }
        move(0,0);
    }
    
    else if(s_ch1==0 && s_ch2==1 && s_ch3==1 && s_ch4==0 &&  s_ch5==0 && s_ch6==0)
    {
        move(80,220);
        while(s_ch1==0 && s_ch2==1 && s_ch3==1 && s_ch4==0 &&  s_ch5==0 && s_ch6==0)
        {
          sensor_read();
          if(s_ch2==0)
            break;
        }
        move(0,0);
    }
    else if(s_ch1==0 && s_ch2==1 && s_ch3==0 && s_ch4==0 &&  s_ch5==0 && s_ch6==0)
    {
        move(-30,120);
        while(1)
        {
          sensor_read();
          if(s_ch2==0)
            break;
        }
        
        move(120,-30);
        delay(20);
        move(0,0);
    }
    
    else if(s_ch1==1 && s_ch2==1 && s_ch3==0 && s_ch4==0 &&  s_ch5==0 && s_ch6==0)
    {
        move(-50,120);
        while(1)
        {
          sensor_read();
          if(s_ch1==0)
            break;
        }
        move(120,-50);
        delay(40);
        move(0,0);
    }

    
    else if(s_ch1==1 && s_ch2==0 && s_ch3==0 && s_ch4==0 &&  s_ch5==0 && s_ch6==0)
    {
        move(-50,180);
        while(1)
        {
          sensor_read();
          if(s_ch1==0)
            break;
        }
        
        move(180,-50);
        delay(60);
        move(0,0);
    }
    
    /*******************************************************************************/


    /******************************* T Left Turn ***********************************/
    else if(s_ch1==1 && s_ch2==1 && s_ch3==1 && s_ch4==1 && s_ch5==1 && s_ch6==0)
    {
       
       move(str_t,str_t);
       delay(t_del);
       move(0,0);
       sensor_read();
       if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0)
       {
          
          move(-250,-250);
          delay(t_st_br);
          move(-150,150);
          while(1)
          {
            sensor_read();
            if(s_ch4==1)
              break;
          }
          move(150,-150);
          delay(t_br);
          move(0,0);
       }
    }
    
    else if(s_ch1==1 && s_ch2==1 && s_ch3==1 && s_ch4==1 && s_ch5==0 && s_ch6==0)
    {
       
       move(str_t,str_t);
       delay(t_del);
       move(0,0);
       sensor_read();
       if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0)
       {
          
          move(-250,-250);
          delay(t_st_br);
          move(-150,150);
          while(1)
          {
            sensor_read();
            if(s_ch4==1)
              break;
          }
          
          move(150,-150);
          delay(t_br);
          move(0,0);
       }
    }
    
    else if(s_ch1==1 && s_ch2==1 && s_ch3==1 && s_ch4==0 && s_ch5==0 && s_ch6==0)
    {
       
       move(str_t,str_t);
       delay(t_del);
       move(0,0);
       sensor_read();
       if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0)
       {
          
          move(-250,-250);
          delay(t_st_br);
          move(-150,150);
          while(1)
          {
            sensor_read();
            if(s_ch4==1)
              break;
          }
          
          move(150,-150);
          delay(t_br);
          move(0,0);
       }
    }


    /********************************************************************************/




    /******************************* T Right Turn ***********************************/
    else if(s_ch1==0 && s_ch2==1 && s_ch3==1 && s_ch4==1 && s_ch5==1 && s_ch6==1)
    {
       move(str_t,str_t);
       delay(t_del);
       move(0,0);
       sensor_read();
       if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0)
       {
          
          move(-250,-250);
          delay(t_st_br);
          move(150,-150);
          while(1)
          {
            sensor_read();
            if(s_ch3==1)
              break;
          }
          
          move(-150,150);
          delay(t_br);
          move(0,0);
       }
    }
    
    else if(s_ch1==0 && s_ch2==0 && s_ch3==1 && s_ch4==1 && s_ch5==1 && s_ch6==1)
    {
       
       
       move(str_t,str_t);
       delay(t_del);
       move(0,0);
       sensor_read();
       if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0)
       {
          
          move(-250,-250);
          delay(t_st_br);
          move(150,-150);
          while(1)
          {
            sensor_read();
            if(s_ch3==1)
              break;
          }
          
          move(-150,150);
          delay(t_br);
          move(0,0);
       }
    }
    
    else if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==1 && s_ch5==1 && s_ch6==1)
    {
        
       
       move(str_t,str_t);
       delay(t_del);
       move(0,0);
       sensor_read();
       if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0)
       {
          
          move(-250,-250);
          delay(t_st_br);
          move(150,-150);
          while(1)
          {
            sensor_read();
            if(s_ch3==1)
              break;
          }
          
          move(-150,150);
          delay(t_br);
          move(0,0);
       }
    }


    /********************************************************************************/
    

    /***************************** V Right Turn *************************************/
    else if(s_ch1==0 && s_ch2==0 && s_ch3==1 && s_ch4==1 && s_ch5==0 && s_ch6==1)
    {
       move(220,220);
       delay(v_del);
       move(0,0);
       sensor_read();
       if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0)
       {
          
          move(-250,-250);
          delay(v_st_br);
          move(150,-150);
          while(1)
          {
            sensor_read();
            if(s_ch5==1)
              break;
          }
          move(0,0);
          move(-150,150);
          delay(v_br);
          move(250,250);
          delay(v_st_del);
          move(0,0);
       }
    }
    else if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==1 && s_ch5==0 && s_ch6==1)
    {
       move(220,220);
       delay(v_del);
       move(0,0);
       sensor_read();
       if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0)
       {
          
          move(-250,-250);
          delay(v_st_br);
          move(150,-150);
          while(1)
          {
            sensor_read();
            if(s_ch5==1)
              break;
          }
          move(0,0);
          move(-150,150);
          delay(v_br);
          
          move(250,250);
          delay(v_st_del);
          move(0,0);
       }
    }
    else if(s_ch1==0 && s_ch2==0 && s_ch3==1 && s_ch4==0 && s_ch5==0 && s_ch6==1)
    {
       move(220,220);
       delay(v_del);
       move(0,0);
       sensor_read();
       if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0)
       {
          
          move(-250,-250);
          delay(v_st_br);
          move(150,-150);
          while(1)
          {
            sensor_read();
            if(s_ch5==1)
              break;
          }
          move(0,0);
          move(-150,150);
          delay(v_br);
          
          move(250,250);
          delay(v_st_del);
          move(0,0);
       }
    }
    else if(s_ch1==0 && s_ch2==0 && s_ch3==1 && s_ch4==0 && s_ch5==1 && s_ch6==0)
    {
       move(220,220);
       delay(v_del);
       move(0,0);
       sensor_read();
       if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0)
       {
          
          move(-250,-250);
          delay(v_st_br);
          move(150,-150);
          while(1)
          {
            sensor_read();
            if(s_ch5==1)
              break;
          }
          move(0,0);
          move(-150,150);
          delay(v_br);
          
          move(250,250);
          delay(v_st_del);
          move(0,0);
       }
    }
    /*******************************************************************************/




    /***************************** V Left Turn *************************************/
    else if(s_ch1==1 && s_ch2==0 && s_ch3==1 && s_ch4==1 && s_ch5==0 && s_ch6==0)
    {
       move(220,220);
       delay(v_del);
       move(0,0);
       sensor_read();
       if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0)
       {
          
          move(-250,-250);
          delay(v_st_br);
          move(-150,150);
          while(1)
          {
            sensor_read();
            if(s_ch2==1)
              break;
          }
          move(0,0);
          move(150,-150);
          delay(v_br);
          move(250,250);
          delay(v_st_del);
          move(0,0);
       }
    }
    else if(s_ch1==1 && s_ch2==0 && s_ch3==1 && s_ch4==0 && s_ch5==0 && s_ch6==0)
    {
       move(220,220);
       delay(v_del);
       move(0,0);
       sensor_read();
       if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0)
       {
          
          move(-250,-250);
          delay(v_st_br);
          move(-150,150);
          while(1)
          {
            sensor_read();
            if(s_ch2==1)
              break;
          }
          move(0,0);
          move(150,-150);
          delay(v_br);
          
          move(250,250);
          delay(v_st_del);
          move(0,0);
       }
    }
    else if(s_ch1==1 && s_ch2==0 && s_ch3==0 && s_ch4==1 && s_ch5==0 && s_ch6==0)
    {
       move(220,220);
       delay(v_del);
       move(0,0);
       sensor_read();
       if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0)
       {
          
          move(-250,-250);
          delay(v_st_br);
          move(-150,150);
          while(1)
          {
            sensor_read();
            if(s_ch2==1)
              break;
          }
          move(0,0);
          move(150,-150);
          delay(v_br);
          
          move(250,250);
          delay(v_st_del);
          move(0,0);
       }
    }
    else if(s_ch1==0 && s_ch2==1 && s_ch3==0 && s_ch4==1 && s_ch5==0 && s_ch6==0)
    {
       move(220,220);
       delay(v_del);
       move(0,0);
       sensor_read();
       if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0)
       {
          
          move(-250,-250);
          delay(v_st_br);
          move(-150,150);
          while(1)
          {
            sensor_read();
            if(s_ch2==1)
              break;
          }
          move(0,0);
          move(150,-150);
          delay(v_br);
          
          move(250,250);
          delay(v_st_del);
          move(0,0);
       }
    }
    /*******************************************************************************/

    



    /************************************* Plus Way ****************************************/
    else if(s_ch1==1 && s_ch2==1 && s_ch3==1 && s_ch4==1 && s_ch5==1 && s_ch6==1)
    {
      move(200,200);
    }
    /***************************************************************************************/
    else if(s_ch1==0 && s_ch2==0 && s_ch3==0 && s_ch4==0 && s_ch5==0 && s_ch6==0)
    {
      move(-250,-250);
      delay(10);
      move(150,150);
      delay(50);
      move(0,0);
      sonar();
      delay(40);
      while(true)
      {
          sonar();
          sensor_read();
          if(s_ch1==1 || s_ch2==1 || s_ch3==1 || s_ch4==1 || s_ch5==1 || s_ch6==1)
            break;
          if(left>3 && front>=8)
          {
              move(100,150);
          }
          else if(left<3 && front>=8)
          {
              move(150,100);
          }
          else if(left==3 && front>=8)
          {
              move(150,150);
          }
          else if(left>=20 && front<8)
          {
                      
              move(-220,-220);
              delay(20);
              move(200,200);
              delay(115);
              sonar();
              while(front<=20)
              {
                move(-150,150);
                sonar();
              }
                      
              move(-150,150);
              delay(90);
              move(150,150);
              delay(100);
              move(0,0);
          }
          /*else if(left<=5 && front<=8)
          {
             move(250,250);
             delay(26);
            sonar();
            while(front<=29)
            {
              move(250,-250);
              sonar();
            }
            move(250,-250);
            delay(200);
            move(0,0);
            
              
          }*/
          else
          {
            move(0,0);
          }
          
          
          
      }
    }





    /******************************************* Other ***************************************/
    else
    {
      move(200,200);
    }
    /***************************************************************************************/
    
}


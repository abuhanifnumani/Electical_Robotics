int ena = 8, ina = 9, inb = 10;
int enb = 11, inc = 12, ind = 13;

//int ena = 10, ina = 9, inb =8 ;
//int enb = 7, inc = 6, ind = 5;
int s1_check, s2_check, s3_check, s4_check, s5_check, s6_check, avg = 300;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);

  pinMode(ena,OUTPUT);
  pinMode(ina,OUTPUT);
  pinMode(inb,OUTPUT);

  pinMode(enb,OUTPUT);
  pinMode(inc,OUTPUT); 
  pinMode(ind,OUTPUT);
 
  motor_run(0,0);
}

void loop() {
 sensor_read();
  test_value();
 //For Straight Line-right 
  if (s1_check == 0 && s2_check == 0 && s3_check == 1 && s4_check == 1 && s5_check == 0 && s6_check == 0)//only Straight
  {
    motor_run(250, 250);
   // delay(20);
  } 
  else if (s1_check == 0 && s2_check == 0 && s3_check == 1 && s4_check == 0 && s5_check == 0 && s6_check == 0)
    motor_run(180, 250);//200,250
 

  //For Straight Line-Left
  
   else if (s1_check == 0 && s2_check == 0 && s3_check == 0 && s4_check == 1 && s5_check == 0 && s6_check == 0)
    motor_run(250, 180);//250,200
 

  //For Right-L Turn
 
   else if (s1_check == 1 && s2_check == 1 && s3_check == 1 && s4_check == 1 && s5_check == 0 && s6_check == 0)
  {
    sensor_read();
    while(s3_check==1)
    {
      motor_run(250,250);
      sensor_read();
    }
    sensor_read();
    while(s3_check!=1)
    {
      motor_run(-200,250);
      sensor_read();
    }
  }
   else if (s1_check == 1 && s2_check == 1 && s3_check == 1 && s4_check == 1 && s5_check == 1 && s6_check == 0)
  {
    sensor_read();
    while(s3_check==1)
    {
      motor_run(250,250);
      sensor_read();
    }
    sensor_read();
    while(s3_check!=1)
    {
      motor_run(-200,250);
      sensor_read();
    }
  }

  else if (s1_check == 1 && s2_check == 1 && s3_check == 1 && s4_check == 0 && s5_check == 0 && s6_check == 0)
  {
    sensor_read();
    while(s3_check==1)
    {
      motor_run(250,250);
      sensor_read();
    }
    sensor_read();
    while(s3_check!=1)
    {
      motor_run(-200,250);
      sensor_read();
    }
  }
  

  //For Left-L Turn

  else if (s1_check == 0 && s2_check == 0 && s3_check == 1 && s4_check == 1 && s5_check == 1 && s6_check == 1)
  {
    sensor_read();
    while(s4_check==1)
    {
      motor_run(250,250);
      sensor_read();
    }
    sensor_read();
    while(s4_check!=1)
    {
      motor_run(250,-200);
      sensor_read();
    }
  }

  else if (s1_check == 0 && s2_check == 1 && s3_check == 1 && s4_check == 1 && s5_check == 1 && s6_check == 1)
  {
    sensor_read();
    while(s4_check==1)
    {
      motor_run(250,250);
      sensor_read();
    }
    sensor_read();
    while(s4_check!=1)
    {
      motor_run(250,-200);
      sensor_read();
    }
  }

  else if (s1_check == 0 && s2_check == 0 && s3_check == 0 && s4_check == 1 && s5_check == 1 && s6_check == 1)
  {
    sensor_read();
    while(s4_check==1)
    {
      motor_run(250,250);
      sensor_read();
    }
    sensor_read();
    while(s4_check!=1)
    {
      motor_run(250,-200);
      sensor_read();
    }
  }

  
//   For Gap Line 
  else if(s1_check == 0 && s2_check == 0 && s3_check == 0 && s4_check == 0 && s5_check == 0 && s6_check == 0)
  {
    motor_run(250,250);  
    // delay(70);
  }

  
  
   
}

int ina1=5,ina2=6,inb1=2,inb2=3,ena=7,enb=4;
int c1,c2,c3,c4,c5,c6,t1,t2,t3,t4,t5,t6,dif1,dif2,dif3,dif4,dif5,dif6,calib_flag,sen1,sen2,sen3,sen4,sen5,sen6,surface,cs1,cs2,cs3,cs4,cs5,cs6,s_ch1,s_ch2,s_ch3,s_ch4,s_ch5,s_ch6;
int sw1=25,sw2=22,sw4=23,sw5=24,s1,s2,s3,s4,s5;
int l1=14,l2=15,l3=16,l4=17,l5=18,l6=19;;
int sp_l=100,sp_r=100,plus_flag;
int dif_const=300;   // calibration difference value
int v_del=290,t_del=100,str_t=150,t_br=80,t_st_br=50,v_st_br=240,v_br=25,v_st_del=0;
int fro_ec=22,lef_ec=24,fro_tri=23,lef_tri=25,front,left;
void setup() {

    //Serial.begin(9600);
    calib_flag=0;
    move(250,250);
    // put your setup code here, to run once:
    pinMode(fro_tri,OUTPUT);
    pinMode(lef_tri,OUTPUT);
    pinMode(fro_ec,INPUT);
    pinMode(lef_ec,INPUT);
    pinMode(ina1,OUTPUT);
    pinMode(ina2,OUTPUT);
    pinMode(inb1,OUTPUT);
    pinMode(inb2,OUTPUT);
    pinMode(ena,OUTPUT);
    pinMode(enb,OUTPUT);
    pinMode(l1,OUTPUT);
    pinMode(l2,OUTPUT);
    pinMode(l3,OUTPUT);
    pinMode(l4,OUTPUT);
    pinMode(l5,OUTPUT);
    pinMode(l6,OUTPUT);
    pinMode(sw1,INPUT);
    pinMode(sw2,INPUT);
   // pinMode(sw3,INPUT);
    pinMode(sw4,INPUT);
    pinMode(sw5,INPUT);
    //move(250,250);
  }

void loop() {
  // put your main code here, to run repeatedly:

    //sonar();
    //Serial.println(left);
    //Serial.println(front);
    blinking1();
    plus_flag=0;
    sp_l=180;sp_r=180;
    s4=digitalRead(sw4);
    s2=digitalRead(sw2);
    //s3=digitalRead(sw3);
    //s4=digitalRead(sw4);
    s5=digitalRead(sw5);
    //Serial.println(s5);
    if(s5==1)
    {
        sonar();
        //Serial.println(s5);
        blinking2();
        delay(200);
        if(calib_flag==0)
        {
          //Serial.println(s5);
          calibration();
        }
        calib_flag=1;
        while(true)
        {
            value_reading();
            s5=digitalRead(sw5);
            if(s5==1)
              break;
        }
    }
    else if(s4==1 && calib_flag==1)
    { 
        blinking2();
        delay(300);
        move(220,220);
        delay(300);
        move(0,0);
        while(true)
        {
            normal_direction();
            s5=digitalRead(sw5);
            if(s5==1)
            {
              move(0,0);
              break;
            }
        }
    }
    else if(s2==1)
    {
        blinking2();
        delay(200);
        while(1)
        {
          
           if(dif_const<=600 && dif_const>=200)
           {
             s1=0;s2=0;
             s2=digitalRead(sw2);
             s3=digitalRead(sw4);
             s5=digitalRead(sw5);
             if(s5==1)
              break;
             delay(80);
              if(s3==1 && dif_const<600)
              {
                calib_flag=0;
                dif_const+=100;
              }
              else if(s2==1 && dif_const>200)
              {
                calib_flag=0;
                dif_const-=100;
              }
           }
          if(dif_const==100)
          {
            digitalWrite(l1,0);
            digitalWrite(l2,0);
            digitalWrite(l3,0);
            digitalWrite(l4,0);
            digitalWrite(l5,0);
            digitalWrite(l6,1);
          }
          else if(dif_const==200)
          {
            digitalWrite(l1,0);
            digitalWrite(l2,0);
            digitalWrite(l3,0);
            digitalWrite(l4,0);
            digitalWrite(l5,1);
            digitalWrite(l6,1);
          }
          else if(dif_const==300)
          {
            digitalWrite(l1,0);
            digitalWrite(l2,0);
            digitalWrite(l3,0);
            digitalWrite(l4,1);
            digitalWrite(l5,1);
            digitalWrite(l6,1);
          }
          else if(dif_const==400)
          {
            digitalWrite(l1,0);
            digitalWrite(l2,0);
            digitalWrite(l3,1);
            digitalWrite(l4,1);
            digitalWrite(l5,1);
            digitalWrite(l6,1);
          }
          else if(dif_const==500)
          {
            digitalWrite(l1,0);
            digitalWrite(l2,1);
            digitalWrite(l3,1);
            digitalWrite(l4,1);
            digitalWrite(l5,1);
            digitalWrite(l6,1);
          }
          else if(dif_const==600)
          {
            digitalWrite(l1,1);
            digitalWrite(l2,1);
            digitalWrite(l3,1);
            digitalWrite(l4,1);
            digitalWrite(l5,1);
            digitalWrite(l6,1);
          }
        }
    }
    blinking2();
      
}

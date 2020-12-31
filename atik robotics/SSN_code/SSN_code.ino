
#include<Servo.h>
//Initialization 
int in1,in2,in3,in4,ena,enb,fbdel=50,lrdel=50,led=12,laser=13,sw=0,i;

Servo s_center,s_front;
int c_pos,f_pos;
String line; 
char input[1000];



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  in1=7;
  in2=6;
  in3=4;
  in4=5;
  ena=9;
  enb=8;
  
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(ena,OUTPUT);
  pinMode(enb,OUTPUT);
  //pinMode(13,OUTPUT);
  s_center.attach(3);
  s_front.attach(2);
  c_pos=120;
  s_center.write(c_pos);
  f_pos=100;
  s_front.write(f_pos);
}

void loop() {
  // put your main code here, to run repeatedly:
    line=read_line();
    if(line=="F")
    {
      run_motor(250,250);
      delay(fbdel);
    }
    else if(line=="B")
    {
      run_motor(-250,-250);
      delay(fbdel);
    }
    else if(line=="L")
    {
      run_motor(-250,250);
      delay(lrdel);
    }
    else if(line=="R")
    {
      run_motor(250,-250);
      delay(lrdel);
    }
    else if(line=="U")
    {
      if(c_pos<=125)
        c_pos+=5;
      s_center.write(c_pos);
    }
    else if(line=="D")
    {
      if(c_pos>30)
        c_pos-=5;
       s_center.write(c_pos);
    }
    else if(line=="O")
    {
      if(f_pos<=120)
      {
        f_pos+=5;
        s_front.write(f_pos);
      }
    }
    else if(line=="C")
    {
      if(f_pos>=20)
      {
        f_pos-=5;
        s_front.write(f_pos);
      }
    }
    
    run_motor(0,0);
  
 
}

String read_line() {  //block untill a line found, delimeter='\n'
  i=0;
  while(1) {
    while(Serial.available()==0);
    char ch=Serial.read();
    if(ch=='\n')
      break;
    else {
      input[i++]=ch;
    }
  }
  input[i]='\0';
  return String(input);
}

#include <Servo.h>
//#include <SoftwareSerial.h>

int l1=4,l2=3,enl=2,r1=6,r2=5,enr=7,led=20,laser=17,sw=0,fbdel=50,lrdel=50;
int i;
Servo servo,servo_left,servo_right;

//SoftwareSerial bt(18,19);


String line; 
char input[2000];

int pos1,posl,posr;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial1.begin(9600);
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(enl,OUTPUT);
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(enr,OUTPUT);
  pinMode(laser,OUTPUT);
  pinMode(led,OUTPUT);
  servo.attach(8);
  servo_left.attach(9);
  servo_right.attach(10);
  pos1=155;
  servo.write(pos1);
  posl=125;
  servo_left.write(posl);
  posr=65;
  servo_right.write(posr);
  digitalWrite(laser,1);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(true)
  {
    line=read_line();
    if(line=="F")
    {
      move(250,250);
      delay(fbdel);
    }
    else if(line=="B")
    {
      move(-250,-250);
      delay(fbdel);
    }
    else if(line=="L")
    {
      move(250,-250);
      delay(lrdel);
    }
    else if(line=="R")
    {
      move(-250,250);
      delay(lrdel);
    }
    else if(line=="U")
    {
      if(pos1<155)
        pos1+=5;
      servo.write(pos1);
      
    }
    else if(line=="D")
    {
      if(pos1>5)
        pos1-=5;
       servo.write(pos1);
       
    }

    
    else if(line=="O")
    {
      Serial.println(line);
      Serial.println(posl);
      Serial.println(posr);
      if(posl>125 && posr<65)
      {
        posl-=5;
        posr+=5;
        servo_left.write(posl);
        servo_right.write(posr);
      }
    }

    else if(line=="C")
    {
      Serial.println(line);
      Serial.println(posl);
      Serial.println(posr);
      if(posl<180 && posr>0)
      {
        posl+=5;
        posr-=5;
        servo_left.write(posl);
        servo_right.write(posr);
      }
    }

    else if(line=="H")
    {
      if(sw==0)
      {
        fbdel=5;
        lrdel=20;
        digitalWrite(led,1);
        delay(50);
        sw=1;
      }
      else if(sw==1)
      {
        fbdel=50;
        lrdel=50;
        digitalWrite(led,0);
        delay(50);
        sw=0;
      }
    }
    
    move(0,0);
    
  }  
}



String read_line() {  //block untill a line found, delimeter='\n'
  i=0;
  while(1) {
    while(Serial1.available()==0);
    char ch=Serial1.read();
    if(ch=='\n')
      break;
    else {
      input[i++]=ch;
    }
  }
  input[i]='\0';
  return String(input);
}

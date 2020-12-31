

//Initialization 
int in1,in2,in3,in4,ena,enb,fbdel=50,lrdel=50,led=7,laser=6,sw=0,i;

String line; 
char input[1000];



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  in1=12;
  in2=11;
  in3=9;
  in4=8;
  ena=13;
  enb=10;
  
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in4,OUTPUT);
  pinMode(ena,OUTPUT);
  pinMode(enb,OUTPUT);
  pinMode(laser,OUTPUT);
  pinMode(led,OUTPUT);

  digitalWrite(laser,1);
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

    /*
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
       if(posl<180 && posr>0)
      {
        posl+=5;
        posr-=5;
        servo_left.write(posl);
        servo_right.write(posr);
      }
    }
    */

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

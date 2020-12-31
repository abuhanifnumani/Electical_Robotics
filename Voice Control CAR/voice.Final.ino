

int l1=10,l2=9,enl=11,r1=4,r2=5,enr=6,fbdel=200,lrdel=200;
int i;


//SoftwareSerial bt(18,19);


String line,com; 
char input[200];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(enl,OUTPUT);
  pinMode(r1,OUTPUT);
  pinMode(r2,OUTPUT);
  pinMode(enr,OUTPUT);
  
}

void loop() {
   
    while(Serial.available()){
      char ch=Serial.read();
      if(ch=='f' || ch=='F')
      {
        //Serial.print("YES");
        move(250,250);
        delay(fbdel);
      }
      if(ch=='b'  || ch=='B')
      {
        //Serial.print("YES");
        move(-250,-250);
        delay(fbdel);
      }
      
      if(ch=='l'  || ch=='L')
      {
        //Serial.print("YES");
        move(-250,250);
        delay(fbdel);
        move(0,0);
      }
      
      if(ch=='r'  || ch=='R')
      {
        //Serial.print("YES");
        move(250,-250);
        delay(fbdel);
        move(0,0);
      }
      if(ch=='s'  || ch=='S')
      {
        //Serial.print("YES");
        move(0,0);
        delay(fbdel);
      }
    }
   
    
    /*
    if(line==com)
    {
      //Serial.print("YES");
      move(250,250);
      delay(fbdel);
    }
    /*
    else if(ch=='B')
    {
      //Serial.print(line);
      move(-250,-250);
      delay(fbdel);
    }
    else if(ch=='L')
    {
      //Serial.print(line);
      move(250,-250);
      delay(lrdel);
    }
    else if(ch=='R')
    {
      //Serial.print(line);
      move(-250,250);
      delay(lrdel);
    }
    */
    
    
    
 
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


int move(int left,int right)
{
    
  if(left>=0)
  {
    digitalWrite(l1,1);
    digitalWrite(l2,0);
  }
  else if(left<0)
  {
    digitalWrite(l1,0);
    digitalWrite(l2,1);
    left=left*-1;
  }

  if(right>=0)
  {
    digitalWrite(r1,0);
    digitalWrite(r2,1);
  }
  else if(right<0)
  {
    digitalWrite(r1,1);
    digitalWrite(r2,0);
    right=right*-1;
  }

  analogWrite(enl,left);
  analogWrite(enr,right);
}


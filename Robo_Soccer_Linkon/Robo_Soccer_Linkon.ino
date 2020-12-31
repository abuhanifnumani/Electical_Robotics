int ena=7,ina=5,inb=6;//ina,inb right
int enb=13,inc=11,ind=12;//inc,ind left
char command;            //Int to store app command state.
int speedCar = 250;
int d_delay=100;  

void setup() {

  
  // put your setup code here, to run once:
   pinMode(ena,OUTPUT);
  pinMode(ina,OUTPUT);
  pinMode(inb,OUTPUT);
 
  pinMode(enb,OUTPUT);
  pinMode(inc,OUTPUT); 
  pinMode(ind,OUTPUT);

 
  Serial.begin(9600);  
  
}


void forward(){
    
     digitalWrite(ina,HIGH);  
     digitalWrite(inb,LOW); 
     analogWrite(ena, speedCar);
    
    digitalWrite(inc,HIGH);  
    digitalWrite(ind,LOW); 
    analogWrite(enb, speedCar);
     
    delay(d_delay);
    analogWrite(ena, 0);
    analogWrite(enb, 0);
  }
  void backward(){
    
    digitalWrite(ina,LOW);
    digitalWrite(inb,HIGH);
    analogWrite(ena, speedCar);
     
    digitalWrite(inc,LOW);
    digitalWrite(ind,HIGH);
    analogWrite(enb, speedCar);

    delay(d_delay);
    analogWrite(ena, 0);
    analogWrite(enb, 0);
  
  }
   void right(){
    
    digitalWrite(ina,LOW);
    digitalWrite(inb,HIGH);
    analogWrite(ena, speedCar);
      
    digitalWrite(inc,HIGH);
    digitalWrite(ind,LOW);
    analogWrite(enb, speedCar);
    delay(d_delay);
    analogWrite(ena, 0);
    analogWrite(enb, 0);
  }
    void left(){
   digitalWrite(ina,HIGH);
    digitalWrite(inb,LOW);
    analogWrite(ena, speedCar);
    
    digitalWrite(inc,LOW);
    digitalWrite(ind,HIGH);
    analogWrite(enb, speedCar);
 
      
    delay(d_delay);
    analogWrite(ena, 0);
    analogWrite(enb, 0);
       
  }
  void stopcar(){
    digitalWrite(ina,LOW);
    digitalWrite(inb,LOW);
    analogWrite(ena, speedCar);
    
    digitalWrite(inc,LOW);
    digitalWrite(ind,LOW);
    analogWrite(enb, speedCar);      
    }
//    void Run()
//    {
//     digitalWrite(ina,HIGH);  
//     digitalWrite(inb,LOW); 
//     analogWrite(ena, speedCar);
//    
//    digitalWrite(inc,HIGH);  
//    digitalWrite(ind,LOW); 
//    analogWrite(enb, speedCar);
//    }
    
    void Rotate(){
    digitalWrite(ina,HIGH);
    digitalWrite(inb,LOW);
    analogWrite(ena, speedCar);
      
    digitalWrite(inc,LOW);
    digitalWrite(ind,HIGH);
    analogWrite(enb, speedCar);
  }
void loop(){
    
   
if (Serial.available() > 0) {
  command = Serial.read();
  stopcar();      //Initialize with motors stopped.

switch (command) { 
case 'F':forward();break;
case 'B':backward();break;
case 'R':right();break;
case 'L':left();break;

case 'S':stopcar();break;
case 'G':Rotate();break;
//case 'U':Servo_Up();break;
//case 'D':Servo_Down();break;
//case 'O':Servo_Open();break;
//case 'C':Servo_Close();break;
case '1':speedCar = 250 ;break;
//case '2':speedCar = 160;break;
case '3':speedCar = 200;break;
case '4':d_delay=20;break;
case '5':d_delay=40;break;
case '6':d_delay=30;break;

}
}
}

////Robo_Soccer_Leading_Uni_Carnival

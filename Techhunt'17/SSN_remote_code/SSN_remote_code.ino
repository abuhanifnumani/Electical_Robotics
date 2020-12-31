int led=5;
int sw1=9,sw2=11,sw3=10,sw4=12,sw5=6,sw6=7,sw7=8,sw8=2,sw9=3,sw10=4,sw11=5,fl;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial1.begin(38400);
  
  pinMode(led,OUTPUT);
  digitalWrite(led,1);
  delay(200);
  digitalWrite(led,0);
  delay(200);
  digitalWrite(led,1);
  delay(200);
  digitalWrite(led,0);
  delay(200);

  while(true)
  {
    int v8=analogRead(sw8);
    int v9=analogRead(sw9);
    int v5=analogRead(sw5);
    if(v8>=400)
    {
      digitalWrite(led,1);
      delay(50);
      fl=8;
      digitalWrite(led,0);
      break;
    }
    else if(v9>=400)
    {
      digitalWrite(led,1);
      delay(50);
      fl=9;
      digitalWrite(led,0);
      break;
    }
    else if(v5>=400)
    {
      digitalWrite(led,1);
      delay(50);
      fl=5;
      digitalWrite(led,0);
      break;
    }
  }
  Serial1.write("AT");
  Serial1.write("\r\n");
  delay(500);
  Serial1.write("AT+INIT");
  Serial1.write("\r\n");
  delay(500);
  if(fl==8)
    Serial1.write("AT+PAIR=0021,13,03417E,30");
  else if(fl==9)
    Serial1.write("AT+PAIR=2015,12,073067,30");
  else if(fl==5)
    Serial1.write("AT+PAIR=2015,05,210663,30");

    
  Serial1.write("\r\n");
  delay(500);
  
  if(fl==8)
    Serial1.write("AT+LINK=0021,13,03417E");
  else if(fl==9)
    Serial1.write("AT+LINK=2015,12,073067");
  else if(fl==5)
    Serial1.write("AT+LINK=2015,05,210663");
    
  Serial1.write("\r\n");  
  delay(500);
  digitalWrite(led,0);
  delay(500);
  digitalWrite(led,1);
  delay(500);
  digitalWrite(led,0);
  delay(500);
  digitalWrite(led,1);
  delay(500);
  digitalWrite(led,0);
  delay(500);
  digitalWrite(led,1);
  delay(500);
  digitalWrite(led,0);
  Serial.println("Ready");



}

void loop() {
      
      int v1=analogRead(sw1);
      int v2=analogRead(sw2);
      int v3=analogRead(sw3);
      int v4=analogRead(sw4);
      int v5=analogRead(sw5);
      int v6=analogRead(sw6);
      int v7=analogRead(sw7);
      int v8=analogRead(sw8);
      int v9=analogRead(sw9);
      int v10=analogRead(sw10);
      int v11=analogRead(sw11);
     
      
      if(v1>=400)
      {
        digitalWrite(led,1);
        Serial1.write("F\n");
        delay(50);
      }
      
      else if(v2>=400)
      {
        digitalWrite(led,1);
        Serial1.write("R\n");
        delay(50);
      }
      else if(v3>=400)
      {
        digitalWrite(led,1);
        Serial1.write("L\n");
        delay(50);
      }
        
      else if(v4>=400)
      {
        digitalWrite(led,1);
        Serial1.write("B\n");
        delay(50);
      }
      
      else if(v5>=400)
      {
        digitalWrite(led,1);
        Serial1.write("H\n");
        delay(150);
      }

      else if(v8>=400)
      {
        digitalWrite(led,1);
        Serial1.write("C\n");
        delay(50);
      }
      
      else if(v9>=400)
      {
        digitalWrite(led,1);
        Serial1.write("O\n");
        delay(50);
      }

      else if(v10>=400)
      {
        digitalWrite(led,1);
        Serial1.write("U\n");
        delay(50);
      }

      else if(v11>=400)
      {
        digitalWrite(led,1);
        Serial1.write("D\n");
        delay(50);
      }
      
      
  
  // put your main code here, to run repeatedly:
  
  digitalWrite(led,0);
}



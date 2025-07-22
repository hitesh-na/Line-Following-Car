// Black Line Follower 

int IR2=9;    //left Sensor
// motor one
int m1=2;
int m2=3;
int m3=4;
int m4=5;
void setup() 
{
  // put your setup code here, to run once:
  
 
  pinMode(m1,OUTPUT);
  pinMode(m2,OUTPUT);
  pinMode(m3,OUTPUT);
  pinMode(m4,OUTPUT);
}
void loop() 
{
   if(digitalRead(IR2)==HIGH ) //IR will not glow on black line
  {
    //Stop both Motors
    digitalWrite(m1,LOW);
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m4,LOW);
   
  }

  else if(digitalRead(IR2)==LOW )  //IR not on black line
  {
    //Move both the Motors
    digitalWrite(m1,HIGH);
    digitalWrite(m2,LOW);
    digitalWrite(m3,HIGH);
    digitalWrite(m4,LOW);
    
  }

  else if(digitalRead(IR2)==LOW )
  {
    //Tilt robot towards left by stopping the left wheel and moving the right one
    digitalWrite(m1,HIGH);     
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m4,HIGH);
    
   delay(100);
  }

  else if(digitalRead(IR2)==HIGH )
  {
    //Tilt robot towards right by stopping the right wheel and moving the left one
     digitalWrite(m1,LOW);     // If I want to turn right then the speed of the right wheel should be less than that of the left wheel, here, let a be the right wheel
    digitalWrite(m2,HIGH);
    digitalWrite(m3,HIGH);
    digitalWrite(m4,LOW);
   
   delay(100);
  }

  else
  {
    //Stop both the motors
    digitalWrite(m1,LOW);
    digitalWrite(m2,LOW);
    digitalWrite(m3,LOW);
    digitalWrite(m4,LOW);
   
  }
}

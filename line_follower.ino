int m1=2;
int m2=3;
int m3=4;
int m4=5;
int enA=3;
int enB=2;
int led = 10;
int led1 = 11;
int ir = 2;
int output;
void setup() {
pinMode(led,OUTPUT);
pinMode(led1,OUTPUT);
pinMode(ir,INPUT);
pinMode(m1,OUTPUT);
pinMode(m2,OUTPUT);
pinMode(m3,OUTPUT);
pinMode(m4,OUTPUT);
pinMode(enA,OUTPUT);
pinMode(enB,OUTPUT);
}

void loop() {
  output = digitalRead(ir);
if (output == HIGH)
{
  digitalWrite(led,HIGH);
  digitalWrite(led1,LOW);
analogWrite(enA, 255);
analogWrite(enB, 255);
digitalWrite(m1,HIGH);
digitalWrite(m2,LOW);         //left
digitalWrite(m3,HIGH);
digitalWrite(m4,HIGH); 
}
else
{
  digitalWrite(led,LOW);
  digitalWrite(led1,HIGH);
analogWrite(enA, 255);
analogWrite(enB, 255);
digitalWrite(m1,LOW);
digitalWrite(m2,LOW);         //right
digitalWrite(m3,HIGH);
digitalWrite(m4,LOW); 
}
}

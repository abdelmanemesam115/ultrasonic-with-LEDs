void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(13,OUTPUT);
pinMode(12,INPUT);
 
  
}
void loop() {
  // put your main code here, to run repeatedly:
long t=0,d=0;
digitalWrite(13,0);
delayMicroseconds(2);
 digitalWrite(13,1);
 delayMicroseconds(10);
 digitalWrite(13,0);
 t=pulseIn(12,1);
 d=.0343*(t/2);
 Serial.println(d);
  if(d<=100){
  digitalWrite(8,HIGH);
    digitalWrite(9,LOW);
     digitalWrite(10,LOW);
  }
  else if(d>100 && d<=200){
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
     digitalWrite(10,LOW);
  }
   else if(d>200 && d<300){
   digitalWrite(8,HIGH);
   digitalWrite(9,HIGH);
     digitalWrite(10,HIGH); 
  }
  else{
   digitalWrite(8,LOW);
   digitalWrite(9,LOW);
     digitalWrite(10,LOW); 
  }
  } 
  
  
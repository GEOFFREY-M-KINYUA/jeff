int bluepin=4;     //metres per seconds
int greenpin=3;
int yellowpin=2;
int redpin=1;
int motorPin=6;    
int sourcepin=8;
#define trigpin A1
#define echopin A2


void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);
pinMode(trigpin,OUTPUT);
pinMode(echopin,INPUT);
pinMode(redpin, OUTPUT); 
pinMode(yellowpin, OUTPUT);
pinMode(greenpin, OUTPUT);
pinMode(bluepin, OUTPUT);
pinMode(motorPin,OUTPUT);


digitalWrite(redpin, LOW); 
digitalWrite(yellowpin, LOW);
digitalWrite(greenpin, LOW);
digitalWrite(bluepin, LOW);
digitalWrite(sourcepin,HIGH);
delay(500);
  
 }

void loop() {
  // put your main code here, to run repeatedly:
int duration;
double distance;
digitalWrite(trigpin,HIGH);
delay(300);
digitalWrite(trigpin,LOW);

duration=pulseIn(echopin,HIGH);

distance=(duration/2)/29.1;
Serial.println("cm:"); 
Serial.println(distance);


if ((distance>=0) && (distance<=4.5)){
  digitalWrite(bluepin,HIGH);
  digitalWrite(greenpin,HIGH);
  digitalWrite(yellowpin,HIGH);
  digitalWrite(redpin,HIGH);
  digitalWrite(motorPin,LOW);
  delay(5000);
  
} else if((distance>=4) && (distance<=8)){
  digitalWrite(bluepin,LOW);
  digitalWrite(greenpin,HIGH);
  digitalWrite(yellowpin,HIGH);
  digitalWrite(redpin,HIGH);
  digitalWrite(motorPin,HIGH);
 
} else if((distance>=8) && (distance<=12)){
  digitalWrite(bluepin,LOW);
  digitalWrite(greenpin,LOW);
  digitalWrite(yellowpin,HIGH);
  digitalWrite(redpin,HIGH);
  digitalWrite(motorPin,HIGH);
  
} else if((distance>=12) && (distance<=16)){
  digitalWrite(bluepin,LOW);
  digitalWrite(greenpin,LOW);
  digitalWrite(yellowpin,LOW);
  digitalWrite(redpin,HIGH);
  digitalWrite(motorPin,HIGH);
  
} else if (distance>16){
  digitalWrite(bluepin,LOW);
  digitalWrite(greenpin,LOW);
  digitalWrite(yellowpin,LOW);
  digitalWrite(redpin,LOW);
  digitalWrite(motorPin,HIGH);
  delay(500);
  }
  else if((bluepin,HIGH) && (greenpin,HIGH) && (yellowpin,HIGH) && (redpin,HIGH) && (motorPin,LOW)){
  delay(1200);
  }
delay(400);
}

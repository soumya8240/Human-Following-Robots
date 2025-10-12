#define lefttrigpin 10
#define leftechopin 9
#define righttrigpin 7
#define rightechopin 8
long leftduration;
int leftdistance;
long rightduration;
int rightdistance;  
                                                          
const int Motor_L_F = 2;
const int Motor_L_B = 3;
const int Motor_R_F = 4;
const int Motor_R_B = 5;



void setup() {
Serial.begin(9600);
pinMode(lefttrigpin,OUTPUT);
pinMode(leftechopin,INPUT);
pinMode(righttrigpin,OUTPUT);
pinMode(rightechopin,INPUT);
// put your setup code here, to run once:

}
void Forward(){
  // Run Left Motor In Forward Direction
  digitalWrite(Motor_L_F, HIGH);
  digitalWrite(Motor_L_B, LOW);

  //Run Right Motor in Forward Direction
  digitalWrite(Motor_R_F, HIGH);
  digitalWrite(Motor_R_B, LOW);
  
  }

void Right(){
  //Stop Right Motor
  digitalWrite(Motor_R_F, LOW);
  digitalWrite(Motor_R_B, HIGH);

  //Run Left Motor in Forward Direction
  digitalWrite(Motor_L_F, HIGH);
  digitalWrite(Motor_L_B, LOW);
  
  }

void Left(){
  //Stop Left Motor
  digitalWrite(Motor_L_F, LOW);
  digitalWrite(Motor_L_B, HIGH);

  //Run Right Motor in Forward Direction
  digitalWrite(Motor_R_F, HIGH);
  digitalWrite(Motor_R_B, LOW);
  
  }

void Back(){
  // Run Left Motor In Forward Direction
  digitalWrite(Motor_L_F, LOW);
  digitalWrite(Motor_L_B, HIGH);

  //Run Right Motor in Forward Direction
  digitalWrite(Motor_R_F, LOW);
  digitalWrite(Motor_R_B, HIGH);
  
  }


void Stop(){
  // Run Left Motor In Forward Direction
  digitalWrite(Motor_L_F, LOW);
  digitalWrite(Motor_L_B, LOW);

  //Run Right Motor in Forward Direction
  digitalWrite(Motor_R_F, LOW);
  digitalWrite(Motor_R_B, LOW);
  
  }

void loop() {
digitalWrite(lefttrigpin,HIGH);
delayMicroseconds(2);
digitalWrite(lefttrigpin,LOW);
leftduration=pulseIn(leftechopin,HIGH);
leftdistance=leftduration*0.034/2;
digitalWrite(righttrigpin,HIGH);
delayMicroseconds(2);
digitalWrite(righttrigpin,LOW);
rightduration=pulseIn(rightechopin,HIGH);
rightdistance=rightduration*0.034/2;

if(leftdistance<=10&&rightdistance>=10){

  Left();
}
if(rightdistance<=10&&leftdistance>=10){

  Right();
}
if(rightdistance<=10&&leftdistance<=10){

  Forward();
}
if(rightdistance>=10&&leftdistance>=10){

  Stop();
}

if(rightdistance==3&&leftdistance==3){

Back();
  
}
}

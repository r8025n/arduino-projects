//gari jodi line e soja hoe daray thake taile bam dik theke s1...
#include <NewPing.h>

int s1r,s2r,s3r,s4r,s5r,s6r,s7r;

int s1=0;
int s2=1;
int s3=2;
int s4=3;
int s5=4;
int s6=5;
int s7=6;

int l_m_C=25;//A=C; B=D;
int l_m_D=24;
int r_m_A=22;
int r_m_B=23;

int EN_A=10;
int EN_B=11;

int echo=12;
int trig=13;
int MAX=200;

NewPing sonar(trig,echo,MAX);

//int th=390;

void setup(){
  Serial.begin(115200);
  pinMode(s1,INPUT);
  pinMode(s2,INPUT);
  pinMode(s3,INPUT);
  pinMode(s4,INPUT);
  pinMode(s5,INPUT);
  pinMode(s6,INPUT);
  pinMode(s7,INPUT);
  
  pinMode(l_m_C,OUTPUT);
  pinMode(l_m_D,OUTPUT);
  pinMode(r_m_A,OUTPUT);
  pinMode(r_m_B,OUTPUT);
}


void loop(){
  sensor_read();
  if(s1r==0 && s2r==0 && s3r==1 && s4r==1 && s5r==1 && s6r==0 && s7r==0){          //on line
  motor_drive(250,250);
  } 
  else if(s1r==0 && s2r==0 && s3r==0 && s4r==1 && s5r==1 && s6r==0 && s7r==0){     //line theke jodi bam dike jay
    motor_drive(150,250);
  }  
  else if(s1r==0 && s2r==0 && s3r==1 && s4r==1 && s5r==0 && s6r==0 && s7r==0){      //line theke jodi dan dike jay
    motor_drive(250,150);
  }
 /* else if(s1r==1 && s2r==1 && s3r==1 && s4r==1 && s5r==1 && s6r==1 && s7r==1){      //all black---paile samne jabe
    motor_drive(200,200);
  }*/
  else if(s1r==1 && s2r==1 && s3r==1 && s4r==1 && s5r==1 && s6r==0 && s7r==0){      //90 left
    motor_drive(250,150);
  }
  else if(s1r==0 && s2r==0 && s3r==1 && s4r==1 && s5r==1 && s6r==1 && s7r==1){     //90 right
    motor_drive(150,250);
  }
 /* else if(s1r==0 && s2r==0 && s3r==1 && s4r==1 && s5r==0 && s6r==0 && s7r==0){     //left curve
    //HALT();
    //delay(100);
    motor_drive(200,-180);
  }*/
  else if(s1r==0 && s2r==0 && s3r==0 && s4r==1 && s5r==1 && s6r==1 && s7r==0){    //right curve
    motor_drive(-180,200);
  }
 /* else if(s1r==1 && s2r==1 && s4r==0 && s6r==1 && s7r==1){                        //stop point
    //motor_drive(0,0);
    HALT();
    delay(5000);
  }
  else if(s1r==0 && s2r==0 && s3r==0 && s4r==1 && s5r==1 && s6r==1 && s7r==1){   //right zigzag
    motor_drive(200,200);
    delay(100);
    if(s1r==0 && s2r==0 && s3r==0 && s4r==1 && s5r==1 && s6r==0 && s7r==0){
      HALT();
      delay(200);
    }
    motor_drive(-180,-250);
  }*/
}




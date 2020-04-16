#include<Servo.h>
Servo servo1;
Servo servo2;
Servo servo3;
int angle1;
int angle2;
int angle3;
void setup() {
// put your setup code here, to run once:
servo1.attach(7);
servo2.attach(8);
servo3.attach(9);
}


void loop() {
  // put your main code here, to run repeatedly:
  //for forward movement 
for(angle1=0,angle2=30;angle1<=30,angle2>=0;angle1+=1,angle2-=1)
{
  servo1.write(angle1);
  servo2.write(angle2);
delay(15);
}
//for backward movement 
for(angle1=30,angle2=0;angle1>=0,angle2<=30;angle1-=1,angle2+=1)
{
  servo1.write(angle1);
  servo2.write(angle2);
delay(15);
}
//for changing the direction
for(angle3=0;angle3<=90;angle3+=1)
{
  servo3.write(angle3);
delay(15);
}
for(angle3=90,angle2=30;angle3>=90,angle2>=30;angle3-=1,angle2-=1)
{
  servo3.write(angle3);
  servo2.write(angle2);
delay(15);
}
}

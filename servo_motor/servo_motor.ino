#include <Servo.h>  //red = vcc ,brown = ground,yellow = data
Servo servo;
int angle=0;
void setup() 
{
  servo.attach(8);
  servo.write(angle);
}
void loop() 
{ 
  for(angle = 0; angle <= 90; angle++)  
  {                                  
    servo.write(angle);               
    delay(50);                   
  } 
  for(angle = 90; angle >= 0; angle--)    
  {                                
    servo.write(angle);           
    delay(50);       
  } 
}

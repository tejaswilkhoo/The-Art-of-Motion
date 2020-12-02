#include "vex.h"
#include "printvals.h"

void quadratic()
{
  while(Brain.timer(sec)*60 < (1/60))
  {
    leftFront.spin(forward,(-720000*(pow((Brain.timer(sec)*60-1/60),2))+200),rpm);
    leftBack.spin(forward,(-720000*(pow((Brain.timer(sec)*60-1/60),2))+200),rpm);
    rightFront.spin(forward,(-720000*(pow((Brain.timer(sec)*60-1/60),2))+200),rpm);
    rightBack.spin(forward,(-720000*(pow((Brain.timer(sec)*60-1/60),2))+200),rpm);
    printSpeed();
  }
  while((Brain.timer(sec)*60>(1/60)) && (Brain.timer(sec)*60 < (2/60)))
  {
    leftFront.spin(forward,200,rpm);
    leftBack.spin(forward,200,rpm);
    rightFront.spin(forward,200,rpm);
    rightBack.spin(forward,200,rpm);
    printSpeed();
  }
  while((Brain.timer(sec)*60>(2/60)) && (Brain.timer(sec)*60 < (3/60)))
  {
    leftFront.spin(forward,(-720000*(pow((Brain.timer(sec)*60-1/60),2))+200),rpm);
    leftBack.spin(forward,(-720000*(pow((Brain.timer(sec)*60-1/60),2))+200),rpm);
    rightFront.spin(forward,(-720000*(pow((Brain.timer(sec)*60-1/60),2))+200),rpm);
    rightBack.spin(forward,(-720000*(pow((Brain.timer(sec)*60-1/60),2))+200),rpm);
    printSpeed();
  }
  while(Brain.timer(sec)*60>3/60)
  {
    leftFront.stop(brake);
    leftBack.stop(brake);
    rightFront.stop(brake);
    rightBack.stop(brake);
    printSpeed();
    printPosition();
  }
}



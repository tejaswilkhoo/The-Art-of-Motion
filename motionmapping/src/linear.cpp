#include "vex.h"
#include "printvals.h"

void linear()
{
  while(Brain.timer(sec)*60 < (1/60))
  {
    leftFront.spin(forward,12000*Brain.timer(sec)*60,rpm);
    leftBack.spin(forward,12000*Brain.timer(sec)*60,rpm);
    rightFront.spin(forward,12000*Brain.timer(sec)*60,rpm);
    rightBack.spin(forward,12000*Brain.timer(sec)*60,rpm);
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
    leftFront.spin(forward,-12000*Brain.timer(sec)*60+600,rpm);
    leftBack.spin(forward,-12000*Brain.timer(sec)*60+600,rpm);
    rightFront.spin(forward,-12000*Brain.timer(sec)*60+600,rpm);
    rightBack.spin(forward,-12000*Brain.timer(sec)*60+600,rpm);
    printSpeed();
  }
  while(Brain.timer(sec)*60 >3/60)
  {
    leftFront.stop(brake);
    leftBack.stop(brake);
    rightFront.stop(brake);
    rightBack.stop(brake);
    printSpeed();
    printPosition();
  }
}



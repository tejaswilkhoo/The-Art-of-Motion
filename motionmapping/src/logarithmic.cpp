#include "vex.h"
#include "printvals.h"

void logarithmic()
{
  while(Brain.timer(sec)*60 < (1/60))
  {
    leftFront.spin(forward,(100*log10((Brain.timer(sec)*60+(1/5940))))+(100*log10(5940)),rpm);
    leftBack.spin(forward,(100*log10((Brain.timer(sec)*60+(1/5940))))+(100*log10(5940)),rpm);
    rightFront.spin(forward,(100*log10((Brain.timer(sec)*60+(1/5940))))+(100*log10(5940)),rpm);
    rightBack.spin(forward,(100*log10((Brain.timer(sec)*60+(1/5940))))+(100*log10(5940)),rpm);
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
    leftFront.spin(forward,(100*log10(-(Brain.timer(sec)*60- (149/2970))))+(100*log10(5940)),rpm);
    leftBack.spin(forward,(100*log10(-(Brain.timer(sec)*60- (149/2970))))+(100*log10(5940)),rpm);
    rightFront.spin(forward,(100*log10(-(Brain.timer(sec)*60- (149/2970))))+(100*log10(5940)),rpm);
    rightBack.spin(forward,(100*log10(-(Brain.timer(sec)*60- (149/2970))))+(100*log10(5940)),rpm);
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

#include "vex.h"

void printSpeed()
{
  printf("%f\n", (leftFront.velocity(rpm)));
  printf("%f\n", (leftBack.velocity(rpm)));
  printf("%f\n", (rightFront.velocity(rpm)));
  printf("%f\n", (rightBack.velocity(rpm)));
  task::sleep(10);
}

void printPosition()
{
  printf("%f\n", (leftFront.position(rev)));
  printf("%f\n", (leftBack.position(rev)));
  printf("%f\n", (rightFront.position(rev)));
  printf("%f\n", (rightBack.position(rev)));
  task::sleep(10);
}

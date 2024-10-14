#include <stdio.h>
#include<stdio.h>
int main ()
{
  int a , b , c;
  float D , r1 , r2;
  /*D=discriminant,r1,r2=roots*/
  printf("enter the values of a , b , c:");
  scanf("%d%d%d",&a , &b , &c);
  D=(b*b)-4*a *c;
  r1=(-b-sqrt(D))/2*a;
  r2=(-b+sqrt(D))/2*a;
  printf("The roots of the qudratic equation are:%f%f\n",r1,r2);
  }
  
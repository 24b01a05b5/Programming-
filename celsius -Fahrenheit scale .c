#include <stdio.h>
int main ()
{
  float Fahrenheit ,celsius;
  printf("enter the value of fahrenheit:");
  scanf("%f",& Fahrenheit);
  
  celsius =((Fahrenheit-32)*5)/9;
  printf("Temperature in celsius is: %f",celsius);
  
  printf("enter the value of celsius :");
  scanf("%f",& celsius);
  
  Fahrenheit=((celsius /5)*9)+32;
  printf("Temperature in Fahrenheit is:%f",Fahrenheit);
  
  }
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
  float c,f;
  printf("Enter centigrade=");
  scanf("%f",&c);

  f=(c*1.8)+32;
  printf("Fahrenheit is=%f",f);


}
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
  float c,f;
  printf("Enter Fahrenheit=");
  scanf("%f",&f);

  c=(f-32)/1.8;
  printf("centigrade is=%f",c);


}

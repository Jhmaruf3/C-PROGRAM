#include <stdio.h>
#include <stdlib.h>

int main()
{
   double a,b,c,d,x1,x2;
   printf("Enter the values=");
   scanf("%lf %lf %lf",&a,&b,&c);

   d=sqrt(b*b-4*a*c);
   x1=(-b+d)/(2*a);
   x2=(-b-d)/(2*a);

   printf("The first value X1 is=%lf \n",x1);
   printf("the second value X2 is=%lf",x2);

   getch();
}

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base,height,area;
    printf("Enter base & height=");
    scanf("%f %f",&base,&height);
    area=(float)1/2*base*height;
    printf("Area of triangle=%.2f",area);
    getch();


}
*/

#include<stdio.h>
int main()
{
    double a,b,c,s,area;
    printf("Enter 3 values=");
    scanf("%lf %lf %lf",&a,&b,&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The area is= %lf",area);
}

/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int res1=abs(-26);
    double res2=sqrt(144);

    printf("The absolute value is=%d \n",res1);
    printf("144 squar root is=%.2lf",res2);

    getch();
}
*/

#include<stdio.h>
int main()
{
    int x;

    printf("Enter any integer number=");
    scanf("%d",&x);


    double result=sqrt(x);

    printf("The result is=%lf",result);


}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1=15;
    int number2=20;

    int temp;

    temp=number1;
    number1=number2;
    number2=temp;

    printf("Number1 =%d\n",number1);
    printf("Number2=%d ",number2);
}

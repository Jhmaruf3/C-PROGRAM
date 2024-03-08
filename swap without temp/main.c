#include <stdio.h>
#include <stdlib.h>

int main()
{
   int number1=15;
    int number2=20;

    number1=number1-number2;//-5
    number2=number1+number2;//15
    number1=number2-number1;//20
    printf("Number1 =%d\n",number1);
    printf("Number2=%d ",number2);
}

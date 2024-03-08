#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,sum;
    float avg;
    printf("Enter two number:");
    scanf("%d %d",&num1,&num2);
    sum=num1+num2;
    printf("The sum is=%d \n",sum);

    avg=(float)sum/2;//type casting
    printf("The average is= %.1f",avg);
    getch();

    return 0;

}

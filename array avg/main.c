#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10],sum=0;

    for(int i=0;i<10;i++)
    {
    printf("Numbers [%d]=",i);
    scanf("%d",&num[i]);
    }
    for(int i=0;i<10;i++)
    {
        sum=(float)sum+num[i];
    }
    printf("The sum of the array is=%d",sum);
    getch();
}

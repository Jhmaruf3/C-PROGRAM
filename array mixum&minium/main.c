#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[10],max=num[0],min=num[0];

    for(int i=0;i<10;i++)
    {
        printf("number[%d]",i);
        scanf("%d",&num[i]);
    }
    for(int i=0;i<10;i++){

        printf("%d \n",num[i]);
    }
    for(int i=1;i<10;i++)
    {
        if(max<num[i])
            {max=num[i];}
        if(min>num[i])
        {
            min=num[i];
        }
    }
    printf("The maximum value is=%d \n",max);
    printf("The minimum value is=%d ",min);

}

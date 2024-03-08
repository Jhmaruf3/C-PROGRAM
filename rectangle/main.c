#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lenght,width,area;
    printf("Enter the lenght=");
    scanf("%d",&lenght);

    printf("Enter the width=");
    scanf("%d",&width);

    area=lenght*width;
    printf("The area of rectangle is=%d",area);

    getch();

}

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lower,upper;
    printf("Type any lowercase letter:");
    scanf("%c",&lower);
    upper=toupper(lower);
    printf("This is uppercase letter=%c",upper);

}

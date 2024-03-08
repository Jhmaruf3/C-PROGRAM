#include <stdio.h>
#include <stdlib.h>

int main()
{
    char upper;
    char lower;
    printf("Type any uppercase letter=");
    scanf("%c",&upper);
    lower=tolower(upper);
    printf("This is the lowercase letter=%c",lower);
}

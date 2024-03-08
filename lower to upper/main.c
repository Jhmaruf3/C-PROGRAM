#include <stdio.h>
#include <stdlib.h>

int main()
{
    char lower;
    printf("Type any lowercase letter:");
    scanf("%c",&lower);
    printf(" The uppercase letter is:%c",lower-32);
}

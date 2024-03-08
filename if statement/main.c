/*#include <stdio.h>


int main()
{
    int num;
    printf("Enter any integer number=");
    scanf("%d",&num);

    if(num%2==0)
       printf("Even\n");
    //if(num%2 !=0)
    else
       printf("Odd");

    getch();

}
*/
#include<stdio.h>
int main()
{
    int mark;
    printf("Enter your mark=");
    scanf("%d",&mark);

    if(mark>=100 || mark<0)
        printf("Invalid mark");
    else if(mark>=80 && mark<=100)
     printf("A+");
    else if(mark>=70 && mark<=79)
     printf("A");
    else if( )



}

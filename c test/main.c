/*
#include<stdio.h>
int main()

{
    int num1=24;
    int num2=65;
    float num3=67.6;
    double num4=46.6786789;
    char ch='D';
    printf("The number1 is %d \n",num1);
    printf("The number2 is %d \n",num2);
    printf("The number3 is %lf \n",num3);
    printf("The number4 is %lf \n",num4);
    printf("character %c",ch);

    return 0;


}


#include<stdio.h>
int main()
{
    int num1=34,num2=45;
    printf("Numbers are %d,%d.",num1,num2);
    getchar();
}
*/
#include<stdio.h>
int main()
{
    int num1;


    printf("Enter an integer number=");
    scanf("%d",&num1);
    printf("Number is= %d \n",num1);

    float num2;
    printf("Now enter a float=");
    scanf("%f",&num2);
    printf("Number is= %f \n",num2);

    double num3;
    printf("Enter a double number=");
    scanf("%lf",&num3);
    printf("Double number is= %lf \n",num3);

    char num4;
    printf("Type a character");
    scanf("%c",&num4);
    printf("You type this character= %c",num4);

    getchar();
}


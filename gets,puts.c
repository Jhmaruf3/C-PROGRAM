#include<stdio.h>
int main()
{
   char name[30];

   printf("Enter your name:");
   gets(name);//when using gets no need use formate
   //printf(" Hello: %s",name);
   printf("Hello=");
   puts(name);

}

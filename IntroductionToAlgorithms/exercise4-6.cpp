#include <stdio.h>
void main()
{
  int age;

  printf("Please, enter your age : ");
  scanf("%d",&age);
  if (age<18)
     {
       printf("Sorry, you are still a minor.\n");

     }
  else
     printf("You are an adult.\n");
         
}
#include <stdio.h>
int main()
{
   char name[100];
   printf("Enter your name:\n");
   scanf("%s",name);
   printf("\nWelcome %s",name);
   return 0;
}
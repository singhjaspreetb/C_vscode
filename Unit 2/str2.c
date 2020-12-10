#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int choice,len=0;
    printf("Enter the string: ");
    gets(str);
    printf("\n1: By Predefined function\t2: By Manually\n\nSelect the method for count the length of entred string: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        len=strlen(str);
        break;
    case 2:
        while(str[len]!='\0')
        {
            len++;
        }
        break;
    default:
        printf("\nYou make worng choice!");
        break;
    }
    printf("\nLength of string is: %d",len);
    return 0;
}
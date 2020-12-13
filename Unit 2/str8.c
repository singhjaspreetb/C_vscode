#include <stdio.h>
#include <string.h>
int strcomp(char[],char[]);
int main()
{
    int choice,res;
    char str1[100],str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    printf("\n1: By Predefined Function\t2: By Manually\n\nSelect method to comparing the string to another: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        res=strcmp(str1,str2);
        break;
    case 2:
        strcomp(str1,str2);
        break;
    default:
        printf("You make wrong choice!");
        break;
    }
    if(res==0)
    printf("Both the string are equal");
    else if(res>0)
    printf("First string is greater");
    else
    printf("Second string is greater");
    return 0;
}
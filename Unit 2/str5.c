#include <stdio.h>
#include <string.h>
char strapp(char[],char[]);
int main()
{
    char str1[100],str2[50];
    int choice;
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    printf("\n1: By Predefined function\t2: By Manually\n\nSeclect whether you want to append string manually or by predefined function: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        strcat(str1,str2);
        break;
    case 2:
        strapp(str1,str2);
        break;
    default:
        printf("You make wrong choice!");
        break;
    }
    printf("String after append is: %s",str1);
    return 0;
}   
char strapp(char str1[100],char str2[50])
{
    int len1=0,len2=0,i=0;
    while(str1[len1]!='\0')
    {
        len1++;
    }
    while(str2[len2]!='\0')
    {
        len2++;
    }
    // i=len1;
    for(i;i<len2;i++)
    {
        str1[i+len1]=str2[i];
    }
    str1[len1+len2]='\0';
}
#include <stdio.h>
#include <string.h>
char strcopy(char[],char[]);
int main()
{
    int choice,len=0;
    char str[100],dupstr[100];
    printf("Enter a string: ");
    gets(str);
    printf("\n1: By Predefined Function\t2: By Manually\n\nSelect method for copy string to another: ");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1:
        strcpy(dupstr,str);
        break;
    case 2:
        strcopy(dupstr,str);
        break;
    default:
        printf("You make wrong choice!");
        break;
    }
    printf("\nCopied string is: %s",dupstr);
    return 0;
}
char strcopy(char dupstr[100],char str[100])
{
    int len=0;
    while (str[len]!='\0')
        {
            len++;
        }
        for(int i=0;i<len;i++)
        {
            dupstr[i]=str[i];
        }
        dupstr[len]='\0';
    return *dupstr;
}
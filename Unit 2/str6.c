#include <stdio.h>
#include <string.h>
int fdfstocrofch(char[],char);
int main()
{
    int choice;
    char str[100],ch,*pos;
    printf("Enter the string: ");
    fflush(stdin);
    gets(str);
    printf("Enter the character: ");
    scanf("%c",&ch);
    printf("\n1: By Predefined function\t2: By Manually\n\nSelect the method by that you want serch the positon of first occurence of character: ");
    scanf("%d",&choice);
    switch (choice)
    {
        case 1:
            pos=strchr(str,ch);
            break;
        case 2:
            
        break;
        default:
        break;
    }
    printf("Position of character is: %s",pos);
    return 0;
}
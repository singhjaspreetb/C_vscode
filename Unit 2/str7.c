#include <stdio.h>
#include <string.h>
int fdfstocrofchend(char[], char);
int main()
{
    int choice, po;
    char str[100], ch, *pos;
    printf("Enter the string: ");
    fflush(stdin);
    gets(str);
    printf("Enter the character: ");
    scanf("%c", &ch);
    printf("\n1: By Predefined function\t2: By Manually\n\nSelect the method by that you want serch the positon of first occurence of character: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        pos = strrchr(str, ch);
        printf("Position of character at rear end is: %s", pos);
        break;
    case 2:
        fdfstocrofchend(str, ch);
        break;
    default:
        printf("You make wrong choice!");
        break;
    }
    return 0;
}
int fdfstocrofchend(char str[100], char ch)
{

    int len = 0, flag = 0, i;
    while (str[len] != '\0')
    {
        len++;
    }
    for (i = len-1; i >=0; i--)
    {
        if (str[i] == ch)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        printf("Character not found!");
    }
    else
    {
        printf("Position of character is: ");
        {
            for (i; i < len; i++)
            {
                putchar(str[i]);
            }
        }
    }
}
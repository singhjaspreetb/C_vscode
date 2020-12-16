#include <stdio.h>
#include <string.h>
int strcspon(char[], char[]);
int main()
{
    int choice, pos;
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    printf("\n1: By Predefined Function\t2: By Manually\n\nSelect method by which you want to find occurence of first character that found in second string : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        pos = strcspn(str1, str2);
        printf("Position of string is: %d", pos);
        break;
    case 2:
        strcspon(str1, str2);
        break;
    default:
        printf("You make wrong choice!");
        break;
    }

    return 0;
}
int strcspon(char str1[100], char str2[100])
{
    int i = 0, j = 0, flag = 0;
    while (str1[i] != '\0')
    {
        j = 0;
        flag = 0;
        while (str2[j] != '\0')
        {
            if (str1[i] == str2[j])
            {
                flag = 1;
            }
            j++;
        }
        if (flag == 1)
        {
            break;
        }
        i++;
    }
    printf("Position of string is: %d", i);
}
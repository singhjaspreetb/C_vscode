#include <stdio.h>
#include <string.h>
int strstring(char[], char[]);
int main()
{
    int choice;
    char str1[100], str2[100],*pos;
    printf("Enter main string: ");
    gets(str1);
    printf("Enter substring string: ");
    gets(str2);
    printf("\n1: By Predefined Function\t2: By Manually\n\nSelect method by which you want to find occurence of substring in main string: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        pos=strstr(str1,str2);
        printf("Position of string is: %s", pos);
        break;
    case 2:
        strstring(str1,str2);
        break;
    default:
        printf("You make wrong choice!");
        break;
    }
    return 0;
}
int strstring(char str1[100],char str2[100])
{
    int len1=0,len2=0,i,j,flag;
    while (str1[len1] != '\0')
    {
        len1++;
    }
    while (str2[len2] != '\0')
    {
        len2++;
    }
    for(i=0;i<=len1;i++)
    {
        flag=0;
        if(str1[i]==str2[0])
        {
            for(j=0;j<=len2;j++)
            {
                if(str1[i]!=str2[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("Position of character is: ");
        {
            for (i; i < len1; i++)
            {
                putchar(str1[i]);
            }
        }
    }
    else
    {
        printf("Sub string not found!");
    }
}
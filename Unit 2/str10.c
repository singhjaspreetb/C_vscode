#include <stdio.h>
#include <string.h>
int strspon(char[],char[]);
int main()
{
    int choice,pos;
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    printf("\n1: By Predefined Function\t2: By Manually\n\nSelect method by which you want to find occurence of first character that don't found in second string : ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        pos = strspn(str1, str2);
        break;
    case 2:
        pos=strspon(str1, str2);
        break;
    default:
        printf("You make wrong choice!");
        break;
    }
    printf("Position of string is: %d", pos);
    return 0;
}
int strspon(char str1[100], char str2[100])
{
    int len1=0,len2=0,i,j,flag;
    while(str1[len1]!='\0')
    {
        len1++;
    }
    while (str2[len2] != '\0')
    {
        len2++;
    }
    for(i=0;i<len1;i++)
    {
        flag=0;
        for(j=0;j<len2;j++)
        {
            if(str1[i]==str2[j])
            {
                flag = 1;
                break;
            }
        }
        if(flag==0)
        {
            break;
        }
    }
    return i;
}
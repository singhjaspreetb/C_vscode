#include <stdio.h>
char con(char[], char[], char[]);
int main()
{
    char str1[50], str2[50], str[100];
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    con(str, str2, str1);
    printf("String after concatenate: %s", str);
    return 0;
}
char con(char str[100], char str2[50], char str1[50])
{
    int len1 = 0, len2 = 0, i;
    while (str1[len1] != '\0')
    {
        len1++;
    }
    while (str2[len2] != '\0')
    {
        len2++;
    }
    for (i = 0; i < len1; i++)
    {
        str[i] = str1[i];
    }
    len2 += len1;
    for (i; i < len2; i++)
    {
        str[i] = str2[i - len1];
    }
    str[i] = '\0';
}

// for(i=0;i<len1+len2;i++)
// {
//     if(i<len1)
//     {
//         str[i]=str1[i];
//     }
//     else
//     {
//         str[i]=str2[i-len1];
//     }
// }
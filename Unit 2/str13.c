#include <stdio.h>
#include <string.h>
int main()
{
    char str1[100], str2[100], str3[100];
    int i = 0, j = 0, k = 0;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    for (i = 0; str1[i] != '\0'; i++)
    {
        for (i; str1[i] == str2[j] && str2[j] != '\0'; i++, j++)
        {
        }
        if (str2[j] != '\0')
        {
            i = i - j;
        }
        str3[k++] = str1[i];
    }
    str3[k] = '\0';
    puts(str3);
    return 0;
}
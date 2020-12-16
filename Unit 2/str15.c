#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0, j = 0;
    char str1[100], str2[100];
    printf("\n\nEnter the string: ");
    gets(str1);
    for (i; str1[i] != '\0'; i++)
    {
        if (str1[i] >= 65 && str1[i] <= 90 || str1[i] >= 97 && str1[i] <= 122)
        {
            str2[j] = str1[i];
            j++;
        }
    }
    str2[j] = '\0';
    printf("String after deletion of special character: ");
    puts(str2);
}
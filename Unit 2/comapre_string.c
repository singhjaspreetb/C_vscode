#include <stdio.h>
int main()
{
    int l1 = 0, l2 = 0, i;
    char a[100], b[100];
    printf("Enter fisrt string: ");
    gets(a);
    printf("Enter second string: ");
    gets(b);
    while (a[l1] != '\0')
    {
        l1++;
    }
    while (b[l2] != '\0')
    {
        l2++;
    }
    if (l1 != l2)
    {
        printf("String are not Similar");
    }
    else
    {
        for (i = 0; i < l1; i++)
        {
            if (a[i] != b[i])
            {
                break;
            }
        }
        if (i == l1)
        {
            printf("Both are Similar");
        }
        else
        {
            if (a[i] > b[i])
            {
                printf("Fisrt string is greater.");
            }
            else
            {
                printf("Second string is greater.");
            }
        }
    }
    return 0;
}
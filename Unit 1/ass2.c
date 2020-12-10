#include <stdio.h>

int main()
{
    int a, b, c;
    printf("enter three number");
    scanf("%d %d %d", &a, &b, &c);
    if (a < b && a < c)
    {
        printf("%d", a);
        if (b < c)
        {
            printf("%d", b);
            printf("%d", c);
        }
        else if (c < b)
        {
            printf("%d", c);
            printf("%d", b);
        }
    }
    else if (b < a && b < c)
    {
        printf("%d", b);
        if (a < c)
        {
            printf("%d", a);
            printf("%d", c);
        }
        else if (c < a)
        {
            printf("%d", c);
            printf("%d", a);
        }
    }
    else if (c < a && c < b)
    {
        printf("%d", c);
        if (b < a)
        {
            printf("%d", b);
            printf("%d", a);
        }
        else if (a < b)
        {
            printf("%d", a);
            printf("%d", b);
        }
    }

    return 0;
}
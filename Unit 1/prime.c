#include <stdio.h>
int main()
{
    int num, temp, a = 2, b = 0;
    printf("Enter the number:");
    scanf("%d", &num);
    temp = num / 2;
top:
    if (num % a == 0)
    {
        b += 1;
    }
    else
    {
        b = 0;
        a += 1;
        if (a<= temp)
            goto top;
    }
    if (b == 1)
        printf("%d is not an prime number", num);
    else
        printf("%d is a prime number", num);
    return 0;
}
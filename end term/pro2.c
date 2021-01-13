#include <stdio.h>
int main()
{
    int i, j, k, r = 0, num,a[100];
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0)
    {
        a[r]=num%10;
        num = num / 10;
        r++;
    }
    for (i = 0; i < r; i++)
    {
        for (k = 0; k < r-i-1; k++)
            printf("* ");
        for (j =i; j >=0; j--)
        {
            printf("%d ", a[j]);
        }
        printf("\n");
    }
    return 0;
}
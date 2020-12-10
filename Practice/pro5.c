#include <stdio.h>
int main()
{
    int i, j, k, r;
    printf("Enter rows: ");
    scanf("%d", &r);
    for (i = 0; i < r; i++)
    {
        for (k = 0; k < r - i - 1; k++)
            printf("* ");
        for (j = r; j > k; j--)
            printf("%d ", j);
        printf("\n");
    }
    for (i = 0; i < r - 1; i++)
    {
        for (k = 0; k <= i; k++)
            printf("* ");
        for (j = r; j >= k + 1; j--)
            printf("%d ", j);
        printf("\n");
    }
    return 0;
}
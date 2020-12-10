#include <stdio.h>
int main()
{
    int r, p, num, den;
    printf("Enter rows: ");
    scanf("%d", &r);
    for (int i = 0; i < r; i++)
    {
        p = 1;
        num = i;
        den = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d", p);
            p = p * num;
            p = p / den;
            num--, den++;
        }
        printf("\n");
    }
}
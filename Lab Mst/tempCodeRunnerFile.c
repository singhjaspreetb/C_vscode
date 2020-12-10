#include <stdio.h>
int main()
{
    int i, j, k, r=5,num,rem;
    printf("Enter the number: ");
    scanf("%d", &num);
    for (i = 0; i < r; i++)
    {
        for (k = i + 1; k > 1; k--)
            printf("* ");
        for (j = r; j > i; j--)
        {
            rem=num%10;
            num=num/10;
            printf("%d ", rem);
        }
        printf("\n");
    }
    return 0;
}
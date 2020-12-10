#include <stdio.h>
int main()
{
    int row;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    for (int i = 1; i <= row; i++)
    {
        for (int st = row - 1; st >= i; st--)
            printf("*");
        for (int j = row; j > row - i; j--)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}
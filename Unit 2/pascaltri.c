#include <stdio.h>
int main()
{
    int row, temp = 1;
    printf("Enter the number of rows: ");
    scanf("%d", &row);
    for (int i = 0; i < row; i++)
    {
        // for (int st = row - 1; st >= i - 1; st--)
        //     printf("  ");
        for (int j = 0; j <= i; j++) 
        {
            if (j == 0 || i == 0)
                temp = 1;
            else
                temp = temp * (i - j + 1) / j;
            printf("%4d", temp);
        }
        printf("\n");
    }
    return 0;
}
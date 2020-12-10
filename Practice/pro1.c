#include <stdio.h>
int main()
{
    int i, j, r;
    printf("Enter rows: ");
    scanf("%d",&r);
    for (i = 0; i < r ; i++)
    {
        for (j = 0; j < r ; j++)
        {
            if (i == r-1 || i == 0)
                printf("* ");
            else if (j == 0 || j == r-1)
                printf("| ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
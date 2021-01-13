#include <stdio.h>
int main()
{
    long long int a[3][3];
    long long int(*ptr)[3] = a;
    int row[4], col[4], i, j;
    printf("Pointer to 2D array........\n\n");
    printf("Enter the row of matrix (max 3): ");
    scanf("%d", &row[0]);
    printf("\nEnter the colmun of matrix (max 3): ");
    scanf("%d", &col[0]);
    for (i = 0; i < row[0]; i++)
    {
        for (j = 0; j < col[0]; j++)
        {
            printf("\nEnter the %d %d elemnet of matrix: ", i + 1, j + 1);
            scanf("%llu", ((ptr[i]) + j));
        }
    }
    printf("\n\nMatrix is........\n\n");
    for (i = 0; i < row[0]; i++)
    {
        for (j = 0; j < col[0]; j++)
        {
            printf("%llu    ", *((ptr[i]) + j));
        }
        printf("\n\n");
    }

    printf("Pointer to 3D array........\n\n");

    long long int b[3][3][3];
    long long int(*ptr2)[3][3] = b;
    int num, k;
    printf("Enter the number of matrix (max 3): ");
    scanf("%d", &num);
    for (i = 0; i < num; i++)
    {
        printf("\n\nEnter the dtails for %d matrix.........\n\n", i + 1);
        printf("Enter the row of matrix (max 3): ");
        scanf("%d", &row[i + 1]);
        printf("\nEnter the colmun of matrix (max 3): ");
        scanf("%d", &col[i + 1]);
        for (j = 0; j < row[i + 1]; j++)
        {
            for (k = 0; k < col[i + 1]; k++)
            {
                printf("\nEnter the %d %d elemnet of matrix: ", j + 1, k + 1);
                scanf("%llu", (ptr2[i][j]) + k);
            }
        }
    }
    printf("\n\nMatrix are........\n\n");
    for (i = 0; i < num; i++)
    {
        printf("\n\nHere is %d matrix.........\n\n", i + 1);
        for (j = 0; j < row[i + 1]; j++)
        {
            for (k = 0; k < col[i + 1]; k++)
            {
                printf("%llu    ", *(*(*(ptr2 + i) + j) + k));
            }
            printf("\n\n");
        }
    }
    return 0;
}

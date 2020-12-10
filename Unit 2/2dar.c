#include <stdio.h>
int main()
{
    int a[5][5]={1,2,3,4,5,6,7,8,9,10};
    int b[5][5]={{1,2,3,4,5},{6,7,8,9,10}};
    int c[][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int d[][5] = {{1, 2, 3, 4, 5} ,{6, 7, 8, 9, 10}};
    int e[100][100],i,j,row,col;
    for (i=0;i<5;i++)
    {
        for (j=0;j<5;j++)
        printf("%2d",a[i][j]);
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%2d", b[i][j]);
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%2d", c[i][j]);
        printf("\n");
    }
    printf("\n");
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
            printf("%2d", d[i][j]);
        printf("\n");
    }
    printf("\n");
    printf("Enter the number of row: ");
    scanf("%d", &row);
    printf("Enter the number of column: ");
    scanf("%d", &col);
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            {printf("e[%d][%d]",i,j);
            scanf("%d",&e[i][j]);}
    }
    printf("\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
            printf("%2d", e[i][j]);
        printf("\n");
    }
    printf("\n");
    return 0;
}
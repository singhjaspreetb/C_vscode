#include <stdio.h>
int main()
{
    int a[10][100],b[10][10],row,col,i,j;
    printf("Enter the rows of the matrix: ");
    scanf("%d",&row);
    printf("Enter the column of the matrix: ");
    scanf("%d",&col);
    printf("Enter the Matrix...\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Position [%d] [%d]: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Entered Matrix is...\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d   ", a[i][j]);
        }
        printf("\n\n");
    }
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            b[j][i]=a[i][j];
        }
    }
    printf("Transpose of Matrix is...\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            printf("%d   ", b[i][j]);
        }
        printf("\n\n");
    }
    return 0;
}
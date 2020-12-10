#include<stdio.h>
int main()
{
    int a[100][100],b[100][100],c[100][100],row,col,i,j,row2,col2,ch,k;
    printf("1.Addition of two 2-D arrays\n2.Transpose of 2-D array.\n3.Multiplication of two 2-D arrays\nEnter youc choice: ");
    scanf("%d",&ch);
    if (ch==1)
    {
    printf("Enter rows of first matrix:");
    scanf("%d",&row);
    printf("Enter columns of first matrix:");
    scanf("%d",&col);
    printf("Enter rows of second matrix:");
    scanf("%d",&row2);
    printf("Enter columns of second matrix:");
    scanf("%d",&col2);
    if(row==row2 && col==col2)
    {
        printf("Enter elements of first array:\n");
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                printf("Array[%d][%d]:",i,j);
                scanf("%d",&a[i][j]);
            }
        }
        printf("Enter elements of second array:\n");
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                printf("Array[%d][%d]:",i,j);
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                c[i][j]=a[i][j]+b[i][j];
            }
        }
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                printf("%d ",c[i][j]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Addition is not possible");
    }
    }
    else if(ch==2)
    {

        printf("Enter number of rows:");
        scanf("%d", &row);
        printf("Enter number of columns:");
        scanf("%d", &col);
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                printf("Array[%d][%d]", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                b[i][j] = a[j][i];
            }
        }
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                printf("%d ", a[i][j]);
            }
            printf("----> ");
            for (k = 0; k < col; k++)
            {
                printf("%d ", b[i][k]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("Enter rows of first matrix:");
        scanf("%d", &row);
        printf("Enter columns of first matrix:");
        scanf("%d", &col);
        printf("Enter rows of second matrix:");
        scanf("%d", &row2);
        printf("Enter columns of second matrix:");
        scanf("%d", &col2);
        if (col == row2)
        {
            printf("Enter elements of first array:\n");
            for (i = 0; i < row; i++)
            {
                for (j = 0; j < col; j++)
                {
                    printf("Array[%d][%d]:", i, j);
                    scanf("%d", &a[i][j]);
                }
            }
            printf("Enter elements of second array:\n");
            for (i = 0; i < row2; i++)
            {
                for (j = 0; j < col2; j++)
                {
                    printf("Array[%d][%d]:", i, j);
                    scanf("%d", &b[i][j]);
                }
            }
            for (i = 0; i < row; i++)
            {
                for (j = 0; j < col2; j++)
                {
                    c[i][j] = 0;
                    for (k = 0; k < col; k++)
                    {
                        c[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
            for (i = 0; i < row; i++)
            {
                for (j = 0; j < col2; j++)
                {
                    printf("%d\t", c[i][j]);
                }
                printf("\n");
            }
        }
        else
        {
            printf("Multiplication is not possible");
        }
    }
}
#include <stdio.h>
int main()
{
    int row,i,j,sp;
    printf("Enter the number of rows: ");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    {
        for(sp=0;sp<row-i-1;sp++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(i==j || i==row-1 || j==0)
            {
            printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
//             00 01 02 03 04  
//          10 11 12 12 14 
//       20 21 22 23 24 
//    30 31 32 33 34 
// 40 41 42 43 44

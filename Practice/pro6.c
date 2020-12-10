#include <stdio.h>
int main()
{
    int i,j,k,r;
    printf("Enter rows: ");
    scanf("%d", &r);
    for(i=0;i<r;i++)
    {
        for(k=i+1;k>1;k--)
        printf("* ");
        for(j=r;j>i;j--)
        printf("%d ",j-i);
        printf("\n");
    }
    return 0;
}
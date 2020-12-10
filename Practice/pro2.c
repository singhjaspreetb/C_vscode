#include <stdio.h>
int main()
{
    int i,j,x,k,r;
    printf("Enter rows: ");
    scanf("%d", &r);
    for(i=0;i<r;i++)
    {
        x = 65;
        for (j = 0; j < r-i-1; j++)
        printf("*");
        for(k=j;k<r;k++)
        printf("%c",x+k);
        printf("\n");
    }
    return 0;
}

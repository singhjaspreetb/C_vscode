#include <stdio.h>
int main()
{
    int i=1,j=1,k=1,l=1,row=5;
    for(i;i<=row;i++)
    {
        for(j=row;j>i;j--)
        {
            printf(" ");
        }
        for(k=1;k<=i;k++)
        {
            printf("%d",k);
        }
        if(i>1)
        {
            for (k-=2; k > 0; k--)
            {
                printf("%d", k);
            }
        }
        printf("\n");
    }
    return 0;
}
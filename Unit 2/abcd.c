/*#include <stdio.h>
int main()
{
    int i,j,temp=65;
    for(i=1;i<=5;i++)
    {
    for(j=1;j<=i;j++)
    {
        printf("%c",temp);
        temp++;
    }
    printf("\n");
    }
    return 0;
}*/
#include <stdio.h>
int main()
{
    int i,j,n;
    for ( i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (i == j)
            {
                printf("$");
            }
            else if (i == 1 || i == 5 || j == 1 || j == 5)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}

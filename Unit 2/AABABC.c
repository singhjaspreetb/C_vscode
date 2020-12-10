#include <stdio.h>
int main()
{
    int row;
    printf("Enter the Number of Rows: ");
    scanf("%d",&row);
    for (int i=1;i<=row;i++)
    {
        int alp = 65;
        for (int j=1;j<=i;j++)
        {
            printf("%c", alp);
            alp++;
        }
        printf("\n");
    }
    return 0;
}
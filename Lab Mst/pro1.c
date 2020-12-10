#include <stdio.h>

int main()

{
    int a[100], b[50], c[50], len1, len2, i,len3,temp,j;

    printf("\n\nEnter the length of first array: ");

    scanf("%d", &len1);

    for (i = 0; i < len1; i++)

    {
        printf("\nArray index[%d] position[%d]: ", i, i + 1);
        scanf("%d", &b[i]);
    }

    printf("\n\nEnter the length of second array: ");

    scanf("%d", &len2);

    for (i = 0; i < len2; i++)
    {
        printf("\nArray index[%d] position[%d]: ", i, i + 1);
        scanf("%d", &c[i]);
    }

    printf("\n\nFirst Array is...\n");

    for (i = 0; i < len1; i++)
    {
        printf("\nArray index[%d] position[%d]: %d\n", i, i + 1, b[i]);
    }

    printf("\n\nSecond Array is...\n");

    for (i = 0; i < len2; i++)
    {
        printf("\nArray index[%d] position[%d]: %d\n", i, i + 1, c[i]);
    }

    printf("\n\nCombining the Array...\n");
    
    for(i=0;i<len1;i++)
    {
        a[i]=b[i];
        
    }

    len3 = i;
    
    for(i;i<len1+len2;i++)
    {
        a[i]=c[i-len3];
    }

    printf("\n\nCombined Array is...\n");

    for (i = 0; i < len1+len2; i++)
    {
        printf("\nArray index[%d] position[%d]: %d\n", i, i + 1, a[i]);
    }

    printf("\n\nShorting Array In Desinding order...\n");
    for (i = 0; i < len1+len2; i++)
    {
        for (j = 0; j < len1+len2 - i - 1; j++)
        {
            if (a[j] < a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    printf("\n\nShorted Array is...\n");

    for (i = 0; i < len1 + len2; i++)
    {
        printf("\nArray index[%d] position[%d]: %d\n", i, i + 1, a[i]);
    }

    return 0;
}
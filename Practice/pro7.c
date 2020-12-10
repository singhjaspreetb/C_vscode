#include <stdio.h>
int main()
{
    int a[100], len, i, lar = 0, seclar, dp[50], count = 0, j, ct = 0, ind;
    printf("Enter the length of array: ");
    scanf("%d", &len);
    for (i = 0; i < len; i++)
    {
        printf("Array index[%d] position[%d]: ", i, i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n\nArray is..\n");
    for (i = 0; i < len; i++)
    {
        printf("\nArray index[%d] position[%d]: %d\n", i, i + 1, a[i]);
    }
    printf("\n\nFinding Largest element...\n");
    for (i = 0; i < len; i++)
    {
        if (a[i] > lar)
        {
            lar = a[i];
        }
    }
    printf("Lagest element: %d", lar);
    printf("\n\nFinding Second Largest element...\n");
    for (i = 0; i < len; i++)
    {
        if (a[i] != lar)
        {
            if (a[i] > seclar)
                seclar = a[i];
        }
    }
    printf("Second Lagest element: %d", seclar);
    printf("\n\nFinding duplicate elements...");
    for (i = 0; i < len; i++)
    {
        if (a[i] == seclar)
        {
            printf("\nFound at Index[%d] Position[%d]", i, i + 1);
            dp[count] = i;
            count++;
        }
    }
    printf("\n\nDeleting Second Largest duplicate elements...\n");
    for (i = 0; i < count; i++)
    {
        ind = dp[i];
        ind = ind - ct;
        ct++;
        for (j = ind; j < len; j++)
        {
            a[j] = a[j + 1];
        }
    }
    printf("\n\nArray After Deletion...\n");
    for (i = 0; i < len - count; i++)
    {
        printf("\nArray index[%d] position[%d]: %d\n", i, i + 1, a[i]);
    }
    return 0;
}
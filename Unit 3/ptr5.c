#include <stdio.h>
int main()
{
    int a[21], b[21], c[21], len[3], i, j;
    int *ptr[3] = {a, b, c};
    for (i = 0; i < 3; i++)
    {
        printf("\nEnter the length of %d array (max len 20): ", i + 1);
        scanf("%d", &len[i]);
        printf("\nEnter elemnet for %d array\n", i + 1);
        for (j = 0; j < len[i]; j++)
        {
            printf("Element %d : ", j + 1);
            scanf("%d", ((ptr[i]) + j));
        }
    }
    for (i = 0; i < 3; i++)
    {
        printf("\n\nElemnet of %d array\n", i + 1);
        for (j = 0; j < len[i]; j++)
        {
            printf("\nElement %d : ", j + 1);
            printf("%d", *((ptr[i]) + j));
        }
    }
    return 0;
}
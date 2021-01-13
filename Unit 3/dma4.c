#include <stdio.h>
#include <stdlib.h>
int main()
{
    int m, n,sum=0;
    float av;
    printf("Enter the number of student for grp A: ");
    scanf("%d", &m);
    printf("Enter the number of student for grp B: ");
    scanf("%d", &n);
    int *ptra = (int *)malloc(m * sizeof(int));
    int *ptrb = (int *)malloc(n * sizeof(int));
    if (ptra == NULL && ptrb==NULL)
    {
        printf("Memory not allocated!");
        exit(0);
    }
    printf("\nMarks for Group A students........");
    for (int i = 0; i < m; i++)
    {
        printf("\nElement %d: ", i + 1);
        scanf("%d", &ptra[i]);
        sum+=ptra[i];
    }
    printf("\nMarks for Group B students........");
    for (int i = 0; i < n; i++)
    {
        printf("\nElement %d: ", i + 1);
        scanf("%d", &ptrb[i]);
        sum += ptrb[i];
    }
    av=(float)sum/(m+n);
    printf("\n\nAvrage of total number is: %.2f",av);
    return 0;
}
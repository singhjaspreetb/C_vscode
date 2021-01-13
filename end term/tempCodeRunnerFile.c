#include <stdio.h>
int main()
{
    long long int a[3][3];
    float av = 0, sum[3];
    long long int(*ptr)[3] = a;
    int row[4], col[4], i, j;
    printf("Pointer to 2D array........\n\n");
    printf("Enter the row of matrix (max 3): ");
    scanf("%d", &row[0]);
    printf("\nEnter the colmun of matrix (max 3): ");
    scanf("%d", &col[0]);
    for (i = 0; i < row[0]; i++)
    {
        for (j = 0; j < col[0]; j++)
        {
            printf("\nEnter the %d %d elemnet of matrix: ", i + 1, j + 1);
            scanf("%llu", ((ptr[i]) + j));
        }
    }
    printf("\n\nMatrix is........\n\n");
    for (i = 0; i < row[0]; i++)
    {
        for (j = 0; j < col[0]; j++)

        {
            av=av + *((ptr[i]) + j);
            printf("%llu    ", *((ptr[i]) + j));
        }
        av = av / col[0];
        sum[i] = av;
        printf("\n\n");
    }
    for (i = 0; i < row[0]; i++)
    {
        printf("\n\nAverage is of array %d: %.2f", i + 1, sum[i]);
    }
    return 0;
}

// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// int main()
// {
//     int i=0,n;
//     char *str;
//     printf("Enter the size of string: ");
//     scanf("%d",n);
//     fflush(stdin);
//     str = (char *)malloc(n * sizeof(char));
//     printf("Enter the string: ");
//     gets(str);
//     while (str[i]!='\0')
//     {
//         if(str[i]==';')
//         {
//             str[i] = ' ';
//         }
//         if(str[i] == ',')
//         {
//             str[i] ='.';
//         }
//         i++;
//     }
//     puts(str);
// }
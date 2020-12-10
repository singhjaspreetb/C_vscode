#include <stdio.h>
int main()
{
    int a[100], len, num, b[100], index = 0, choice, del, flag = 0, c[100], temp;
    printf("Enter the length of array: ");
    scanf("%d", &len);
    for (int i = 0; i < len; i++)
    {
        printf("\nEnter the value for %d position and %d index: ", i + 1, i);
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < len; i++)
    {
        temp = a[i];
        for (int j = i + 1; j < len; j++)
        {
            if (temp == a[j])
            {
                num = temp;
                flag++;
                break;
            }
            if (flag == 1)
            {
                break;
            }
        }
    }
    flag = 0;

    for (int j = 0; j < len; j++)
    {
        if (a[j] == num)
        {
            b[index] = j;
            index++;
        }
    }
    if (index == 0)
    {
        printf("Number not found!");
    }
    else
    {
        printf("\nDuplicate number found at postions: \t");
        for (int k = 0; k < index; k++)
        {
            printf("%d\t", b[k] + 1);
        }
        for (int l = 0; l < index; l++)
        {
                printf("\nEnter position left to right: ");
                scanf("%d", &del);
                for (int m = del - flag; m < len; m++)
                {
                    a[m - 1] = a[m];
                }
                a[len - 1] = 0;
                len--;
                flag++;
        }
        for (int n = 0; n < len; n++)
        {
            printf("\nThe value at %d position and %d index: %d \n", n + 1, n, a[n]);
        }
    
    }

    return 0;
}
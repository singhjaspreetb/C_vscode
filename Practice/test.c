#include <stdio.h>
int print(int[], int);
int insert(int[], int, int, int);
int main()
{
    int len, a[100], num, b[100], index = 0, pos;
    printf("Enter length of array : ");
    scanf("%d", &len);
    for (int i = 0; i < len; i++)
    {
        printf("Array[%d] : ", i);
        scanf("%d", &a[i]);
    }
    print(a, len);
    printf("\nEnter number to insert : ");
    scanf("%d", &num);
    for (int i = 0; i < len; i++)
    {
        if (num == a[i])
        {
            b[index++] = i;
        }
    }
    if (index == 0)
    {
        insert(a, (len - 1) / 2, len, num);
    }
    else if (index == 1)
    {
        insert(a, b[0], len, num);
    }
    else
    {
        printf("Number found at :");
        for (int i = 0; i < index; i++)
        {
            printf("%d\t", b[i]);
        }
        printf("\nWhere you want to insert element : ");
        scanf("%d", &pos);
        insert(a, pos, len, num);
    }
    print(a, len + 1);
}
int print(int a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d\t", a[i]);
    }
}
int insert(int a[], int pos, int len, int num)
{
    for (int i = len - 1; i > pos; i--)
    {
        a[i + 1] = a[i];
    }
    a[pos + 1] = num;
}
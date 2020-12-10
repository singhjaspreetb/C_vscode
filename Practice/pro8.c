#include <stdio.h>
int main()
{
    int a[100],len,i,num1,num2,temp,s,e,m,po1,po2;
    printf("Enter the length of array: ");
    scanf("%d",&len);
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
    printf("Enter the first number: ");
    scanf("%d",&num1);
    printf("Enter the second number: ");
    scanf("%d",&num2);
    printf("\n\nShorting Array...\n");
    for(i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        }
    }
    printf("\n\nShorted Array...\n");
    for (i = 0; i < len; i++)
    {
        printf("\nArray index[%d] position[%d]: %d\n", i, i + 1, a[i]);
    }
    printf("\n\nSearching first element position...\n");                
    s=0;
    e=len-1;
    while(s<=e)
    {
        m=(s+e)/2;
        if(a[m]==num1)
        {
            printf("Found at index[%d] position[%d]", m,m+1);
            po1=m;
            break;
        }
        else if(a[m]<num1)
        {
            s=m+1;
        }
        else
        {
            e=m-1;
        } 
    }
    printf("\n\nSearching second element position...\n");
    s = 0;
    e = len - 1;
    while (s <= e)
    {
        m = (s + e) / 2;
        if (a[m] == num2)
        {
            printf("Found at index[%d] position[%d]", m,m+1);
            po2=m;
            break;
        }
        else if (a[m] < num2)
        {
            s = m + 1;
        }
        else
        {
            e = m - 1;
        }
    }
    printf("\n\nThe no of elements between %d and %d is: %d",num1,num2,po2-po1-1);
    return 0;
}
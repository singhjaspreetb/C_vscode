#include <stdio.h>
int main()
{
    int a[100],len,i,j,temp,len2;
    printf("Enter the length of array: ");
    scanf("%d",&len);
    printf("Enter array...\n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<len;i++)
    {
        for(j=i;j<len;j++)
        {
            if(a[j]%2==0)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<len;i++)
    {
        if(a[i]%2!=0)
        {
            len2=i;
            break;
        }
    }
    for (i = 0; i < len2; i++)
    {
        for (j = i; j < len2; j++)
        {
            if (a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (i = len2; i < len; i++)
    {
        for (j = i; j < len; j++)
        {
            if (a[i]>a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("\nShorted array\n");
    for (i = 0; i < len; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
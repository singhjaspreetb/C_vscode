#include <stdio.h>
int main()
{
    int arr[20],*ptr,len,i,num,flag=0;
    ptr=arr;
    printf("Enter the length of array (max len 20): ");
    scanf("%d",&len);
    for(i=0;i<len;i++)
    {
        printf("Element %d : ",i+1);
        scanf("%d",ptr+i);
    }
    printf("Enter the element to be found: ");
    scanf("%d", &num);
    for (i = 0; i < len; i++)
    {
        if(*(ptr+i)==num)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("Number (%d) found at position: %d",num,i+1);
    }
    else
    {
        printf("Number not in array!");
    }
    return 0;
}
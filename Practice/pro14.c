#include <stdio.h>
int main()
{
    int a[100],len,i;
    printf("Enter the length of Array: ");
    scanf("%d",&len);
    printf("Enter the array: \n");
    for(i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Array is: ");
    for(i=0;i<len;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("\nRevere Array is: ");
    for(i=len-1;i>=0;i--)
    {
        printf("%d  ",a[i]);
    }
    return 0;
}
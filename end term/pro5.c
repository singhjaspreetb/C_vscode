#include <stdio.h>
int avg(int*);
int len;
float sum;
int main()
{
    int arr[100];
    printf("Enter the number of marks: ");
    scanf("%d",&len);
    printf("Enter the Marks to the array....");
    for(int i=0;i<len;i++)
    {
        printf("\nMarks %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    avg(arr);
    printf("\nAvrage marks is: %.2f",sum);
    return 0;
}
int avg(int *ptr)
{
    for(int i=0;i<len;i++)
    {
        sum=sum+*(ptr+i);
    }
    sum=sum/(float)len;
}
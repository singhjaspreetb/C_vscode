#include <stdio.h>
int main()
{
    int ar[100],n;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the value for %d position and %d index: ",i+1,i);
        scanf("%d",&ar[i]);
    }
    
    for(int i=0;i<n;i++)
    {
        printf("\nThe value at %d position and %d index: %d \n",i+1,i,ar[i]);
    }
    return 0;
}
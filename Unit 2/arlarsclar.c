#include <stdio.h>
int main()
{
    int ar[100],n,flag,moves;
    printf("Enter the length of array: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("\nEnter the value for %d position and %d index: ",i+1,i);
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        flag=0;
        for(int j=0;j<n-1-i;j++)
        {
        if(ar[j]>ar[j+1])
        {
        ar[j+1]+=ar[j];
        ar[j]=ar[j+1]-ar[j];
        ar[j+1]=ar[j+1]-ar[j];
        flag++;
        moves++;
        }
        }
        if(flag==0)
        {
            break;
        }
    }
    printf("\nSecond Largest no: %d",ar[n-2]);
    return 0;
}
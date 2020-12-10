#include <stdio.h>
int main() 
{
    int ar[100],br[100],n,wi,pos,num,i,j,flag,temp,num2;
    printf("\nEnter the length of array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\nEnter the value for %d position and %d index: ",i+1,i);
        scanf("%d",&ar[i]);
    }
    printf("\nFor delete number by position enter 1\n\nFor delete number by value enter 2\n\nEnter your choice: ");
    scanf("%d",&wi);
    if(wi==1)
    {
        printf("\nEnter position to delete number: ");
        scanf("%d",&pos);
        for(j=pos-1;j<n;j++)
        { 
            ar[j]=ar[j+1];
        }
        for (i = 0; i < n-1; i++)
        {
        printf("\nThe value at %d position and %d index: %d \n", i + 1, i, ar[i]);
        }
    }
    else if (wi==2)
    {
        printf("\nEnter number to delete: ");
        scanf("%d",&num);
        for(i=0;i<n;i++)
        {
            if(ar[i]==num)
            {
                br[flag]=i;
                flag++;
            }
        }
        if(flag!=0)
        {
            printf("\nNumber found at position: ");
        for(i=0;i<flag;i++)
        {
            printf("%d\t",br[i]+1);
        }
        printf("\n");
        printf("\nEnter position to delete number: ");
        scanf("%d", &pos);
        for (j = pos - 1; j < n; j++)
        {
            ar[j] = ar[j + 1];
        }
        for (i = 0; i < n - 1; i++)
        {
            printf("\nThe value at %d position and %d index: %d \n", i + 1, i, ar[i]);
        }
    }
    else
    {
        printf("\nNumber not found!");
    }
    }
    else
    {
        printf("\nWrong choice!");
    }
    return 0;   
}
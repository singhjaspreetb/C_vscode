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
    printf("\nFor insert number by position enter 1\n\nFor incert number by value enter 2\n\nEnter your choice: ");
    scanf("%d",&wi);
    if(wi==1)
    {
        printf("\nEnter position to enter number: ");
        scanf("%d",&pos);
        printf("\nEnter number to insert: ");
        scanf("%d",&num);
        for(j=n-1;j>=pos-1;j--)
        { 
            ar[j+1]=ar[j];
        }
        ar[pos-1]=num;
        for (i = 0; i <= n; i++)
        {
        printf("\nThe value at %d position and %d index: %d \n", i + 1, i, ar[i]);
        }
    }
    else if (wi==2)
    {
        printf("\nEnter a number: ");
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
        printf("\nEnter Poition of number: ");
        scanf("%d",&temp);
        printf("\nEnter number to insert: ");
        scanf("%d",&num2);
        printf("\nFor after enter 1\nFor before enter 2\nEnter your choice: ",temp);
        scanf("%d",&pos);
        if(pos==1)
        {
            for(i=n-1;i>=temp;i--)
            {
                ar[i+1]=ar[i];
            }
            ar[temp]=num2;
        }
        else
        {
            for(i=n-1;i>=temp-1;i--)
            {
                ar[i+1]=ar[i];
            }
            ar[temp-1]=num2;
        }
        for (i = 0; i <= n; i++)
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
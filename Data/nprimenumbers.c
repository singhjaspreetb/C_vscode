#include <stdio.h>
int main()
{
    int n,flag=0;
    printf("Enter the nth term: ");
    scanf("%d",&n);
    printf("Prime numbers are: ");
    for(int num=1;num<n;num++)
    {
        flag=0;
        for(int div=2;div<num/2+1;div++)
        {
            if(num%div==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d  ",num);
        }
    }
}
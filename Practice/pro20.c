#include <stdio.h>
int oddsum(int);
int main()
{
    int n;
    printf("Enter the nth number: ");
    scanf("%d",&n);
    printf("The sum of odd numbers form 1 to %d is : %d",n,oddsum(n));
    return 0;
}
int oddsum(int n)
{
    int i=1,sum=0;
    for(i;i<=n;i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }
    return sum;
}
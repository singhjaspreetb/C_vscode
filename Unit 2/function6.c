#include <stdio.h>
int dectobi(int x);
int main()
{
    int x;
    printf("Enter decimal number : ");
    scanf("%d",&x);
    dectobi(x);
}
int dectobi(int x)
{
    int a[100],rem,i=0,n;
    while(x!=0)
    {
        rem=x%2;
        a[i]=rem;
        x=x/2;
        i++;
    }
    for(i=i-1;i>=0;i--)
    printf("%d ",a[i]);
}
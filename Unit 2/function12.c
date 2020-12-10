#include <stdio.h>
int fact(int);
int main()
{
    int x,fac;
    printf("Enter the number: ");
    scanf("%d",&x);
    fac=fact(x);
    printf("%d",fac);
}
int fact(int x)
{
    if(x==0)
    {
        return 1;
    }
    else
    {
        return x*fact(x-1);
    }
    
}
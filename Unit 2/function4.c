#include <stdio.h>
int fac(int x,long long int fact);
int main()
{
    int x;
    long long int fact=1,res;
    printf("Enter the number: ");
    scanf("%d",&x);
    res=fac(x,fact);
    printf("Factorial : %llu", res);
    return 0;
}
int fac(int x,long long int fact)
{
    while(x!=1)
    {
        fact=fact*x;
        x--;
    }
    return fact;
}
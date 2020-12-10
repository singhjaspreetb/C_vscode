#include <stdio.h>
int main()
{
    long long int num,temp,cal=0;
    printf("Enter the number: ");
    scanf("%lld",&num);
    while(num!=0)
    {
        temp=num%10;
        num=num/10;
        cal=cal+temp;
    }
    printf("The sum of number is: %lld",cal);
    return 0;
}
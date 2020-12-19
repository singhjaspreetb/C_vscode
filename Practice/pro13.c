#include <stdio.h>
int evenodd(int);
int main()
{
    int num,res;
    printf("Enter a number: ");
    scanf("%d",&num);
    res=evenodd(num);
    if(res==num)
    {
        printf("Number is even: %d",num);
    }
    else
    {
        printf("Number is  odd: %d",num);
    }
    return 0;
}
int evenodd(int num)
{
    if(num%2==0)
    {
        return num;
    }
    else
    {
        return 0;
    }
}
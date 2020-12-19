#include <stdio.h>
int perf(int);
int main()
{
    int num,res;
    printf("Enter the number: ");
    scanf("%d",&num);
    res=perf(num);
    if(res==num)
    {
        printf("%d is Perfect number: ",num);
    }
    else
    {
        printf("%d is not a Perfect number: ",num);
    }
    return 0;
}
int perf(int num)
{
    int i=1,res=0;
    for(i;i<num/2+1;i++)
    {
        if(num%i==0)
        {
            res+=i;
        }
    }
    return res;
}
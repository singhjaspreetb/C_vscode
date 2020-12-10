#include <stdio.h>
int dectooct(int);
int main()
{   
    int x,out;
    printf("Enter the octal value : ");
    scanf("%d",&x);
    out=dectooct(x);
    printf("%d",out);
}
int dectooct(int x)
{
    int a=0,rem,flag=1;
    while(x!=0)
    {
        rem=x%8;
        a=a+rem*flag;
        flag=flag*10;
        x=x/8;
    }
    return a;
}
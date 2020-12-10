#include <stdio.h>
int octtodec(int);
int main()
{
    int x,out;
    printf("Enter the octal digit: ");
    scanf("%d",&x);
    out=octtodec(x);
    printf("%d",out);
}
int octtodec(int x)
{
    int a=0,rem,i,j=0;
    while(x!=0)
    {
        rem=x%10;
        x/=10;
        for(i=0;i<j;i++)
        {
            rem*=8;
        }
        a=a+rem;
        j++;

    }
    return a;
}
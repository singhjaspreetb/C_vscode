#include <stdio.h>
int main()
{
    int in,out=0,temp,rem;
    printf("Enter the number: ");
    scanf("%d",&in);
    temp=in;
    top:
    if (in!=0)
    {
        rem=in%10;
        out=out*10+rem;
        in/=10;
        goto top;
    }
    if(temp==out)
    printf("%d is palindrome number",temp);
    else
    printf("%d in not palindrome number",temp);
}
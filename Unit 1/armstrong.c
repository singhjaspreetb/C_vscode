#include <stdio.h>
int main()
{
    int num,a,b,c,cal;
    top:
    printf("\nEnter a 3 digit number: ");
    scanf("%d",&num);
    a=num%10;
    b=(num%100)/10;
    c=num/100;
    cal=a*a*a+b*b*b+c*c*c;
    if(num==cal)
    printf("%d is Armstrong number",num);
    else
    printf("%d is not Armstrong number",num);
    goto top;
}
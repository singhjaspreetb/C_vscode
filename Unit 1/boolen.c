#include<stdio.h>
int main()
{
    int a,b,c,temp,i=0;
    printf("A   B   C   !A   !C   !A+B   B&&!C   !A+B||(B&&!C)");
    top:
    if(i>=0 && i<=3)
        a=0;
    else
        a=1;
    if(i==0 || i==1 || i==4 || i==5)
        b=0;
    else
        b=1;
    if(i%2==0)
        c=0;
    else
        c=1;
    temp=!a+b;
    if(temp)
        temp=1;
    printf("\n%d   %d   %d    %d    %d    %d      %d           %d  ",a,b,c,!a,!c,temp,b&&!c,!a+b||(b&&!c));
    i=i+1;
    if(i<8)
    goto top;
}
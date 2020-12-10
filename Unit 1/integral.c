#include <stdio.h>
int main()
{
    float x;
    int temp,sum,u,t;
    printf("Enter your number: ");
    scanf("%f",&x);
    temp=(int)x;
    u=temp%10;
    t=(temp%100)/10;
    sum=t+u;
    printf("\nIntpart=%d\nTens=%d\nUnits=%d\nAddition=%d",temp,t,u,sum);
    return 0;
}
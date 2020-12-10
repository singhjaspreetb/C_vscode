#include <stdio.h>
int main()
{
    int a,b,c,d,e,total;
    float per ;
    printf("enter markrs");
    scanf("%d",&a);
    printf("enter markrs");
    scanf("%d",&b);
    printf("enter markrs");
    scanf("%d",&c);
    printf("enter markrs");
    scanf("%d",&d);
    printf("enter markrs");
    scanf("%d",&e);
    total=a+b+c+d+e;
    per=(a+b+c+d+e/500)*100;
    printf("percentage is %f",per);
    switch(per)
    {
        case per>=95:
        printf("A+");
        case per>=90:
        printf("A");
        case per>=80:
        printf("B");
        case per>=70:
        printf("C");
        case per>=60:
        printf("D");
        case per>=50:
        printf("E");
        case per>=40:
        printf("F");
        case per<40:
        printf("U");
        default: printf(" total is: %d",total); 
    }
    return 0;
}
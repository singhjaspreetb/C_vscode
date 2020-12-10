#include <stdio.h>
#include <math.h>
int main()
{
    float a,b,c,d,x1,x2;
    printf("Enter the values for quadartic equation:\nax^2+bx+c\n");
    printf("Enter value for a: ");
    scanf("%f",&a);
    printf("Enter value for b: ");
    scanf("%f",&b);
    printf("Enter value for c: ");
    scanf("%f",&c);
    d=b*b-4*a*c;
    if(d>0)
    {
        x1=(-b+sqrt(d))/(2*a);
        x2=(-b-sqrt(d))/(2*a);
        printf("Real root exits\n");
        printf("First root: %.2f\n",x1);
        printf("Second root: %.2f\n",x2);
    }
    else if(d==0)
    {
        x1=-b/(2*a);
        x2=x1;
        printf("Real roots exist\n");
        printf("First root: %.2f",x1);
        printf("\nSecond root: %.2f",x2);
    }
    else
    printf("Roots are imaginary!");
}
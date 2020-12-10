#include <stdio.h>
int main()
{
    double r,a,c;
    printf("Enter the value of radius(cm): ");
    scanf("%lf",&r);
    a=3.14*r*r;
    c=2*3.14*r;
    printf("Radius=%lfcm\nArea=%lfcm^2\nCircumference=%lfcm",r,a,c);
    return 0;
}
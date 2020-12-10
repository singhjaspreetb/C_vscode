#include <stdio.h>
int main()
{
    double a,b,c,d,e,f,x,y,slope1,slope2;
    printf("Enter the values for equation:\nax + by = c\n");
    printf("Enter value for a: ");
    scanf("%lf",&a);
    printf("Enter value for b: ");
    scanf("%lf",&b);
    printf("Enter value for c: ");
    scanf("%lf",&c);
    printf("Enter the values for equation:\ndx + ey = f\n");
    printf("Enter value for d: ");
    scanf("%lf",&d);
    printf("Enter value for e: ");
    scanf("%lf",&e);
    printf("Enter value for f: ");
    scanf("%lf",&f);
    slope1=-a/b;
    slope2=-d/e;
    if(slope1==slope2)
        printf("Lines are parallel");
    else
    {
        x=(b*f-e*c)/(d*b-e*a);
        y=(f*a-d*c)/(a*e-d*b);
        printf("Point of intersection: (%.2lf , %.2lf)", x, y);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    double x,in,cm,feet;
    printf("Enter the length in Meter: ");
    scanf("%lf",&x);
    in = 39.3701 * x;
    cm=100*x;
    feet = 3.28084*x;
    printf("In meter=%lf\nIn inches=%lf\nIn cm=%lf\nIn feet=%lf",x,in,cm,feet);
    return 0;
}
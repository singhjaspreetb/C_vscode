#include <stdio.h>
int main()
{
    double num;
    printf("Enter the number: ");
    scanf("%lf",&num);
    printf("%lf meter\n",num*1000);
    printf("%lf feet\n", num * 3280.84);
    printf("%lf inches\n", num * 39370.1);
    printf("%lf cm", num * 100000);
    return 0;
}
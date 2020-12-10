#include <stdio.h>
int main()
{
    int a = 6, b = 7, c = 8, d = 9, e = 10;
    e = a*b/4%c+d*a%9-c;
    printf("%d", e);
    return 0;
}
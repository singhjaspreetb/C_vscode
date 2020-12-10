#include <stdio.h>
int gcd(int x, int y);
int main() {
    int x, y;
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("Enter the number: ");
    scanf("%d",&y);
    printf("Greatest Divisor is: %d",gcd(x, y));
    return 0;
}
int gcd(int x, int y) 
{
    if (y != 0)
        return gcd(y, x % y);
    else
        return x;
}
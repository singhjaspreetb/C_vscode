#include <stdio.h>
int main()
{
    int n, h, t, u;
    printf("Enter the value: ");
    scanf("%d",&n);
    u = n % 10;
    t = (n / 10) % 10;
    h = (n / 100) % 10;
    printf("\nHundreds = %d \nTens = %d \nUnits = %d\n", h, t, u);
    return 0;
}
#include <stdio.h>
int main()
{
    char x[100];
    int y;
    float z;
    printf("Enter the value charactor,integer,float:\n");
    scanf("%s  %d %f", x, &y, &z);
    printf("\n%s", x);
    printf("\n%d", y);
    printf("\n%f", z);
    return 0;
}

#include <stdio.h>
int main()
{
    char x[100];
    int y;
    float z;
    printf("Enter the value charactor,integer,float:\n");
    scanf("%s  %d %f", x, &y, &z);
    printf("\n%s \n%d \n%f", x, y, z);
    return 0;
}

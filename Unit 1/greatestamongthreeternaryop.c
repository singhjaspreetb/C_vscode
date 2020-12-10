#include <stdio.h>
int main()
{
    int x,y,z,temp;
    printf("Enter the first value: ");
    scanf("%d",&x);
    printf("Enter the second value: ");
    scanf("%d", &y);
    printf("Enter the third value: ");
    scanf("%d", &z);
    temp=(x>y)?((x>z)?x:z):(y>z?y:z);
    printf("%d is largest",temp);
    return 0;
}
#include <stdio.h>
int main()
{
    int x,y,z;
    printf("Enter the value for x,y,z: ");
    scanf("\n%d%d%d",&x,&y,&z);
    if (x == y && x == z)
    printf("all are same:%d", x);
    else if (x>y && x>z)
    {
        printf("\nx=%d is largent\n",x);
        if (x == y && x != z)
            printf("x=y:%d z=%d", x, z);
        else if (x == z && x != y)
            printf("x=z:%d y=%d", x, y);
        else
            printf("y=z:%d x=%d", y, x);
    }
    else if (y>x && y>z)
    {
        printf("y=%d is largest\n",y);
        if (x == y && x != z)
            printf("x=y:%d z=%d", x, z);
        else if (x == z && x != y)
            printf("x=z:%d y=%d", x, y);
        else
            printf("y=z:%d x=%d", y, x);
    }
    else if (z>x && z>y)
    {
        printf("z=%d is largest\n",z);
        if (x == y && x != z)
            printf("x=y:%d z=%d", x, z);
        else if (x == z && x != y)
            printf("x=z:%d y=%d", x, y);
        else
            printf("y=z:%d x=%d", y, x);
    }
    else
    {
        if (x == y && x != z)
            printf("%d is largest\nx=y:%d z=%d", x,x, z);
        else if (x == z && x != y)
            printf("%d is largest\nx=z:%d y=%d",x,x, y);
        else
            printf("%d is largest\ny=z:%d x=%d",y, y, x);
    } 
    return 0;
}
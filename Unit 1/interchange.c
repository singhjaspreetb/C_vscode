#include <stdio.h>
int main()
{
    printf("With temp variable");
    int x=1 , y=3 , temp;
    printf("\nbefore interchange x=%d y=%d\n", x, y);
    temp=x;
    x=y;
    y=temp;
    printf("after interchange x=%d y=%d",x,y);

    //without temp
    printf("\n\nWithout temp variable");
    int a = 5, b = 7;
    printf("\nbefore interchange a=%d b=%d\n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("after interchange a=%d b=%d",a,b);
    return 0;
}
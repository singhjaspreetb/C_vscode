#include <stdio.h>
int add(int x, int y );
int main()
{
    int x , y , res ;
    printf("Enter two numbers: ");
    scanf("%d %d",&x,&y);
    res=add(x,y);
    printf("sum : %d",res);
    return 0;
}
int add(int x,int y)
{
    int z;
    z=x+y;
    return z;
}
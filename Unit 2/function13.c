#include <stdio.h>
int fab(int);
int main()
{
    int x,num;
    printf("enter the end term: ");
    scanf("%d",&x);
    for(int i=0;i<x;i++)
    {
        num=fab(i);
        printf("%d  ",num);
    }
    return 0;
}
int fab(int x)
{
    if(x==0)
    {
        return 0;
    }
    else if(x==1)
    {
        return 1;
    }
    else 
    {
        return fab(x-1)+fab(x-2);
    }

}
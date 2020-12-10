#include <stdio.h>
int main()
{
    int sec,h,m;
    printf("Enter time in sec: ");
    scanf("%d",&sec);
    h=sec/3600;
    m=(sec-(3600*h))/60;
    sec=sec-(3600*h)-(m*60);
    printf("%d:%d:%d",h,m,sec);
    return 0;
}
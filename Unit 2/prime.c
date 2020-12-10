#include <stdio.h>
int main()
{
    int num,con,x=2,y=0;
    printf("Enter a number: ");
    scanf("%d",&num);
    con=num/2;
    while(x<=con)
    {
       if(num%x==0)
       {
           y=1;
           break;
       }
       x++;
    }
    if(y==0)
    printf("The number is Prime");
    else
    printf("The number is not Prime");
    return 0;
}
#include <stdio.h>
int main()
{
    int x,n,temp=1,a;
    printf("Enter the number: ");
    scanf("%d",&x);
    printf("Enter the nth term: ");
    scanf("%d",&n);
    temp=temp<<(n-1);
    a=1&temp; 
    switch (a)
    {
        case 0:
            printf("%d term is not set",n);
            break; 
        default:
            printf("%d term is set",n);
            break;
    }
}   
#include <stdio.h>
int prime(int l1,int l2);
int main()
{
    int l1,l2;
    printf("enter starting value: ");
    scanf("%d",&l1);
    printf("enter limit: ");
    scanf("%d", &l2);
    prime(l1,l2);
    return 0;
}
int prime(int l1,int l2)
{
    int flag=0;
    while(l1<=l2)
    {
        flag=0;
        for(int i=2;i<=l1/2;i++)
        {
            if(l1%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("%d\n",l1);
        }
        l1++;
    }
}
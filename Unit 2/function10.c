#include <stdio.h>
int dectohex(int);
int main()
{
    int x,out;
    printf("Enter the dec value: ");
    scanf("%d",&x);
    dectohex(x);
}
int dectohex(int x)
{
    char a[100],ch;
    int i=0,rem;
    while(x!=0)
    {
        rem=x%16;
        x/=16;
        if(rem<10)
        a[i]=rem+48;
        else
        {
            if (rem == 10)
                ch='A';
            else if(rem==11)
                ch = 'B';
            else if (rem == 12)
                ch = 'C';
            else if (rem == 13)
                ch = 'D';
            else if (rem == 14)
                ch = 'E';
            else if (rem == 15)
                ch = 'F';
            a[i]=ch;
        }
        i++;
    }
    for(int j=i-1;j>=0;j--)
    {
        printf("%c",a[j]);
    }
}
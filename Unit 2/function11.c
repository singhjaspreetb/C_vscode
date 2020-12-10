#include <stdio.h>
int hextodec(char[]);
int main()
{
    char x[100];
    printf("Enter a hex value: ");
    gets(x);
    hextodec(x);
}
int hextodec(char x[100])
{
    char a;
    int i,out=0,b,j=0,k;
    for(i=0;x[i+1]!='\0';i++)
    {}
    for(i;i>=0;i--)
    {
        a=x[i];
        if(a>='A' && a<='F')
        {
        if(a=='A')
        b=10;
        else if(a=='B')
        b=11;
        else if(a=='C')
        b=12;
        else if(a=='D')
        b=13;
        else if(a=='E')
        b=14;
        else if(a=='F')
        b==15;
        }
        else
        {
            b=a-48;
        }

        for(k=0;k<j;k++)
        {
            b*=16;
        }
        out=out+b;
        j++;
    }
    printf("%d",out);
}
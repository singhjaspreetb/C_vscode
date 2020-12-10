#include <stdio.h>
int bitodec(long long int x);
int main()
{
    long long int x;
    int out;
    printf("Enter the binary digit: ");
    scanf("%llu",&x);
    // bitodec(x);
    out=bitodec(x);
    printf("%d",out);
    return 0;

}
int bitodec(long long int x)
{
    int rem,y=0,i=0,j;
    while(x!=0)
    {
        rem=x%10;
        x=x/10;
        for( j=0;j<i;j++)
        {
            rem*=2;
        }
        y=y+rem;
        i++;
    }
    return y;
}
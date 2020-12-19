#include <stdio.h>
int swap(int);
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Number after swap first and last digit: %d",swap(num));
    return 0;
}
int swap(int num)
{
    int len=0,temp,a[100],i;
    temp=num;
    while(temp!=0)
    {
        a[len]=temp%10;
        len++;
        temp/=10;
    }
    temp=0;
    for(i=len-1;i>=0;i--)
    {
        if(i==0)
        {
            temp+=a[len-1];
        }
        else if(i==len-1)
        {
            temp+=a[0];
        }
        else
        {
            temp+=a[i];
        }
        temp*=10;
    }
    temp/=10;
    return temp;
}
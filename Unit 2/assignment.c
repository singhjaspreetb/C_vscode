#include<stdio.h>
int main()
{
    int len;
    int a[100];
    long long int sum=0;
    printf("Enter number of elephents : ");
    scanf("%d",&len);
    for(int i=0;i<len;i++)
    {
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    printf("Average weight is : %llu",sum/len);
}
#include <stdio.h>
int main()
{
    int i, j, k, r=0,num,rem,temp;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while(num!=0)
    {
        r++;
        num=num/10;
    }
    
    for (i = 0; i < r; i++)
    {
        num=temp;
        temp=temp/10;
        for (k = i + 1; k > 1; k--)
            printf("* ");
        for (j = r; j > i; j--)
        {
            rem=num%10;
            num=num/10;
            printf("%d ", rem);
        }
        printf("\n");
    }
    return 0;
}
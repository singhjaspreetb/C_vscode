#include <stdio.h>
int main()
{
    int a,b,c;
    float cal;
    printf("Enter marks of three subject:");
    scanf("%d%d%d",&a,&b,&c);
    cal=(a+b+c)/3.0;
    if  (cal>80 && cal<=100)
    {
        printf("your persentage is %f", cal);
        printf("\nA grade");
    }
    else if (cal>=70 && cal<80)
    {
        printf("your persentage is %f",cal);
        printf("\nB grade");
    }
    else if (cal>=60 && cal<70)
    {
        printf("your persentage is %f",cal);
        printf("\nC grade");
    }
    else if (cal<60)
    {
        printf("your persentage is %f",cal);
        printf("\nD grade");
    }
    else
    {
        printf("You entered wrong number!");
    }
     
}
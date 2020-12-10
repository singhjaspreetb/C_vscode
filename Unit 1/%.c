#include <stdio.h>

int main()
{
    int a, b, c, d, e; 
    float per; 
    printf("Enter five subjects marks: ");
    scanf("%d%d%d%d%d", &a, &b, &c, &d, &e);
    per = (a + b + c + d + e) / 5.0;
    printf("Percentage = %.2f\n", per);
    if(per >=95)
    {
        printf("A+");
    }
    else if(per >= 90)
    {
        printf("A");
    }
    else if(per >= 80)
    {
        printf("B");
    }
    else if(per >= 70)
    {
        printf("C");
    }
    else if(per >= 60)
    {
        printf("D");
    }
    else if(per >= 50)
    {
        printf("E");
    }
    else if(per >= 40)
    {
        printf("F");
    }
    else
    {
        printf("U");
    }
    return 0;
}
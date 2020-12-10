#include <stdio.h>
int main()
{
    int op;
    float temp,cal;
    printf("Enter 1 to convert Celsius to Fahrenheit\nEnter 2 to convert Fahrenheit to Celsius\nChoice: ");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
            printf("Enter temprature in celsius:");
            scanf("%f", &temp);
            printf("%f °F",temp*9/5+32);
            break;
        case 2:
            printf("Enter temprature in fahrenheit:");
            scanf("%f", &temp);
            printf("%f °C",(temp-32)*5/9);
            break;
        default:
            printf("You make wrong choice!");
            break;
    }
}
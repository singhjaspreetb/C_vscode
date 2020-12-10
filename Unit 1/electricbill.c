#include <stdio.h>
int main()
{
    float unit,cal,temp,x,y,z;
    printf("Enter the unit: ");
    scanf("%f",&unit);
    if (unit<=200)
    {
        cal=unit*3.75+75;
        printf("%f",cal);
    }
    else if (unit>200 && unit<=300)
    {
        x=200*3.75+75;
        y=unit-200;
        y=y*4+75;
        temp=5*y/100;
        cal=x+y+temp;
        printf("%f",cal);
    }
    else
    {
        x=200*3.75+75;
        y=100*4+75;
        y=5*y/100+y;
        z=unit-300;
        z=z*4.25+75;
        temp=10*z/100;
        cal=x+y+z+temp;
        printf("%f",cal);
    }
    return 0;
}
#include <stdio.h>
int main()
{
    char name[20];
    int age;
    long long int num;
    float per;
    printf("Enter your name: ");
    scanf("%s",&name);
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Enter your cont.: ");
    scanf("%lld",&num);
    printf("Enter your per: ");
    scanf("%f",&per);
    printf("\nThank You. Your data has been saved in our system");
    printf("\nName =%s\nAge =%d\nContact Number= %lld\nPercentage = %.2f%%",name,age,num,per);
    return 0;
}
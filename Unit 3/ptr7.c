#include <stdio.h>
char *week_day[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
int *week(int *);
int main()
{
    
    int choice;
    printf("Enter the week day(1-7): ");
    scanf("%d",&choice);
    week(&choice);
    return 0;
}
int *week(int *choice)
{
    if (*choice > 0 && *choice < 8)
    {
        printf("Day is %s", week_day[*choice - 1]);
    }
    else
    {
        printf("You make wrong choice!");
    }
}

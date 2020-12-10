#include<stdio.h>
int main()
{
    float depo,bal=999,temp,interest;
    int choice,days;
    printf("1. Deposit an amount : \n");
    printf("2. Withdraw an amount : \n");
    printf("3. Displaying the balance amount : \n");
    printf("4. Calculating interest for d days \n");
    printf("5. Exit \n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
    switch (choice){
        case 1:
        {
            printf("Enter Amount to Deposit");
            scanf("%f",&depo);
            bal+=depo;
            printf("Successfully deposited %f amount",depo);
            break;
        }
        case 2:
        {
            printf("Your Amount %f \nEnter to amount to Withdraw: ",bal);
            scanf("%f",&temp);
            bal=bal-temp;
            printf("Money left %f",bal);
            break;
        }
        case 3:
        {
            printf("%f Balance Amount",bal);
            break;
        }
        case 4:
        {
            printf("Enter number of days");
            scanf("%d",&days);
            interest=bal*days*4/36500;
            printf("interest is %f",interest);
            break;
        }
        default:
        printf("Thanks for coming!");
        break;
    }   
    return 0;
    
}
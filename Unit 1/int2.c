#include<stdio.h>
int main()
{
    float dep,bal=4000,temp,intrust;
    int choice,days;
    printf("1.Deposite amount\n2.Withdraw amount\n3.Display balance amount\n4.Display intrust\n5.Exit");
    scanf("%d",&choice);
    switch (choice){
        case 1:
        {
            printf("Enter amount to deposite");
            scanf("%f",&dep);
            bal+=dep;
            printf("succesfully deposited %f amount",dep);
            break;
        }
        case 2:
        {
            printf("your amount is %f how much you want to withdraw",bal);
            scanf("%f",&temp);
            bal-=temp;
            printf("money debited from your account and remaining balance is %f",bal);
            break;
        }
        case 3:
        {
            printf("%f is your bank balance",bal);
            break;
        }
        case 4:
        {
            printf("enter number of days");
            scanf("%d",&days);
            intrust=(bal*4*days)/(365*100);
            printf("intrust is %f rupees",intrust);
            break;
        }
        default:
        printf("thanku");
        break;
    }   
    return 0;
    
}
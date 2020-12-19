#include <stdio.h>
int cube(int,int);
int main()
{
    int num,deg;
    printf("Enter the number: ");
    scanf("%d",&num);
    printf("Enter Degree to the number: ");
    scanf("%d",&deg);
    printf("%d^%d is : %d",num,deg,cube(num,deg));
    return 0;
}
int cube(int num,int deg)
{
    int pow=1;
    for(deg;deg>0;deg--)
    {
        pow=pow*num;
    }
    return pow;
}

// //  Using Recursion
// #include <stdio.h>
// int cube(int,int);
// int main()
// {
//     int num,deg;
//     printf("Enter the number: ");
//     scanf("%d",&num);
//     printf("Enter Degree to the number: ");
//     scanf("%d",&deg);
//     printf("%d^%d is : %d",num,deg,cube(num,deg));
//     return 0;
// }
// int cube(int num,int deg)
// {
//     if(deg==0)
//     {
//         return 1;
//     }
//     else
//     {
//         return num*cube(num,deg-1);
//     }
// }

#include <stdio.h>
int main()
{
    char val;
    printf("Enter a Character: ");
    scanf("%c",&val);
    if(val>='A' && val<='Z')
    printf("Capital letter");
    else if(val>='a' && val<='z')
    printf("Small case letter");
    else if(val>='0' && val<='9')
    printf("Digit");
    else
    printf("Special symbol");
    return 0;
}
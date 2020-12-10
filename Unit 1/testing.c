#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    char ch,s[100], sen[100];
    scanf("%c", &ch);
    printf("%c\n", ch);
    scanf("%s", &s);
    printf("%s\n", s);
    //scanf("%s", &sen);
    scanf("\n");
    scanf("%[^\n]%*s", sen);
    printf("%s", sen);
    return 0;
}

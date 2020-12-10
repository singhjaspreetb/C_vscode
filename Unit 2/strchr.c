#include <stdio.h>
#include <string.h>
int main()
{
    char inp[100],ch;
    char  *pos;
    printf("Enter a word: ");
    gets(inp);
    printf("\nEnter the character you want to find:");
    scanf("%c",&ch);
    pos=strchr(inp,ch);
    printf("\nPosition is: %d",pos);
    return 0;
}
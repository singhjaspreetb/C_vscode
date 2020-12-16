#include <stdio.h>

int main(void)
{
    char str[1000];
    int i = 0, word = 0, line = 0, ch = 0;
    printf("Enter string and insert ; when you are done: ");
    scanf("%[^;]s", str);
    while (str[i] != '\0')
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
        {
            ch++;
        }    
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        {
            word++;
        }
        if (str[i] == '\n')
        {
            line++;
        }
        i++;
    }
    printf("\nNumber of character : %d", ch);
    printf("\nNumber of words : %d", word + 1);
    printf("\nNnumbe of lines : %d", line + 1);
    return 0;
}

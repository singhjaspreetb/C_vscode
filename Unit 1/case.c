#include <stdio.h>
int main()
{
    char ch, ty,quit;
    start:
    printf("\nEnter u for uppercase and l for lowercase: ");
    fflush(stdin);
    scanf("%c", &ty);
    printf("\nEnter a charactor: ");
    fflush(stdin);
    scanf("%c", &ch);
    switch (ty)
    {
    case 'u':
        ch = ch - 32;
        printf("\nUppercase: %c", ch);
        printf("\nEnter q to quit to continue press enter:");
        fflush(stdin);
        scanf("%c",&quit);
        if (quit != 'q')
            goto start;
        else
            printf("thanks!");
            break;
    case 'l':
        ch = ch + 32;
        printf("\nlowercase: %c", ch);
        printf("\nEnter q to quit to continue press enter:");
        fflush(stdin);
        scanf("%c",&quit);
        if (quit != 'q')
            goto start;
        else
            printf("thanks!");
            break;
        }
}

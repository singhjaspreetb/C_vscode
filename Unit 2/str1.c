#include <stdio.h>
#include <string.h>
int main()
{
    int choice, i = 0;
    char str[100], str2[100], ch, ch2;
    printf("1: scanf()\t2: gets()\t3: getchar()\t4: sscanf()\nSelect the string input method: ");
    scanf("%d", &choice);
    printf("Enter the String: ");
    switch (choice)
    {
    case 1:
        fflush(stdin);
        scanf("%[^\n]%*c", str);
        break;
    case 2:
        fflush(stdin);
        gets(str);
        break;
    case 3:
        fflush(stdin);
        printf("Enter $ at end: ");
        while ((str[i] = getchar()) != '$')
        {
            i++;
        }
        str[i] = '\0';
        break;
    case 4:
        fflush(stdin);
        gets(str);
        sscanf(str, "%c %c", &ch, &ch2);
        printf("\n%c", ch);
        printf("\n%c", ch2);
        break;
    default:
        printf("\nYou make wrong choice!");
        break;
    }
    printf("\n1: printf()\t2: puts()\t3: putchar()\t4: sprintf()\n\nSelect the string output method: ");
    fflush(stdin);
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        printf("String is: %s", str);
        break;
    case 2:
        puts(str);
        break;
    case 3:
        i = 0;
        while (str[i] != '\0')
        {
            putchar(str[i]);
            i++;
        }
        break;
    case 4:
        sprintf(str2, str);
        puts(str2);
        break;
    default:
        printf("\nYou make wrong choice!");
        break;
    }
    return 0;
}
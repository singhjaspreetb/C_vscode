#include <stdio.h>
int main()
{
    int choice;
    char str[100];
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
        getchar();
        break;
    case 4:
        fflush(stdin);
        sscanf("");
        break;
    default:
        printf("\nYou make wrong choice!");
        break;
    }
    printf("\n1: printf()\t2: puts()\t3: putchar()\t4: sprintf()\n\nSelect the string output method: ");
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
        putchar();
        break;
    case 4:
        sprintf("");
        break;
    default:
        printf("\nYou make wrong choice!");
        break;
    }
    return 0;
}
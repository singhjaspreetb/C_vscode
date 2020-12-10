#include <stdio.h>
void fun();

int main()
{
    fun();
    return 0;
}

void fun()
{
    char na[20];
    printf("Enter the name: ");
    gets(na);
    printf("Hello %s",na);
}
#include <stdio.h>
int main()
{
    void *ptr;
    char name[50];
    int age;
    ptr = (char *)name;
    printf("Enter your name: ");
    gets(ptr);
    printf("Name: %s",ptr);
    ptr=(int*)age;
    printf("\nEnter your age: ");
    scanf("%d",ptr);
    printf("Age: %d",*(int*)ptr);
    ptr=NULL;
    printf("\nAfter NULL: %d",ptr);
    return 0;
}
#include <stdio.h>

int main()
{
    int x;
    char ch;
    char string[20];
    long int c;
    double d;
    short int e;
    float f;
    printf("Data types in C programming language\n");
    printf("integer:");
    scanf("%d",&x);
    printf("\n%d",x);
    printf("\nThe size of integer is:%d",sizeof(x));
    printf("\nCharacter:");
    fflush(stdin);
    scanf("%c",&ch);
    printf("\n%c",ch);
    printf("\nThe size of character is:%d",sizeof(ch));
    printf("\n string:");
    scanf("%s",&string);
    printf("\n%s",string);
    printf("\nThe size of string is:%d",sizeof(string));
    printf("\nlong integer:");
    scanf("%ld",&c);
    printf("\n%ld",c);
    printf("\nThe size of long integer is:%d",sizeof(c));
    printf("\nShort integer:");
    scanf("%hd",&e);
    printf("\n%hd",e);
    printf("\nThe size of short integer is:%d",sizeof(e));
    printf("\nDouble:");
    scanf("%lf",&d);
    printf("\n%lf",d);
    printf("\nThe size of double is:%d",sizeof(d));
    printf("\nFloat:");
    scanf("%f",&f);
    printf("\n %f",f);
    printf("\nThe size of float is:%d",sizeof(f));
    return 0;
}
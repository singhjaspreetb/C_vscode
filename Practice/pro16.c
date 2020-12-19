#include <stdio.h>
char con(char[],char[],char[]);
int main()
{
    char a[100],b[100],c[200];
    printf("Enter the first string: ");
    gets(a);
    printf("Enter the second string: ");
    gets(b);
    con(a,b,c);
    printf("Stritg after concatenation: ");
    puts(c);
    return 0;
}
char con(char a[100],char b[100],char c[200])
{
    int i,j;
    for(i=0;a[i]!='\0';i++)
    {
        c[i]=a[i];
    }
    for(j=0;b[j]!='\0';j++)
    {
        c[j+i]=b[j];
    }
    c[j+i]='\0';
}
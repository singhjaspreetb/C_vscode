#include <stdio.h>
#include <string.h>
int check(char[], char[], int);
int main()
{
    char a[100], b[100];
    int x = 0, i = 0;
    gets(a); // input of main string
    gets(b); //input of substring
    for (i = 0; i < strlen(a); i++)
    {
        if (a[i] == b[0])       //a=hhahha
                                //b=hha
        {                       //means h=h or not
            x = check(a, b, i); //function to check whether b in a or not
            if (x)
            {
                printf("found at :  %d location ", i);
            }
        }
    }
}
int check(char a[], char b[], int x)
{
    int j = 0, flag = 1;
    while (b[j] != '\0') //check b is end or not
    {
        if (a[x] != b[j])
        {
            flag = 0;
            break;
        }
        j++;
        x++;
    }
    if (flag == 1)
        return 1;
    else
        return 0;
}
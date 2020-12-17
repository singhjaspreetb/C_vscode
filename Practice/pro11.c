#include <stdio.h>
int main()
{
    char str[100],str2[100];
    int i=0,j=0,k=0;
    printf("Enter the string: ");
    gets(str);
    while(str[i]!='\0')
    {
        j=i+1;
        while(str[j]!='\0')
        {
            if(str[j]==str[i])
            {
            break;
            }
            j++;
        }
        if(str[j]=='\0')
        {
            str2[k]=str[i];
            k++;
        }
        i++;
    }
    str2[k]='\0';
    printf("String after removal of duplicate characters: ");
    puts(str2);
    return 0;
}
#include <stdio.h>
int main()
{
    char str[100],str2[100];
    int i=0,j=1,k=0,l=0;
    printf("Enter the string: ");
    gets(str);
    while(str[i]!='\0');
    {
        while(str[j]!='\0')
        {
           
            if(str[j]==str[i])
            {
                l=j;
                k=j+1;
                while(str[k]!='\0')
                {
                    str[l]=str[k];
                    l++;
                    k++;
                }
                str[k]='\0';
                
            }
            j++;
        }
        i++;
    }
    puts(str);
    return 0;
}
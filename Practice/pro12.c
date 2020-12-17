#include <stdio.h>
int main()
{
    char str1[100],str2[100];
    int len1=0,len2=0,i=0,j=0,f=0;
    printf("Enter the first string: ");
    gets(str1);
    printf("Enter the second string: ");
    gets(str2);
    while(str1[len1]!='\0')
    {
        len1++;
    }
    while (str2[len2] != '\0')
    {
        len2++;
    }
    if(len1==len2)
    {
        for(i=0;i<len1;i++)
        {   
            f=0;
            
            for(j=0;j<len1;j++)
            {
                if(str1[i]==str2[j])
                {
                    f=1;
                }
            }
            if(f==0)
            {
                break;
            }

        }
        if(f==1)
        {
            printf("The strings are anagram.");
        }
        else
        {
            printf("Strings are not anagram!");
        }
    }
    else
    {
        printf("Strings are not anagram!");
    }
    return 0;
}
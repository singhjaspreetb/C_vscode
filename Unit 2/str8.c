#include <stdio.h>
#include <string.h>
int strcomp(char[],char[]);
int main()
{
    int choice,res;
    char str1[100],str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);
    printf("\n1: By Predefined Function\t2: By Manually\n\nSelect method to comparing the string to another: ");
    scanf("%d", &choice);
    switch (choice)
    {
    case 1:
        res=strcmp(str1,str2);
        break;
    case 2:
        res=strcomp(str1,str2);
        break;
    default:
        printf("You make wrong choice!");
        break;
    }
    printf("res==%d\n",res);
    if(res==0)
    {
        printf("Both the strings are equal");
    }
    else if(res>0)
    {
        printf("First string is greater");
    }
    else
    {
        printf("Second string is greater");
    }
    return 0;
}
int strcomp(char str1[100],char str2[100])
{
    int i,len1=0,len2=0,flag;
    while(str1[len1]!='\0')
    {
        len1++;
    }
    while(str2[len2]!='\0')
    {
        len2++;
    }
    
    if(len1==len2)
    {
        for(i=0;i<len1;i++)
        {
            flag=0;
            if(str1[i]==str2[i])
            {
                flag=1;
            }
            else if(str1[i]>str2[i])
            {
                return (str1[i]-str2[i]);
                break;
            }
            else
            {
                return (str1[i]-str2[i]);
                break;
            }
        }
        if(flag==1)
        {
            return 0;
        }
    }
    else if(len1>len2)
    {
        for(i=0;i<len1;i++)
        {
            flag=0;
            if(str1[i]==str2[i])
            {
                flag=1;
            }
            else if(str1[i]>str2[i])
            {
                return (str1[i]-str2[i]);
                break;
            }
            else
            {
                return (str1[i]-str2[i]);
                break;
            }
        }
        if(flag==1)
        {
            return 0;
        }
    }
    else
    {
        for(i=0;i<len2;i++)
        {
            flag=0;
            if(str1[i]==str2[i])
            {
                flag=1;
            }
            else if(str1[i]>str2[i])
            {
                return (str1[i]-str2[i]);
                break;
            }
            else
            {
                return (str1[i]-str2[i]);
                break;
            }
        }
        if(flag==1)
        {
            return 0;
        }
    }
}
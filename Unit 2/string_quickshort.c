#include <stdio.h>
#include <string.h>
int quick_short(char[], int, int);
int pivot(char[], int, int);
int main()
{
    char s[100];
    gets(s);
    puts(s);
    quick_short(s, 0, strlen(s) - 1);
    puts(s);
}
int quick_short(char s[], int start, int end)
{
    int present_index;
    if (start < end)
    {
        present_index = pivot(s, start, end);
        quick_short(s, start, present_index - 1);
        quick_short(s, present_index + 1, end);
    }
}
int pivot(char s[], int start, int end)
{
    int num = s[start], temp;
    int i = start;
    int j = end;
    while (i < j)
    {
        while (s[i] <= num && i <= end)
        {
            i++;
        }
        while (s[j] > num)
        {
            j--;
        }
        if (i < j)
        {
            temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
    }
    if (i >= j)
    {
        temp = s[j];
        s[j] = s[start];
        s[start] = temp;
    }
    return j;
}
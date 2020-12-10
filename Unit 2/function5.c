#include <stdio.h>
int fab(int term);
int main()
{
    int term;
    printf("Enter the nth term: ");
    scanf("%d", &term);
    fab(term);
}
int fab(int term)
{
    int cal, temp = -1, temp1 = 1;
    while (term != 0)
    {
        cal = temp + temp1;
        temp = temp1;
        temp1 = cal;
        printf(" %d", cal);
        term--;
    }
}
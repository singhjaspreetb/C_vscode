#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[50];
    float mst1;
    float mst2;
    int atten;
    int del;
} student;

float av = 0, atd;

void input(student *);

int main()
{
    student *ptr;
    int num, i, dt[100], in = 0;

    printf("Enter Number Of Student: ");
    scanf("%d", &num);

    ptr = (student *)malloc(num * sizeof(student));

    for (i = 0; i < num; i++)
    {
        input(ptr + i);
        if (av < 80 && atd < 75)
        {
            dt[in++] = i;
        }
    }

    printf("\nDetained student list: \n");
    for (i = 0; i < in; i++)
    {
        printf("%d) %s\n", i + 1, (ptr + dt[i])->name);
    }

    free(ptr);
}

void input(student(*ptr))
{
    float m1, m2, a, d;
    printf("\nEnter Name Of Student: ");
    fflush(stdin);
    gets(ptr->name);

    printf("Enter MST-1 Marks(Out Of 200): ");
    scanf("%f", &ptr->mst1);
    m1 = ptr->mst1;

    printf("Enter MST-2 Marks(Out Of 200): ");
    scanf("%f", &ptr->mst2);
    m2 = ptr->mst2;

    printf("Enter Number of Attended Lectures: ");
    scanf("%d", &ptr->atten);
    a = ptr->atten;

    printf("Enter Number Of Delevered Lectures: ");
    scanf("%d", &ptr->del);
    d = ptr->del;

    av = ((ptr->mst1 + ptr->mst2) / 400) * 100;
    atd = (float)(ptr->atten) / (ptr->del) * 100;
}

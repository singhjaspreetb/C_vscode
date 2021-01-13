#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char name[20];
    char gender[20];
    int age;
    int marital;
    char city[20];
} person;
person *ptr;
int num;
void input();
void print();
void married();
void city();
void age();
int main()
{
    printf("\nEnter Number Of Person: ");
    scanf("%d", &num);
    ptr = (person *)malloc(num * sizeof(person));
    input();
    age();
    married();
    city();
    free(ptr);
}
void input()
{
    int i;
    for (i = 0; i < num; i++)
    {
        printf("\nEnter Name: ");
        fflush(stdin);
        gets((ptr + i)->name);

        printf("Enter Gender: ");
        fflush(stdin);
        gets((ptr + i)->gender);

        printf("Enter Age: ");
        scanf("%d", &(ptr + i)->age);

        printf("Martial Status ( 1.Married  2.Un-Married)\nYour Vhoice : ");
        scanf("%d", &(ptr + i)->marital);

        printf("Enter city: ");
        fflush(stdin);
        gets((ptr + i)->city);
    }
}
void age()
{
    int i;
    printf("\n\nPeople Age >=20 and <=30\n");
    for (i = 0; i < num; i++)
    {
        if ((ptr + i)->age >= 20 && (ptr + i)->age <= 30)
        {
            printf("%s\n", (ptr + i)->name);
        }
    }
}
void married()
{
    int i;
    printf("\n\nMarried Person: \n");
    for (i = 0; i < num; i++)
    {
        if (((ptr + i)->marital) == 1)
        {
            printf("%s\n", (ptr + i)->name);
        }
    }
}
void city()
{
    int i = 0, j = 0;
    printf("\n\nSame city person: \n");
    for (i = 0; i < num - 1; i++)
    {
        for (j = i + 1; j < num; j++)
        {
            if (*(ptr + i)->city == *(ptr + j)->city)
            {
                printf("%s \n%s", (ptr + i)->name, (ptr + j)->name);
            }
        }
    }
}
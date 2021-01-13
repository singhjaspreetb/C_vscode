#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    char name[50];
    int age;
    int work;
    int height;
} mother;
typedef struct
{
    char name[50];
    int age;
    int work;
    int height;
} father;

int work_m = 0;
long long int menheight = 0, womenheight = 0;

void input(father *, mother *);
void print(father *, mother *);

int main()
{
    father *ptr_f;
    mother *ptr_m;

    int num, i;

    printf("Enter Number Of Students: ");
    scanf("%d", &num);

    ptr_f = (father *)malloc(num * sizeof(father));
    ptr_m = (mother *)malloc(num * sizeof(mother));

    for (i = 0; i < num; i++)
    {
        printf("\nStudent %d\n\n", i + 1);
        printf("Father dtail: \n\n");
        input(ptr_f + i, NULL);
        printf("\n\nMother dtail: \n\n");
        input(NULL, ptr_m + i);
    }

    for (i = 0; i < num; i++)
    {
        printf("\nStudent %d\n\n", i + 1);
        print(ptr_f + i, NULL);
        print(NULL, ptr_m + i);
    }

    if (((work_m / num) * 100) >= 70)
    {
        printf("\n\nWomen Are Job Oriented");
    }
    else
    {
        printf("\n\nWoman Are Not Job Oriented");
    }

    if ((womenheight / num) > (menheight / num))
    {
        printf("\n\nAverage Difference In Height: %d", (womenheight / num) - (menheight / num));
    }
    else
    {
        printf("Average Difference In Height: %d", (menheight / num) - (womenheight / num));
    }

    free(ptr_f);
    free(ptr_m);
}

void input(father *ptr_f, mother *ptr_m)
{
    if (ptr_f == NULL)
    {
        printf("Enter Name Of Mother: ");
        fflush(stdin);
        gets(ptr_m->name);

        printf("Enter Age Of Mother: ");
        scanf("%d", &ptr_m->age);

        printf("Enter Work Status Of Mother ( 1. Working / 2. Non-Working)\nyour choice:  ");
        fflush(stdin);
        scanf("%d", &ptr_m->work);
        if (ptr_m->work == 1)
        {
            work_m++;
        }

        printf("Enter Height Of Mother(in cm): ");
        scanf("%d", &ptr_m->height);

        menheight += ptr_m->height;
    }
    else
    {
        printf("Enter Name Of Father: ");
        fflush(stdin);
        gets(ptr_f->name);

        printf("Enter Age Of Father: ");
        scanf("%d", &ptr_f->age);

        printf("Enter Work Status Of Father ( 1. Working / 2. Non-Working)\nyour choice:  ");
        fflush(stdin);
        scanf("%d", &ptr_f->work);

        printf("Enter Height Of Father( in cm): ");
        scanf("%d", &ptr_f->height);

        womenheight += ptr_f->height;
    }
}

void print(father *ptr_f, mother *ptr_m)
{
    if (ptr_f == NULL)
    {
        printf("\nName Of Mother: %s", ptr_m->name);
        printf("\nMother Age : %d", ptr_m->age);
        if (ptr_m->work == 1)
            printf("\nMother Work Status : Working");
        else
            printf("\nMother Work Status : Non-Working");
        printf("\nMother Height: %d", ptr_m->height);
    }
    else
    {
        printf("\nName Of Father: %s", ptr_f->name);
        printf("\nFather Age : %d", ptr_f->age);
        if (ptr_f->work == 1)
            printf("\nFather Work Status : Working");
        else
            printf("\nFather Work Status : Non-Working");
        printf("\nFather Height: %d", ptr_f->height);
    }
}
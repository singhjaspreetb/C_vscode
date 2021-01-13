/*#include <stdio.h>
typedef struct
{
    char name[20];
    int rollno;
} student;
student in;
student *input();
int main()
{
    student *s1;
    s1 = input();
    printf("\nName : %s", s1->name);
    printf("\nRoll. No. : %d", (*s1).rollno);
    return 0;
}
student *input()
{
    printf("Enter the name of student: ");
    gets(in.name);
    printf("Enter the roll number: ");
    scanf("%d", &in.rollno);
    return &in;
}
*/
/*
#include <stdio.h>

int main()

{

    int *j;

    void fun(int **);

    fun(&j);
    printf("%d", *j);
    return 0;
}

void fun(int **k)

{

    int a = 10;

    **k = a;
}
*/
/*
#include <stdio.h>

int main()

{

    float i = 10, *j;

    void *k;

    k = &i;

    j = k;

    printf("%f\n", *j);

    return 0;
}
*/
/*
#include <stdio.h>

#include <stdlib.h>

void fun(int *a)

{

    a = (int *)malloc(sizeof(int));
}

int main()

{

    int *p;

    fun(p);

    *p = 6;

    printf("%dn", *p);

    return (0);
}
*/
/*
#include <stdio.h>

#include <string.h>

int main()

{

    char *s;

    char *fun();

    s = fun();

    printf("%s\n", s);

    return 0;
}

char *fun()

{

    char buffer[30];

    strcpy(buffer, "RAM");

    return (buffer);
}
*/
/*
#include <stdio.h>

int main()

{

    int *p = (int *)malloc(sizeof(int));

    p = NULL;

    free(p);
}
*/
/*
#include <stdio.h>

int main()

{

    char str[20] = "Hello";

    char *const p = str;

    *p = 'M';

    printf("%s\n", str);

    return 0;
}
*/
/*
#include <stdio.h>

static int ptr[100];
int *inp();

int len;

int main()
{
    int *arr;
    arr = inp();

    printf("Numbers passed from function are: ");

    for (int i = 0; i < len; i++)
    {
        printf("%d\t", *(arr + i));
    }

    return 0;
}

int *inp()
{
    printf("Enter limit for input : ");
    scanf("%d", &len);
    for (int i = 0; i < len; i++)
    {
        printf("Enter %d number: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    return ptr;
}
*/
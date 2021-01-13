#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char name[50];
    int id;
    char blood[10];
    long long int phone;
    char date[20];
} hos;

void input(hos *);
void print(hos *);
int main()
{
    int num, i;
    hos *ptr;

    printf("Enter number of patients: ");
    scanf("%d", &num);

    ptr = (hos *)malloc(num * sizeof(hos));

    for (i = 0; i < num; i++)
    {
        printf("\nEnter dtails Of Patient......%d\n\n", i + 1);
        input(ptr + i);
    }

    for (i = 0; i < num; i++)
    {
        printf("\ndtails Of Patient.........%d\n\n", i + 1);
        print(ptr + i);
    }

    free(ptr);

    return 0;
}

void input(hos(*ptr))
{
    printf("Enter Name Of Patient: ");
    fflush(stdin);
    gets(ptr->name);

    printf("Enter Patient ID: ");
    scanf("%d", &ptr->id);

    printf("Enter Patient Blood Group: ");
    fflush(stdin);
    gets(ptr->blood);

    printf("Enter Contact Number Of Patient: ");
    scanf("%llu", &ptr->phone);

    printf("Enter Date Of Admission: ");
    fflush(stdin);
    gets(ptr->date);
}

void print(hos(*ptr))
{
    printf("Name: %s", ptr->name);
    printf("\nPatient ID: %d", ptr->id);
    printf("\nBlood Group: %s", ptr->blood);
    printf("\nContact number: %llu", ptr->phone);
    printf("\nDate Of Admission: %s", ptr->date);
}

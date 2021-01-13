#include <stdio.h>
#include <stdlib.h>

typedef union
{
    char name[20];
    int ID;
    char blood[10];
    long long int phone;
    char date[10];
} hos;

int main()
{
    hos *ptr;
    int num;

    printf("Enter Number Of Patients: ");
    scanf("%d", &num);

    ptr = (hos *)malloc(num * sizeof(hos));

    for (int i = 0; i < num; i++)
    {
        printf("\n\nPatient Number: %d\n\n", i + 1);
        printf("Enter Patient Name: ");
        fflush(stdin);
        gets((ptr + i)->name);

        printf("\nPatients Name: %s\n\n", (ptr + i)->name);

        printf("Enter Patient ID: ");
        scanf("%d", &(ptr + i)->ID);

        printf("\nPatient's ID: %d\n\n", (ptr + i)->ID);

        printf("Enter Patient's Blood Group: ");
        fflush(stdin);
        gets((ptr + i)->blood);

        printf("\nPatient's Blood Group: %s\n\n", (ptr + i)->blood);

        printf("Enter Patient's Phone Number: ");
        scanf("%llu", &(ptr + i)->phone);

        printf("\nPatient's Phone Number: %llu\n\n", (ptr + i)->phone);

        printf("Enter Date Of Admission: ");
        fflush(stdin);
        gets((ptr + i)->date);

        printf("\nDate Of Admission : %s\n\n", (ptr + i)->date);
    }

    free(ptr);
    return 0;
}

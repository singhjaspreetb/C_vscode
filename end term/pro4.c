#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    int dd;
    int mm;
    int yy;
} date;
typedef struct
{
    char first[15];
    char mid[15];
    char last[15];
} name;
typedef struct
{
    int epid;
    name nam;
    date dob;
    char depname[20];
    char deg[20];
    double sal;
} employe;
employe *ptr;
int num;
int id;
int choice;
char fstname[15];
int ext;
void input();
void output();
void outputid();
void outputfst();
int main()
{
    printf("Enter the number of employe: ");
    scanf("%d", &num);
    ptr = (employe *)malloc(num * sizeof(employe));
    input();
    output();
    while (ext != 1)
    {
    top:
        printf("\nBy which you want to know sallary...\n1.By employe id\t2.By First Name\nEnter choice: ");
        fflush(stdin);
        scanf("%d", &choice);
        if (choice == 1)
        {
            printf("Enter the employe id: ");
            fflush(stdin);
            scanf("%d", &id);
            outputid();
        }
        else if (choice == 2)
        {
            printf("Enter the employe first name: ");
            fflush(stdin);
            gets(fstname);
            outputfst();
        }
        else
        {
            printf("Invalid !");
            goto top;
        }
        printf("\nIf You want to exit enter (1) | else (2): ");
        fflush(stdin);
        scanf("%d", &ext);
    }
    return 0;
}
void input()
{
    for (int i = 0; i < num; i++)
    {
        printf("\nEnter the details of employe %d ....", i + 1);
        ep:
        printf("\nEnter employe id: ");
        fflush(stdin);
        scanf("%d", &(ptr + i)->epid);
        for (int k = 0; k < i; k++)
        {
            if ((ptr + i)->epid == (ptr + k)->epid)
            {
                printf("Invalid !");
                goto ep;
            }
        }
        printf("\nEnter your Name...");
        printf("\nFirst Name: ");
        fflush(stdin);
        gets((ptr + i)->nam.first);
        printf("Middle Nmae: ");
        fflush(stdin);
        gets((ptr + i)->nam.mid);
        printf("Last Name: ");
        fflush(stdin);
        gets((ptr + i)->nam.last);
        printf("\nEnter the DOB (dd/mm/yy).....");
        fflush(stdin);
        day:
        printf("\nDay: ");
        scanf("%d", &(ptr + i)->dob.dd);
        fflush(stdin);
        if ((ptr + i)->dob.dd > 31 || (ptr + i)->dob.dd < 1)
        {
            printf("Invalid !");
            goto day;
        }
        month:
        printf("\nMonth: ");
        scanf("%d", &(ptr + i)->dob.mm);
        fflush(stdin);
        if ((ptr + i)->dob.mm > 12 || (ptr + i)->dob.mm < 1)
        {
            printf("Invalid !");
            goto month;
        }
        printf("\nYear: ");
        scanf("%d", &(ptr + i)->dob.yy);
        printf("\nEnter Department Name: ");
        fflush(stdin);
        gets((ptr + i)->depname);
        printf("\nEnter Degination Name: ");
        fflush(stdin);
        gets((ptr + i)->deg);
        printf("\nEnter the Salary: ");
        fflush(stdin);
        scanf("%lf", &(ptr + i)->sal);
    }
}
void output()
{
    for (int i = 0; i < num; i++)
    {
        printf("\n\nDetails of employe %d ....", i + 1);
        printf("\nEmploye id: %d", (ptr + i)->epid);
        printf("\nName...");
        printf("\nFirst Name: %s", (ptr + i)->nam.first);
        printf("\nMiddle Nmae: %s", (ptr + i)->nam.mid);
        printf("\nLast Name: %s", (ptr + i)->nam.last);
        printf("\nDOB (dd/mm/yy): %d/%d/%d", (ptr + i)->dob.dd, (ptr + i)->dob.mm, (ptr + i)->dob.yy);
        printf("\nDepartment Name: %s", (ptr + i)->depname);
        printf("\nDegination Name: %s", (ptr + i)->deg);
        printf("\nSalary: %.2lf", (ptr + i)->sal);
    }
}
void outputid()
{
    for (int i = 0; i < num; i++)
    {
        if (id == (ptr + i)->epid)
        {
            printf("\nSalary: %.2lf", (ptr + i)->sal);
            break;
        }
    }
}
void outputfst()
{
    int ret;
    for (int i = 0; i < num; i++)
    {
        ret = strcmp((ptr + i)->nam.first, fstname);
        if (ret == 0)
        {
            printf("\nSalary: %.2lf", (ptr + i)->sal);
        }
    }
}
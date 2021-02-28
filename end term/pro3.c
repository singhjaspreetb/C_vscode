#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    int rollno;
    char name[50];
    int dd,mm,yy;
    int sem;
    char course[50];
    int batchyear;
}student;
student *ptr;
int num;
void input();
void output();
int main()
{
    printf("Enter the number of student: ");
    scanf("%d",&num);
    ptr=(student*)malloc(num*sizeof(student));
    input();
    output();
    free(ptr);
    return 0;
}
void input()
{
    for(int i=0;i<num;i++)
    {
        printf("\nEnter the details of student %d ....",i+1);
        printf("\n\nEnter the Roll Number: ");
        fflush(stdin);
        scanf("%d",&(ptr+i)->rollno);
        printf("\nEnter the Name: ");
        fflush(stdin);
        gets((ptr+i)->name);
        printf("\nEnter the DOB (dd/mm/yy).....");
        fflush(stdin);
        day:
        printf("\nDay: ");
        scanf("%d", &(ptr + i)->dd);
        fflush(stdin);
        if ((ptr + i)->dd > 31 || (ptr + i)->dd<1)
        {
            printf("Invalid !");
            goto day;
        }
        month:
        printf("\nMonth: ");
        scanf("%d", &(ptr + i)->mm);
        fflush(stdin);
        if ((ptr + i)->mm > 12 || (ptr + i)->mm < 1)
        {
            printf("Invalid !");
            goto month;
        }
        printf("\nYear: ");
        scanf("%d", &(ptr + i)->yy);
        printf("\nEnter the semestr: ");
        fflush(stdin);
        scanf("%d", &(ptr + i)->sem);
        printf("\nEnter the course name: ");
        fflush(stdin);
        gets((ptr + i)->course);
        printf("\nEnter the batch year: ");
        fflush(stdin);
        scanf("%d", &(ptr + i)->batchyear);
    }
}
void output()
{
    int i=0;
    if ((ptr + i)->rollno!=0)
    {
        for (i = 0; i < num; i++)
        {
            printf("\n\n\nThe details of student %d ....", i + 1);
            printf("\n\nRoll Number: %d", (ptr + i)->rollno);
            printf("\nName: %s", (ptr + i)->name);
            printf("\nDOB (dd/mm/yy): %d/%d/%d", (ptr + i)->dd, (ptr + i)->mm, (ptr + i)->yy);
            printf("\nSemestr: %d", (ptr + i)->sem);
            printf("\nCourse name: %s", (ptr + i)->course);
            printf("\nBatch year: %d", (ptr + i)->batchyear);
        }
    }
}
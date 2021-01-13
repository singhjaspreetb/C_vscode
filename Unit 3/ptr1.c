#include <stdio.h>
int main()
{
    typedef struct 
    {
        char name[20];
        int rollno;
    }student;
    student s1,*ptr;
    ptr=&s1;
    printf("Enter the name of student: ");
    gets((*ptr).name);
    fflush(stdin);
    printf("Enter the roll number: ");
    scanf("%d",&ptr->rollno);
    printf("\nName : %s",ptr->name);
    printf("\nRoll. No. : %d",(*ptr).rollno);
    return 0;
}
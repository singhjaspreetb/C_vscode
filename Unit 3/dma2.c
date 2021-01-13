#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num,choice,num2;
    printf("Enter the number of student: ");
    scanf("%d",&num);
    int *ptr=(int*) malloc(num*sizeof(int));
    if (ptr == NULL)
    { 
        printf("Memory not allocated!");
        exit(0);
    }
    
    for(int i=0;i<num;i++)
    {
        printf("\nRoll No of %d student: ",i+1);
        scanf("%d",&ptr[i]);
    }
    printf("\nNumber of student present in class..........\n");
    for (int i = 0; i < num; i++)
    {
        printf("\nRoll No of %d student: %d", i + 1, ptr[i]);
    }
    printf("\n\nIs new student came to the class.......\n1-Yes\t2-No\nChoice:  ");
    scanf("%d",&choice);
    if(choice==1)
    {
        printf("\nEnter the number of New students: ");
        scanf("%d",&num2);
        ptr=(int*) realloc(ptr,num2*sizeof(int));
        if (ptr == NULL)
        {
            printf("Memory not allocated!");
            exit(0);
        }
        for (int i = num; i < num+num2; i++)
        {
            printf("\nRoll No of %d student: ", i + 1);
            scanf("%d", &ptr[i]);
        }
        printf("\nNumber of student present in class..........\n");
        for (int i = 0; i < num+num2; i++)
        {
            printf("\nRoll No of %d student: %d", i + 1, ptr[i]);
        }
        free(ptr);
        printf("\n\nMemory is Freed");
    }
    else
    {
        free(ptr);
        printf("Memory is Freed");
    }
    
    return 0;
} 
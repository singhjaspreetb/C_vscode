#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char *ptr;
    ptr=(char*) malloc(8*sizeof(char));
    if(ptr==NULL)
    {
        printf("Memory not allocated!");
        exit(0);
    }
    strcpy(ptr,"jas");
    printf("Initial state: %s",ptr);
    ptr=(char*)realloc(ptr,6*sizeof(char));
    if (ptr == NULL)
    {
        printf("Memory not allocated!");
        exit(0);
    }
    strcpy(ptr,"jaspreet");
    printf("\n\nAfter reallocation: %s",ptr);
    return 0;
}

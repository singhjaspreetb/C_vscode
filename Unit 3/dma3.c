#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num;
    printf("Enter the number of element: ");
    scanf("%d",&num);
    int *ptr=(int*)calloc(num,sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory not allocated!");
        exit(0);
    }
    for (int i = 0; i < num; i++)
    {
        printf("\nElement %d: ", i + 1);
        scanf("%d", &ptr[i]);
    }
    printf("\n\nStored Numbers are..........");
    for (int i = 0; i < num; i++)
    {
        printf("\nElement %d: %d", i + 1,ptr[i]);
    }
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num-i-1;j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                ptr[j+1]+=ptr[j];
                ptr[j]=ptr[j+1]-ptr[j];
                ptr[j+1]-=ptr[j];
            }
        }
    }
    printf("\n\nStored Numbers are after shorting..........");
    for (int i = 0; i < num; i++)
    {
        printf("\nElement %d: %d", i + 1, ptr[i]);
    }
    return 0;
}
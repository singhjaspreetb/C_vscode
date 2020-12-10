#include <stdio.h>
int main()
{
    printf("*   *\n");
    printf(" * *\n");
    printf("  *\n");
    printf("  *\n");
    return 0;
}

#include <stdio.h>

int main()
{
    int arr[5]= {5,11,8,10,6}; //compile time initialisation
    int i,pos,max = arr[0];// assume 1st to be max
    
    for(i=0; i<5;i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
            pos = i;
        }
    }
    printf("maximum element =%d at position %d",max,pos+1);
    return 0;
}

#include<stdio.h>

int main()
{
	int i,j,k,n=5,arr[5]= {2,3,4,5,3};
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;)
		{
			if(arr[i]==arr[j])
			{
				for(k=j;k<5;k++)
				{
					arr[k]= arr[k+1];
				}
				n--;
			}
			else
			j++;
		}
	}
	printf("New array\n");
	for(i=0;i<n;i++)
		printf("%d ",arr[i]);
  
}

// Program to print duplicate elements in an array
#include <stdio.h>
int main()
{
    int i,j,n,arr[]= {5,11,8,10,6,5,11,8}; //compile time initialisation
    
    // finding length 
    n = sizeof(arr)/ sizeof(arr[0]);
    
    for(i=0;i<n;i++)
    {
        for(j=i+1; j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                printf("%d ",arr[i]);
            }
        }
    }
    return 0;
}

#include <stdio.h>

#define MAX 5

void main() {
   int array[MAX] = {1, 2, 4, 5};
   
   int N = 4;        // number of elements in array
   int i = 0;        // loop variable
   int index = 2;    // index location to insert new value
   int value = 3;    // new data element to be inserted

   // print array before insertion
   printf("Printing array before insertion −\n");

   for(i = 0; i < N; i++) {
      printf("array[%d] = %d \n", i, array[i]);
   }

   // now shift rest of the elements downwards   
   for(i = N; i >= index; i--) {
      array[i+1] = array[i];
   }

   // add new element at first position
   array[index] = value;

   // increase N to reflect number of elements
   N++;

   // print to confirm
   printf("Printing array after insertion −\n");

   for(i = 0; i < N; i++) {
      printf("array[%d] = %d\n", i, array[i]);
   }
}
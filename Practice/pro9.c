#include <stdio.h>
int main()
{
    int a[100],i,len,lar=0,seclar=0,sml=0,secsml=0,b[50],c[50],ct1=0,ct2=0,temp;
    printf("Enter the length of array: ");
    scanf("%d", &len);
    for (i = 0; i < len; i++)
    {
        printf("Array index[%d] position[%d]: ", i, i + 1);
        scanf("%d", &a[i]);
    }
    printf("\n\nFinding Largest element...\n");
    for (i = 0; i < len; i++)
    {
        if (a[i] > lar)
        {
            lar = a[i];
        }
    }
    printf("Lagest element: %d", lar);
    printf("\n\nFinding Second Largest element...\n");
    for (i = 0; i < len; i++)
    {
        if (a[i] != lar)
        {
            if (a[i] > seclar)
                seclar = a[i];
        }
    }
    printf("Second Lagest element: %d", seclar);

    sml=lar;
    secsml=seclar;
    printf("\n\nFinding Smallest element...\n");
    for (i = 0; i < len; i++)
    {
        if (a[i] < sml)
        {
            sml = a[i];
        }
    }
    printf("smallest element: %d", sml);
    printf("\n\nFinding Second smallest element...\n");
    for (i = 0; i < len; i++)
    {
        if (a[i] != sml)
        {
            if (a[i] < secsml)
                secsml = a[i];
        }
    }
    printf("Second smallest element: %d", secsml);
    printf("\n\nFinding Second largest duplicate element...");
    for(i=0;i<len;i++)
    {
        if(a[i]==seclar)
        {
            printf("\nFound at Index[%d] Position[%d]", i, i + 1);
            b[ct1] = i;
            ct1++;
        }
    }
    printf("\n\nFinding Second smallest duplicate element...");
    for (i = 0; i < len; i++)
    {
        if (a[i] == secsml)
        {
            printf("\nFound at Index[%d] Position[%d]", i, i + 1);
            c[ct2] = i;
            ct2++;
        }
    }
    for(i=0;i<ct1;i++)
    printf("\n%d ",b[i]);
    for (i = 0; i < ct2; i++)
        printf("\n%d ", c[i]);
    if(ct1>=ct2)
    {
        for(int i=0;i<ct2;i++)
        {
            temp=a[b[i]];
            a[b[i]]=a[c[i]];
            a[c[i]]=temp;
        }
    }
    else if (ct1 < ct2)
    {
        for (int i = 0; i < ct2; i++)
        {
            temp = a[b[i]];
            a[b[i]] = a[c[i]];
            a[c[i]] = temp;
        }
    }
    printf("\n\nArray After Swapping...\n");
    for (i = 0; i < len; i++)
    {
        printf("\nArray index[%d] position[%d]: %d\n", i, i + 1, a[i]);
    }
    return 0;
}
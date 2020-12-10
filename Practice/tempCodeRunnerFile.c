printf("\n\nShorting Array...\n");
    for(i=0;i<len-1;i++)
    {
        for(int j=0;j<len-i-1;j++)
        {
        if(a[j]>a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        }
    }